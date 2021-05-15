#include <iostream>
#include <string>
void Menu();
void Akun(int Pilihan);

using namespace std;
string TipeAkun[] = {"", "ATM"};
string respon;

int DetailAkun[] = {
	12345,		//nomor pin
	0,		//Saldo awal dalam akun
};

bool verivikasiPin(int pin) {
	if (pin == DetailAkun[0]) {
		return true;
	} else {
		return false;
	}
}

bool Proses(string respon) {
	if(respon =="y" || respon == "Y"){
		return true;
	} else if(respon == "n" || respon == "N"){
		string exit;
		cout << "\n\n\n\t terima kasih telah menggunakan layanan bank kami.";
		cin >> exit;
		return false;
	}

}

class SettingAkun {
	private:
		int Tipe;
		int Saldo;
	public:
		SettingAkun(int Tipe) {
			this->Tipe = Tipe;
			this->Saldo = DetailAkun[this->Tipe];
		}
		int getPenarikan() {
			int JumlahPenarikan;
			cout << "masukan jumlah penarikan:\n " << endl;
			cin >> JumlahPenarikan;

			if(JumlahPenarikan <= this->Saldo){
				int SaldoAkun = this->Saldo -= JumlahPenarikan;
				cout << "$"<< JumlahPenarikan << endl;
				
				// melakukan update pada saldo dalam akun
				DetailAkun[this->Tipe] = SaldoAkun;
				getSaldo();

			} else {
				cout << "Saldo tidak cukup" << endl;
				getSaldo();
			}

			return 0;
		}

		int getSetor() {
			int JumlahSetoran;
			cout << "Masukan jumlah setoran:\n" << endl;
			cin >> JumlahSetoran;

			int SaldoAkun = this->Saldo += JumlahSetoran;

			// melakukan update pada saldo dalam akun
			DetailAkun[this->Tipe] = SaldoAkun;

			cout << "\t$" << JumlahSetoran << " Telah Di Setorkan Pada AKun";
			getSaldo();
			 
			return 0;
		}

		int getSaldo() {
			string Saldo1;
			// mengembalikan jumlah dari saldo
			cout << "\napakan anda ingin mengecek "<< TipeAkun[this->Tipe] << " Saldo pada Akun? (y/n)\n" << endl;
			cin >> Saldo1;
			if(Saldo1=="y" || Saldo1=="Y"){
				cout << "Saldo pada Akun: $" << this->Saldo << endl;
			} 
			
			cout << "\n\napakah anda ingin melajutkan? (y/n)?\n";
			cin >> respon;

			if (Proses(respon)){
				Akun(this->Tipe); // kembali ke menu akun
			}

			return 0;
		}
};

void Akun(int opsi) {
			cout << "\n\n" <<TipeAkun[opsi] << "--\n\t1. Check Saldo"
				<<"\n\t2. Penarikan " << TipeAkun[opsi] 
				<<"\n\t3. Setor " << TipeAkun[opsi] 
				<<"\n\t4. --Return to Menu." << endl;

		SettingAkun Akun(opsi); 

		int PilihanMenu;
		cin >> PilihanMenu;
		
		switch(PilihanMenu){
			case 1:
				cout << Akun.getSaldo();
				break;
			case 2: 
				cout << Akun.getPenarikan();
				break;
			case 3: 
				cout << Akun.getSetor();
				break;
			case 4:
				Menu();
				break;
			default:
				cout << "Apakah anda ingin melanjutkan transakasi? (y/n)\n";
				cin >> respon;
				Proses(respon);
			
				if (Proses(respon)) {
					Menu(); // return to main menu
				} 
				break;
		}
}

void menu() {
	int Pilihan;
	cout << "\n\nMenu Utama--" <<endl;
	cout << "\tMasukan pilihan. " << endl;
	cout << "\t1. ATM \n\t2. Exit" << endl;
	cin >> Pilihan;
	switch(Pilihan){
		case 1: Akun(Pilihan);
			break;
		default:
			cout << "Apakah Anda ingin Melanjutkan? (y/n)\n";
			cin >> respon;
			Proses(respon);
			
			if (Proses(respon)) {
				menu();
			} 
			break;
	}
}


int main() {
	int pin;
	cout << "Selamat datang.\nTolong masukan Pin Anda:" << endl;
	do {
		cin >> pin;

		if(verivikasiPin(pin)) {
			menu(); // melanjutkan untuk ke main menu
		} else {
			cout << "Pin yang anda masukan Salah. Tolong masukan pin:" << endl; 
		}
	} while (!verivikasiPin(pin));

	return 0;
}

#include <iostream>

using namespace std;

int NomorAkun = 11111;
int NomorPin = 22222;
int Saldo = 0;

bool login () {
	
	int NomorAkunYangDiberikan;
	int NomorPinYangDiberikan;
	bool NomorAkunSalah = true;
	bool NomorPinSalah = true;
	
	cout << "Welcome!" << endl;
	
	while (NomorAkunSalah) {
		
		cout << "Masukan Nomor Akun Anda: ";
		cin >> NomorAkunYangDiberikan;
		
		if (NomorAkunYangDiberikan == NomorAkun) {
			 NomorAkunSalah = false;
		} else {
			cout << "Nomor Akun Yang Di Masukan Salah! Harap Coba Lagi." << endl;
		}
	}

	while (NomorPinSalah) {
		
		cout << "Masukan Nomor PIN Anda : ";
		cin >> NomorPinYangDiberikan;
		
		if (NomorPinYangDiberikan == NomorPin) {
			NomorPinSalah = false;
		} else {
			cout << "Nomor Pin Yang Di Masukan Salah! Harap Coba Lagi." << endl;
		}

	}

	return true;
		
}

int User() {
int Pilihan;

	cout << "Main menu:" << endl;
	cout << "	1 - Cek Saldo" << endl;
	cout << "	2 - Tarik Uang" << endl;
	cout << "	3 - Menyetorkan Uang" << endl;
	cout << "	4 - Keluar" << endl;
	cout << "Masukan Pilihan(1-4) " << endl;
	cin >> Pilihan;
	
	return Pilihan;
	
}

void CekSaldo () {

	cout << "Jumlah Saldo:" << endl;
	cout << "$" << Saldo << endl;

}

void PenarikanUang() {
	
	int Pilihan;
	int JumlahPenarikan;
	bool Quit = true;

	do {
		cout << "Opsi Penarikan:" << endl;
		cout << "1 - $20" << endl;
		cout << "2 - $40" << endl;
		cout << "3 - $60" << endl;
		cout << "4 - $100" << endl;
		cout << "5 - $200" << endl;
		cout << "6 - Batal bertransaksi" << endl;
		cout << "Pilih Opsi Penarikan (1-6)" << endl;

		cin >> Pilihan;
		switch (Pilihan) {
			case 1:
				JumlahPenarikan = 20;
				break;
			case 2:
				JumlahPenarikan = 40;
				break;
			case 3:
				JumlahPenarikan = 60;
				break;
			case 4:
				JumlahPenarikan = 100;
				break;
			case 5:
				JumlahPenarikan = 200;
				break;
			case 6:
				Quit = false;
				break;
			default:
				cout << "Salah dalam memasukan pilihan! Harap Coba Lagi." << endl;
				break;
		} 
		
		if (JumlahPenarikan != 0) {
			if (JumlahPenarikan > Saldo) {
				cout << "Anda Hanya Mempunyai Saldo Sebanyak $" << Saldo << ". Anda Tidak Dapat Menarik Saldo Sebanyak $" << JumlahPenarikan << endl;
			} else {
				Saldo = Saldo - JumlahPenarikan;
				Quit = false;
			}
			JumlahPenarikan = 0;
		}

	} while (Quit);	

}

void MenyetorkanUang() {

	int Pilihan;	
	bool Quit = true;

	do {
		
		cout << "Pilihan Deposit:" << endl;
		cout << "1 - $20" << endl;
		cout << "2 - $40" << endl;	
		cout << "3 - $60" << endl;
		cout << "4 - $100" << endl;
		cout << "5 - $200" << endl;
		cout << "6 - Batal Bertransaksi" << endl;
		cout << "Pilih Opsi Deposit (1-6)" << endl;

		cin >> Pilihan;
		switch (Pilihan) {
			case 1:
				Saldo = Saldo + 20;
				Quit = false;
				break;
			case 2:
				Saldo = Saldo + 40;
				Quit = false;
				break;
			case 3:
				Saldo = Saldo + 60;
				Quit = false;
				break;
			case 4:
				Saldo = Saldo + 100;
				Quit = false;
				break;
			case 5:
				Saldo = Saldo + 200;
				Quit = false;	
				break;
			case 6:
				Quit = false;
				break;
			default:
				cout << "Salah dalam memasukan pilihan! Harap Coba Lagi." << endl;
				break;
		} 
		
	} while (Quit);

}

int main () {
				
	if (login()) {
		
		int Quit = true;

		do {
			
			switch (User()) {
				case 1:
					CekSaldo();
					break;
				case 2:
					PenarikanUang();
					break;
				case 3:
					MenyetorkanUang();
					break;
				case 4:
					Quit = false;
					break;
				default:
					cout << "Salah dalam memasukan pilihan! Harap Coba Lagi." << endl;
					break;
			}

		} while (Quit);

	}

	return 0;

}

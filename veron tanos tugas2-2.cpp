#include <iostream>

using namespace std;
char parkir();
class tollbooth{
	private:
	int banyaknya_mobil;
	int jumlah;
	public:
		void mobil_berbayar(){
			banyaknya_mobil++;
			jumlah+=0.50;
		}
		void mobil_tidak_berbayar(){
			banyaknya_mobil++;
		}
		void display(){
			cout << "jumlah keseluruhan mobil" << banyaknya_mobil << endl;
			cout << "jumlah total" << jumlah << endl;
		}
};
int main(){
	tollbooth booth;
	char parkir1;
	parkir1 = parkir();
	while(parkir1!=1){
	switch(parkir1){
		case 1
		cout << "berbayar" << endl << endl;
		booth.mobil_berbayar();
		parkir1 = parkir();
		break;
		
		case 2:
		cout << "tidak berbayar" << endl << endl;
		booth.mobil_tidak_berbayar();
		parkir1 = parkir();
		break;
		
		case 3:
		cout << "result" << endl << endl;
		break;
		default:
		cout << "inputan salah" << endl;
	}
	}
	booth.display();
}

char parkir(){
	cout << "input 1 untuk membayar" << endl;
	cout << "input 2 untuk tidak membayar" << endl;
	cout << "input 3 untuk keluar" << endl;
	cout << "pilihan" << endl;
	return 0;
}

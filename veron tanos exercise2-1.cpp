#include <iostream>

using namespace std;
class employee{
	private:
	int EN;
	float EC;
	
	public:
		
	void keterangan_pegawai(){
		cout << "masukan nomer pegawai : ";
		cin >> EN;
		cout << "masuakn kompensasi : ";
		cin >> EC;
	}
	void display(){
		cout << "nomer pegawai : " << EN << endl;
		cout << "gaji pegawai : " << EC << endl;
	}
};
int main ()
{
	employee pegawai1, pegawai2, pegawai3;
	cout << "masukan data dari pegawai pertama" << endl;
	pegawai1.keterangan_pegawai();
	cout << "masukan data dari pegawai kedua" << endl;
	pegawai2.keterangan_pegawai();
	cout << "masukan data dari pegawai ketiga" << endl;
	pegawai3.keterangan_pegawai();
	
	pegawai1.display();
	pegawai2.display();
	pegawai3.display();
}

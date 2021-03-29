#include <iostream>
#include <conio.h>
using namespace std;

class person{
  private:
    string name;
    char gendre;
  public:
    void setName(string name1) {
    }
    void setgendre(string gendre1) {
    }

    string getname() {
      return name;
    }
	char getgendre() {
      return gendre;
    }
};

class teacher : public person{
  private:
    int nik;
    string faculty;
  public:
    void setNik(int Nik) {
    }
    
    void setFaculty(int Faculty) {
    }
    
    void setData() {
    }
	void displayData(){
	}
int getNik() {
    return nik;
    }
    int getFaculty(){
    return faculty;
    }
class student : public person{
  private:
	int nim;
	string registration_number;
	string prodi;
  public:
	void setNim(int nim1) {
     nim = nim1;
    }
    void setRegistration_number(int registration_number1) {
     registration_number = registration_number1;
    }
    void setProdi(int prodi1) {
     prodi = prodi1;
    }
    
    int getNim(){
	}
	string getRegistration_number(){
	}
	string getProdi(){
	}
};
};

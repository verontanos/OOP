#include<iostream>
#include <conio.h>
using namespace std;

class mahasiswa{
	public:
	int assigment;
	int quiz;
	int attendance;
	int mid_test;
	int final_test;
	int AT,Q,AS,MT,FT;
	
	void Student(){
		
		int grade[3];
		int N;
		
		cout<<"masukan banyaknya mahasiswa:";
		cin>>N;
		
		for(int A=1; A<=N; A++){
		
		cout<<"masukan nilai dari mahasiswa: "<<endl;
		cout<<"Assignment	:"; cin>>assigment;
		cout<<"Quiz		:"; cin>>quiz;
		cout<<"Attendance	:"; cin>>attendance;
		cout<<"Mid Exam	:"; cin>>mid_test;
		cout<<"Final Exam	:"; cin>>final_test;
		
		AT 	= attendance*10/100;
		Q 		= quiz*10/100;
		AS 	= assigment*20/100;
		MT 	= mid_test*30/100;
		FT 	= final_test*30/100;
		
		grade[A]= AT+Q+AS+MT+FT;
		}
		

		
		cout<<"--------------------------------";
		cout<<"\nStudent Grade";
		cout<<"\n--------------------------------";
		cout<<"\nStudent\t \t GRADE";
		cout<<"\n--------------------------------\n";
		
		for (int A=1; A<=N; A++){
		cout<<""<<A;
			cout<<"\t \t "<< grade[A];
			if(grade[A]<=100 && grade[A]>=91){
			cout<<"(A)";
			}else if(grade[A]<=90 && grade[A]>=85){					
			cout<<"(A-)";
			}else if(grade[A]<=84 && grade[A]>=82){				
			cout<<"(B+)";
			}else if(grade[A]<=81 && grade[A]>=78){
			cout<<"(B)";
			}else if(grade[A]<=77 && grade[A]>=75){
			cout<<"(B-)";
			}else if(grade[A]<=74 && grade[A]>=70){
			cout<<"(C+)";
			}else if(grade[A]<=69 && grade[A]>=67){
			cout<<"(C)";
			}else if(grade[A]<=66 && grade[A]>=60){
			cout<<"(C-)";
			}else if(grade[A]<=59 && grade[A]>=40){
			cout<<"(D)";
			}else if(grade[A]<=39 && grade[A]>=0){
			cout<<"(F)";
			}else{
			cout<<"\nnilai salah input!!";
			}
			cout<<endl;
			}
			cout<<"\n--------------------------------";
		}
};
int main(){
	
	mahasiswa pelajar;
	pelajar.Student();
	
	return 0;
		}


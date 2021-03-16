#include<iostream>

using namespace std;

class mahasiswa{
	public:
	int assigment;
	int quiz;
	int attendance;
	int mid_test;
	int final_test;
	
	void Student(){
		
		int grade[3];
		int N;
		
		cout<<"Grading system ver1.0\n";
		cout<<"=======================\n";
		cout<<"Enter number of students:";
		cin>>N;
		
		for(int A=1; A<=N; A++){
		
		cout<<"masukan nilai dari mahasiswa: "<<endl;
		cout<<"Attendance	:"; cin>>assigment;
		cout<<"Quiz		:"; cin>>quiz;
		cout<<"Assignment	:"; cin>>attendance;
		cout<<"Mid Exam	:"; cin>>mid_test;
		cout<<"Final Exam	:"; cin>>final_test;
		
		int AT = (attendance * 10/100);
		int Q = (quiz * 10) /100;
		int AS = (assigment * 20) /100;
		int MT = (mid_test * 30) /100;
		int FT = (final_test * 30) /100;
		
		grade[A]= AT+Q+AS+MT+FT;
		}
		
		attendance 	= attendance*10/100;
		quiz 		= quiz*10/100;
		assigment 	= assigment*20/100;
		mid_test 	= mid_test*30/100;
		final_test 	= final_test*30/100;
		
		cout<<"--------------------------------";
		cout<<"\nStudent Grade";
		cout<<"\n--------------------------------";
		cout<<"\nStudent\t \t GRADE";
		cout<<"\n--------------------------------";
		
		for (int A=1; A<=N; A++){
		cout<<"\n"<<A;
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
			cout<<"\nsalah menginputkan nilai!!";
			}

			}
		}
};
int main(){
	
	mahasiswa pelajar;
	pelajar.Student();
	
	return 0;
}


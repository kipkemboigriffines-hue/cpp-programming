#include<iostream>
#include<string>
using namespace std;

int main(){
	string studentName;
	int marks;
	char grade;
	
	cout<<"Enter studentName:"<<endl;
	cin>>studentName;
	
	cout<<"Enter marks(0-100):"<<endl;
	cin>>marks;
	
	if(marks >=70 && marks<=100){
		grade ='A';
	}else if (marks>=60){
		grade= 'B';
	}else if(marks>=50){
		grade= 'C';
	}else if(marks>=40){
		grade= 'D';
	}else if(marks>=0){
		grade= 'E';
	}else{
		cout<<"Invallid marks!"<<endl;
		return 0;
	}
	cout<<"Student results:"<<endl;
	cout<<"====="<<endl;
	cout<<"stidentName:"<<studentName<<endl;
	cout<<"marks:"<<marks<<endl;
	cout<<"grade:"<<grade<<endl;
	return 0;
}

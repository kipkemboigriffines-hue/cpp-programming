#include <iostream>
using namespace std;

int main() {
string studentName;
float theoryMarks,practicalMarks,avaragescore;

cout<<"Enter studentName:"<<endl;
cin>>studentName;

cout<<"Enter theoryMarks:"<<endl;
cin>>theoryMarks;

cout<<"Enter practicalMarks:"<<endl;
cin>>practicalMarks;

avaragescore = (theoryMarks+practicalMarks)/2;

cout<<"Driving test results:"<<endl;
cout<<"======="<<endl;
cout<<"studentName"<<studentName<<endl;
cout<<"theoryMarks"<<theoryMarks<<endl;
cout<<"practicalMarks"<<practicalMarks<<endl;
cout<<"avaragescore"<<avaragescore<<endl;

if (avaragescore >=50){
cout<<"Result :passed"<<endl;
}else{
cout<<"Result :Failed"<<endl;
}
return 0;
}

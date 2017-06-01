#include <iostream>
using namespace std;
int main()
{
	int Marks;
	cout<<"enter Marks of student: "<<endl;
	cin>>Marks;
	if (Marks > 90){
	cout<<"grade A"<<endl;
	}
	else if (Marks > 50){
	cout<<"grade B"<<endl;
	}
	else if (Marks > 20){
	cout<<"grade C"<<endl;
	}
	else{
	cout<<"sorry you are FAIL!!"<<endl;
	}
	return 0;
}

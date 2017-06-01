#include<iostream>
using namespace std;
int main()
{
	int n,number;
	int max=-10000,smax=-10001;
        cout<<"enter numbers of input"<<endl;
        cin>>n;
	for (int i=0; i<n;i++){
	cout <<"enter next number"<<endl;
	cin>>number;
	if(number > smax && number<=max){
		smax=number;
	}
	else if(number>max){
		smax=max;
		max=number;
	}
		}
	cout<<"max is: "<<max<< "and second max is: "<<smax<<endl;
	return 0;
	}

     

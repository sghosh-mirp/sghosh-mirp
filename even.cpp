#include<iostream>
using namespace std;
int main()
{
	int N,k=0,sum=0;
	cout<<"enter a number"<<endl;
	cin>>N;
	while(k<N){
	sum+=k;
	k+=2;
	}
	cout<<"sum of all even numbers from 2 to "<< N <<" is: "<<sum<<endl;
	return 0;
} 

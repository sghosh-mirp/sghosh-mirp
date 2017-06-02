#include<iostream>
using namespace std;
int main(){
int N;
cout<<"enter a number"<<endl;
cin>>N;
for (int i=1;i<=N;i++){
	for(int a=1;a<=(i*N);a++){
	cout<<i;
}
cout<<" ";
for(int a=i;a>=1;a--){
	cout<<a;
}
cout<<" "<<endl;
}
return 0;
}

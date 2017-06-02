#include<iostream>
using namespace std;
int main(){
int N;
cout<<"enter a number"<<endl;
cin>>N;
for (int i=1;i<=N;i++){
	for(int a=1;a<=(N-i+1);a++){
	cout<<"*";
}
cout<<" noddy ";
for(int a=i;a>=1;a--){
	cout<<"*";
}
cout<<" "<<endl;
}
return 0;
}

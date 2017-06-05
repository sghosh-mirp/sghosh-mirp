#include<iostream>
using namespace std;

int main()
{

int x[5]={1,2,3,4,5};
for (int i=0;i<5;i++)
cout<<x[i]<<" ";
cout<<"enter first name";
char name[50]="noddy";
cout<<" ";
cin>>name;
for(int a=0;name[a]!='\0';a++)
cout<<name[a]<<" "<<a<<endl;
cout<<name<<endl;
return 0;
}

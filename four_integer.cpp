#include<iostream>
using namespace std;
int main()
{
        int P, Q, R, S,max=-100000,max1;
         cout<<"enter a integer 1: "<<endl;
	cin>>P;
         cout<<"enter a integer 2: "<<endl;
	cin>>Q;
         cout<<"enter a integer 3: "<<endl;
	cin>>R;
         cout<<"enter a integer 4: "<<endl;
	cin>>S;
if (P>max)
	max=P;
if (Q>max)
	max=Q;
if (R>max)
	max=R;
if (S>max)
	max=S;
cout<<"max value = "<<max;

return 0;
}
     

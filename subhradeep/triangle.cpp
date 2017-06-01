#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int x1,x2,x3,y1,y2,y3,a,b,c;
	cout<<"enter co-ordinate x1: ";
	cin>>x1;
	cout<<"enter co-ordinate x2: ";
	cin>>x2;
	cout<<"enter co-ordinate x3: ";
	cin>>x3;
	cout<<"enter co-ordinate y1: ";
	cin>>y1;
	cout<<"enter co-ordinate y2: ";
	cin>>y2;
	cout<<"enter co-ordinate y3: ";
	cin>>y3;
	a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	if (a==b && b==c && c==a)
		cout<<"equilateral triangle";
	else if ((a==b || b==c || c==a))
		cout<<"isoceles triangle";
	else if (a!=b && b!=c && c!=a)
		cout<<"scalene triangle";
	return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
int i,j,n,k,flag =1;
double a[100][100],b[100],x[100],y[100],er;
printf("\n Enter the order of matrix n \n");
scanf("%d",&n);
printf("\n Enter the stopping criteria \n");
scanf("%lf", &er);
for (i = 1; i <= n; i++)
{
	x[i] = 0;
	y[i] = 0;
        for(j = 1; j <= n+1; j++)
	{
            	printf("Enter the element at the %d th row and %d th column", i, j);
            	scanf("%lf",&a[i][j]);
	}
}
int itr = 0;
itr = itr + 1;
while(flag)
{
for (i = 1; i<=n; i++)
{
	x[i] = a[i][n+1];
	for (j= 1; j<=n ; j++)
	{
		if(i==j)
		{
			x[i] = x[i]/a[i][i];
		}
		else
		{
			x[i] = (x[i] - (a[i][j]*x[j]));
		}
}
for (k= 1; k<=n; k++)
{
	if(abs(x[k]-y[k]) > er)
	{
		printf("%d",itr);
		for (i = 1;i<=n;i++)
		{
			y[i]=x[i];
			printf("%lf",x[i]);
		}
		printf("\n");
	}
	else continue;
}
flag = 0;
}
}
}



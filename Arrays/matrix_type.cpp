//type of matrix
#include<iostream>
using namespace std;
void issymmetric(int b[][10],int p)
{
	int i,j,t=0;
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			if((i!=j)&&(b[i][j]==b[j][i]))
				t++;
		}
	}
	if(t==(p*p-p))
		cout<<"A is symmetric matrix\n";
	else
		cout<<"A is not a symmetric matrix\n";
}
void isskewsymmetric(int c[][10],int q)
{
	int i,j,t=0;
	for(i=0;i<q;i++)
	{
		for(j=0;j<q;j++)
		{
			if(i!=j)
			{
				if(c[i][j]==-c[j][i])
					t++;
			}
			else
			{
				if(c[i][j]==0)
					t++;
			}
		}
	}
	if(t==q*q)
		cout<<"A is skew-symmetric matrix\n";
	else
		cout<<"A is not a skew-symmetric matrix\n";
}
void isdiagonal(int d[][10],int r)
{
	int i,j,t=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i!=j)
			{
				if(d[i][j]==0)
					t++;
			}
		}
	}
	if(t==(r*r-r))
		cout<<"A is diagonal matrix\n";
	else
		cout<<"A is not a diagonal matrix\n";
}
void isidentity(int e[][10],int s)
{
	int i,j,t=0;
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(i!=j)
			{
				if(e[i][j]==0)
					t++;
			}
			else
			{
				if(e[i][j]==1)
					t++;
			}
		}
	}
	if(t==s*s)
		cout<<"A is an identity matrix\n";
	else
		cout<<"A is not an identity matrix\n";
}
int main()
{
	int a[10][10],n,i,j;
	cout<<"enter the order of the square matrix: ";
	cin>>n;
	cout<<"enter the elements row by row: \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<" MATRIX A :\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	issymmetric(a,n);
	isskewsymmetric(a,n);
	isdiagonal(a,n);
	isidentity(a,n);
}

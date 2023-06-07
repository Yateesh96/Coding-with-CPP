//maximum of array
#include<iostream>
using namespace std;
int maxint(int a[],int n)
{
	int max;
	max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int main()
{
	int a[15],n;
	cout<<"enter the number of elements: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter element-"<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"the maximum of the array elements is: "<<maxint(a,n);
}

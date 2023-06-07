#include<iostream>
using namespace std;
int merge_dup(int* a1,int* a2,int* res,int n1,int n2)
{
	int i,j,n=n1+n2;
	for(i=0;i<n1;i++)
	*(res+i)=*(a1+i);
	for(j=0;j<n2;j++)
	{
		*(res+i)=*(a2+j);
		i++;
	}
	for(int p=0;p<n;p++)
	{
		for(int q=p+1;q<n;q++)
		{
			if(*(res+p)==*(res+q))
			{
				for(int k=q;k<n;k++)
				{
					*(res+k)=*(res+k+1);
				}
				n--;
				q--;
			}
		}
	}
	return n;
}
main()
{
	int a[20],b[20],res[25],n1,n2,nr;
	cout<<"enter the number of elements in first array: ";
	cin>>n1;
	cout<<"enter first array elements:\n";
	for(int i=0;i<n1;i++)
	cin>>a[i];
	cout<<"enter the number of elements in second array: ";
	cin>>n2;
	cout<<"enter second array elements:\n";
	for(int i=0;i<n2;i++)
	cin>>b[i];
	nr=merge_dup(a,b,res,n1,n2);
	cout<<"\nthe resultant array after merging 2 arrays and removing the duplicates:\n";
	for(int i=0;i<nr;i++)
	cout<<res[i]<<"\t";
}

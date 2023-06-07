//repeated character removal
#include<iostream>
using namespace std;
main()
{
	string a;
	cout<<"input the string: \n";
	getline(cin,a);           
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=i+1;a[j]!='\0';j++)
		{
			if(a[j]==a[i])
			{
				for(int k=j;k<a.length();k++)
				{
					a[k]=a[k+1];
				}
				j--;
			}
		}
	}
	cout<<"the resultant string is: \n";
	cout<<a;
}

//repeated character removal
#include<iostream>
#include<cstring>
using namespace std;
void no_repetitions(char[]);
main()
{
	char str[69];
	cout<<"input the string: \n";
	cin.get(str,69);
	no_repetitions(str);
}
void no_repetitions(char a[])
{
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=i+1;a[j]!='\0';j++)
		{
			if(a[j]==a[i])
			{
				for(int k=j;k<strlen(a);k++)
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

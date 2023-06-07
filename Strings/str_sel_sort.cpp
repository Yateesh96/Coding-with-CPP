//sorting a string
#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char str[20];
	int n,minpos,i,j;
	char temp;
	cout<<"input the string: \n";
	cin.get(str,20);
	for(i=0;str[i]!='\0';i++)
	{
		minpos=i;
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[j]<str[minpos])
			minpos=j;
		}
		if(minpos!=i)
		{
			temp=str[minpos];
			str[minpos]=str[i];
			str[i]=temp;
		}
	}
	cout<<"the resultant string after sorting is: \n";
	cout<<str;
}

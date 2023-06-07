//sorting a string
#include<iostream>
using namespace std;
main()
{
	string s1;
	int n,minpos,i,j;
	char temp;
	cout<<"input the string: \n";
	getline(cin,s1);
	for(i=0;i<s1.length();i++)
	{
		minpos=i;
		for(j=i+1;j<s1.length();j++)
		{
			if(s1[j]<s1[minpos])
			minpos=j;
		}
		if(minpos!=i)
		{
			temp=s1[minpos];
			s1[minpos]=s1[i];
			s1[i]=temp;
		}
	}
	cout<<"the resultant string after sorting is: \n";
	cout<<s1;
}

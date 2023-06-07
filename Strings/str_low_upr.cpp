//upper case to lower
#include<iostream>
using namespace std;
main()
{
	char str[20];
	cout<<"input the string: \n";
	cin.get(str,20);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		str[i]=str[i]+32;
	}
	cout<<"string after conversion: \n";
	cout<<str;
}

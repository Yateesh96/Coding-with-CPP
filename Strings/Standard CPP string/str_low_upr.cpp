//upper case to lower
#include<iostream>
using namespace std;
main()
{
	string str1;
	cout<<"input the string: \n";
	getline(cin,str1,'$');
	for(int i=0;i<str1.length();i++)
	{
		if(str1.at(i)>='A'&&str1.at(i)<='Z')
		{
			str1.at(i)=str1.at(i)+32;
		}
	}
	cout<<"string after conversion: \n";
	cout<<str1;
}

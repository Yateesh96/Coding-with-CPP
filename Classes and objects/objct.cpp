//Program to find number of objects using constructors
/*
method_1:
#include<iostream>
using namespace std;
int count=0;
class no_obj
{
	public:
		no_obj()
		{
			count++;
		}
		~no_obj()
		{}
		void showcount()
		{
			cout<<"The number of objects created and destroyed are: "<<count;	
		}
};
int main()
{
	no_obj o1,o2,o3,o4;
	o1.showcount();
}
*/
//method_2:
#include<iostream>
using namespace std;
class no_obj
{
	int *count;
	public:
		no_obj()
		{
			static int ct=0;
			ct++;
			count=&ct;
		}
		~no_obj()
		{}
		void showcount()
		{
			cout<<"The number of objects created and destroyed are: "<<*count;	
		}
};
int main()
{
	no_obj o1,o2,o3,o4;
	o1.showcount();
}

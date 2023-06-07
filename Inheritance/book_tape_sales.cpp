#include<iostream>
using namespace std;
class Publication
{
	protected:
	string title;
	float price;
	public:
	void getdata()
	{
		cout<<"enter the title of the book: ";
		cin>>title;
		cout<<"enter the price of the book: ";
		cin>>price;
	}
	void putdata()
	{
		cout<<"title of book: "<<title<<endl;
		cout<<"price: "<<price<<endl;
	}
};
class Sales
{
	protected:
	float usds;
	public:
	void getdata()
	{
		cout<<"enter the dollar sales of this book: ";
		cin>>usds;
	}
	void putdata()
	{
		cout<<"Sales of Publication: $"<<usds<<endl;
	}
};
class Book:public Publication,public Sales
{
	int page_ct;
	public:
	void getdata()
	{
		Publication::getdata();
		Sales::getdata();
		cout<<"enter the number of pages: ";
		cin>>page_ct;
	}
	void putdata()
	{
		Publication::putdata();
		Sales::putdata();
		cout<<"number of pages: "<<page_ct<<endl;
	}
};
class Tape:public Publication,public Sales
{
	float playback;
	public:
	void getdata()
	{
		Publication::getdata();
		Sales::getdata();
		cout<<"enter the total playback time in minutes: ";
		cin>>playback;
	}
	void putdata()
	{
		Publication::putdata();
		Sales::putdata();
		cout<<"Total playback time: "<<playback<<endl;
	}
};
main()
{
	int no_of_d;
	cout<<"Enter the number of details required: ";
	cin>>no_of_d;
	for(int i=0;i<no_of_d;i++)
	{
	char choice;
	cout<<"b-book\tt-tape\ninput choice: ";
	cin>>choice;
	if(choice=='b')
	{
		Book x;
		x.getdata();
		cout<<"\n";
		x.putdata();
		cout<<"\n\n";
	}
	else if(choice=='t')
	{
		Tape y;
		y.getdata();
		cout<<"\n";
		y.putdata();
		cout<<"\n\n";
	}
	else
	{
		cout<<"invalid choice!\nprogram terminated!!";
		exit(0);
	}
	}
}

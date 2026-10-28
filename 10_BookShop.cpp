#include<iostream>
using namespace std;
class Media
{
	protected:
		char title[50];
		char publication[50];
	public:
		virtual void read()
		{
			cout<<"Enter Title: ";
			cin >> ws;
			cin.getline(title,50);
			cout<<"Enter Publication: ";
			cin.getline(publication,50);
		}
		virtual void show()
		{
			cout<<"Title: "<< title << endl;
			cout<<"Publication: "<< publication <<endl;
		}
};
class Book:public Media
{
	int pages;
	public:
		void read()
		{
			Media::read();
			cout<<"Enter Number of Pages: ";
			cin>>pages;
		}
		void show()
		{
			Media::show();
			cout<<"Number of Pages: "<< pages << endl;
		}
};
class Tape:public Media
{
	float playingTime;
	public:
		void read()
		{
			Media::read();
			cout<<"Enter Playing Time in Minutes: ";
			cin>>playingTime;
		}
		void show()
		{
			Media::show();
			cout<<"Playing Time "<< playingTime << " Minutes" << endl;
			
		}
};
int main()
{
	Book b;
	Tape t;
	Media*ptr;
	cout<<"Enter Book Details:"<<endl;
	ptr=&b;
	ptr->read();
	cout<<"\nEnter Tape Details:"<<endl;
	ptr=&t;
	ptr->read();
	cout<<"\nBook Details:"<<endl;
	ptr=&b;
	ptr->show();
	cout<<"\nTape Details:"<<endl;
	ptr=&t;
	ptr->show();
	return 0;
}

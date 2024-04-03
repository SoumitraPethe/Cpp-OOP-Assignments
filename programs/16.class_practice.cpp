//creat 2 class as object student and teacher and display each 2 inputs:
#include<iostream>
using namespace std;

class student{
	private:
	int roll;
	char name[20];
	int PRN;
	
	public:
	int setData()
	{
		cout<<"\nenter name:";
		cin>>name;
		cout<<"\nRoll:";
		cin>>roll;
		cout<<"\nEnter PRN:";
		cin>>PRN;
	}
	int display()
	{
		cout<<"\nName:"<<name;
		cout<<"\nRoll NO:"<<roll;
		cout<<"\nPRN:"<<PRN;
	}
};

class teacher{
	private:
		int ID;
		char name[15];
		char sub;
		
		int setdata()
		{
			cout<<"\nenter name:";
			cin>>name;
			cout<<"\nenter ID:";
			cin>>ID;
			cout<<"\nenter subject:";
			cin>>sub;
		}	
		int display()
		{
			cout<<"\n Name:"<<name;
			cout<<"\n ID"<<ID;
			cout<<"\n Subject"<<sub;
		}
};
int main()
{
	student a;
	a.setData();
	a.display();


	student b;
	b.setData();
	b.display();



	student c;
	c.setData();
	c.display();



	
	teacher aa;
	a.setData();
	a.display();
	
	teacher bb;
	b.setData();
	b.display();
	
	teacher cc;
	c.setData();
	c.display();
	
	return 0;

}

#include<iostream>
using namespace std;
class calender
{
	int d,m,y;
  public:
  void getdata()
     {
     	cout<<"enter the date,month,year:\n";
     	cin>>d>>m>>y;
        display();
	}	
 void display()
	{
		cout<<d<<"/"<<m<<"/"<<y<<endl;

		cout<<d<<"-"<<m<<"-"<<y<<endl;

		cout<<d<<"/"<<calculate(m)<<"/"<<y<<endl;
	}
string calculate(int mon)
	{
		string cal[]={"","jan","feb","mar","apr","may","june","jul","aug","sept","oct","nov","dec"};
		return cal[mon];
	}
};
int main()
{
	calender d1;
	d1.getdata();
	return 0;
}

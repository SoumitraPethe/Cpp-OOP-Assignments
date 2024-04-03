//using manupulators
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(5)<<1234<<" "<<setw(15)<<setiosflags(ios::left)<<"pritam"<<resetiosflags(ios::left)<<" "<<setw(6)<<setprecision(2)<<setfill("#")<<9.28<<setfill(32)<<endl;
	return 0;
}

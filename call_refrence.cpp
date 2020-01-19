#include<iostream>
using namespace std;
void value(int &x)
{
	cout<<"x="<<x<<endl;
	x=x+10;
	cout<<"x="<<x<<endl;
	
}
main()
{
	int a = 15;
	value(a);
	cout<<"a="<<a;
}

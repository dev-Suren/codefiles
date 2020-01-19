#include<iostream>
using namespace std;
main()
{
	int a = 10,&b=a;
	cout<<b;
	a= a+b;
	cout<<a<<b;
}

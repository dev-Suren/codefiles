#include<iostream>
using namespace std;
main()
{
	int a = 5,*p,**q;
	p= &a;
	*p=100;
	cout<<a<<*p;
	q=&p;
	cout<<a<<**q;
	**q=*p+10;
	cout<<a<<*p<<**q;
	cout<<*p<<a<<**q<<p <<*q<<q;
}

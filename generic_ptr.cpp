#include<iostream>
using namespace std;
main()
{
	int a=33;
	void *p;
	p=&a;
	cout<<*(int *)p<<endl;
}

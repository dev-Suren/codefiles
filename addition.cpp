#include<iostream>
using namespace std;
class adder
{	
	int a,b,c;
	private:
		void num();
		
	public:
		void addr()
		{
			num();
			
			cout<<"the sum of two number"<<a <<"+"<<b<<"is"<<c;
		}
};
void adder::num()
{
	cout<<"Enter any two number"<<endl;
			cin>>a>>b;
			c=a+b;
}
main()
{
	adder c;
	c.addr();
}


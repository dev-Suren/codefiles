//write a program to find the greatest number among two variables.
#include<iostream>
using namespace std;
class greatest_no
{
	int a,b;
	private:
		void num();
	
	public:
		void dif()
		{
			num();
			if(a>b)
			cout<<"a is greater than b"<<endl;
			else
			cout<<"b is greater than a"<<endl;
		}
};

void greatest_no::num()
		{
			cout<<"please input the any two numbers"<<endl;
			cin>>a>>b;
		}

main()
{
	greatest_no obj;
	obj.dif();
}

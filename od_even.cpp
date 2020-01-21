//even or odd 
#include<iostream>
using namespace std;
class od_even
{
	int a;
	private:
		num();
	public:
		change()
		{	
			num();
			if(a%2==0)
				{
					cout<<"the given number is even";
				}
			else
				
				{
					cout<<"the given number is odd";
				}
		}
		
};
int od_even::num()
{
	cout<<"please enter any numbers"<<endl;
	cin>>a;
}
main()
{
 od_even op;
 op.change();
}

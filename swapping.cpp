//swapping of two number
#include<iostream>
using namespace std;
class swapping
{
	int a,b,temp;
	private:
		num();
	public:
		change()
		{
			num();
			temp=a;
			a=b;
			b=temp;
			cout<<"the swapping of two integer in a ="<<a<<"and b="<<b;

		}
		
};
int swapping::num()
{
	cout<<"please inter the integers"<<endl;
	cin>>a>>b;

	
}
main()
{
 swapping op;
 op.change();
}

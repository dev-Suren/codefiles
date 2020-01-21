#include<iostream>
using namespace std;
class A
{
	int reg;
	static int code;
	public:
		void ip()
		{
			reg= ++code;
		}
		static void op_code()
		{
			cout<<"code= "<<code<<endl;
		}
		void regno()
		{
			cout<<"regno"<<reg<<endl;
		}
};
int A::code=101;
main()
{
	A o1,o2;
	o1.ip();
	o2.regno();
	o2.op_code();
	
}

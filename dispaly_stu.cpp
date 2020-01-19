//to display student's roll no and percentage
#include<iostream>
using namespace std;
class student
{
	int rollno;
	float perce;
	void ip();
	public: void op()
	{
		in();
		cout<<"rollno =";
		cout<<"per=";
	}
	student r1;
	void student :: ip()
	{
		cout<<"enter roll and per";
		cin>>rollno>>perce;
	}


}
int main()
{
	r1.op();
}

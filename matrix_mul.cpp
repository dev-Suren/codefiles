#include<iostream>
using namespace std;
int main()
{
	int i,n,bubble[10],s;
	cout<<"please enter the number of element you want to put in ascending order"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>bubble[i];
	}
	for(i=0;i<n;i++)
	{
		if(bubble[i]>bubble[i+1])
		{
			s=bubble[i];
			bubble[i]=bubble[i+1];
			bubble[i+1]=s;
			
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<bubble[i];
	}
	

}

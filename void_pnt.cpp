//dangling pointer 
//display array element using pointer
//generic pointer
#include<iostream>
using namespace std;
int main()
{
int *ptr,arr[4]={1,2,3,4},a;
ptr= &arr[0];
for(a=0;a<5;a++)
{
	cout<<*ptr;
	ptr++;
}
}


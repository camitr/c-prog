#include<iostream>
using namespace std;
int main()
{
	int list[8],i;

	cout<<"enter the element of the list"<<endl;
	for(i=0;i<8;i++)
	{
		cout<<"lists "<<i<<"th  element"<<"=";
		cin>>list[i];
	}
	for(i=0;i<8;i++)
	{
		cout<<list[i]<<endl;
	}
}

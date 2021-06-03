#include<iostream>
using namespace std;
int main()
{
	for(int row=1;row<=5;row++)
	{
		for(int space=1;space<=row-1;space++)
		{
			cout<<" ";
		}
		for(int star=1;star<=11-(row*2);star++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	



	return 0;
}


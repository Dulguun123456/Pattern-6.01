/* star top left triangle
row1*****
row2****
row3***
row4**
row5*
*/
#include<iostream>
using namespace std;
int main()
{
	for(int row=1;row<=5;row++)
	{
		for(int star=1;star<=6-row;star++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}

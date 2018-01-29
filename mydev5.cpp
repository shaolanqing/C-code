#include<iostream>
using namespace std;
void add(int x,int y=3,int z=6);
int main()
{
	add(2);
	add(2,4);
	add(2,4,8);
	system("pause");
	return 0;
}
void add(int x,int y,int z)
{
	cout<<"x+y+z="<<x+y+z<<endl;
}
 

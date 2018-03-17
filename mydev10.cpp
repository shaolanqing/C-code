#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	cout<<"请输入一串整数和任意数目的空格：";
	int i;
	while(cin>>i)
	{
		sum+=i;
		while(cin.peek() == ' ')  //屏蔽掉空格，遇到空格不进行任何操作  
		{
			cin.get();
		}
		if(cin.peek() =='\n')
		  break;
	} 
	cout<<"结果是："<<sum<<endl;
	return 0; 
 } 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	 double result=sqrt(3.0);
	cout<<"��3��������С����0~9λ��������£�\n"<<endl;
	for(int i=0;i<=9;i++)
	{
		cout.precision(i);
		cout<<result<<endl;
	}
	cout<<"��ǰ����ľ���Ϊ��"<<cout.precision()<<endl;
	return 0; 
 } 

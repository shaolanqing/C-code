//居民：身份证号，姓名，性别，出生日期
//居民中的成人：最高学历和职业
//成年人中的党员：党员类别
//建立3个类。成年人类继承居民类，党员类继承成年类 


#include<iostream>
#include<string>
using namespace std;
//居民类
class People
{
	private:
		char id[19];//身份证号
		char name[11];
		char sex[4];
		char birth[11];
    public:
    	void input()
    	{
    		cout<<"请按顺序(ID，name,sex,birth)输入居民信息："<<endl;
    		cin>>id>>name>>sex>>birth;	 
		}
		void output()
		{
			cout<<id<<' '<<name<<' '<<sex<<' '<<birth<<endl;
		}
};
//成人类
class Adult:public People
{
	private:
		char education[11];//最高学历
		char job[11];
	public:
	    void input()
	    {
	    	People::input();
	    	cout<<"请输入最高学历和职业："<<endl;
			cin>>education>>job; 
		}
		void output()
		{
			People::output();
			cout<<education<<' '<<job<<endl;
		}
 };
 //党员类
 class Party:public Adult
 {
 	private:
 		char parites[15];//党员类别
	public:
	    void input()
	    {
	    	Adult::input() ;
	    	cout<<"请输入党员类别："<<endl;
	    	cin>>parites;
		}
	    void output()
	    {
	    	cout<<"\r\n输出党员信息："<<endl;
			Adult::output() ;
			cout<<parites<<endl;
		}
};
//程序入口
int main()
{
	//测试党员类（按继承关系可以一起测试居民类，成人类）
	Party party;
	party.input() ;
	party.output() ;
	return 0; 
} 
	
	
	
	
	
	
	
	
	
	
  














 

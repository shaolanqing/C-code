//�������֤�ţ��������Ա𣬳�������
//�����еĳ��ˣ����ѧ����ְҵ
//�������еĵ�Ա����Ա���
//����3���ࡣ��������̳о����࣬��Ա��̳г����� 


#include<iostream>
#include<string>
using namespace std;
//������
class People
{
	private:
		char id[19];//���֤��
		char name[11];
		char sex[4];
		char birth[11];
    public:
    	void input()
    	{
    		cout<<"�밴˳��(ID��name,sex,birth)���������Ϣ��"<<endl;
    		cin>>id>>name>>sex>>birth;	 
		}
		void output()
		{
			cout<<id<<' '<<name<<' '<<sex<<' '<<birth<<endl;
		}
};
//������
class Adult:public People
{
	private:
		char education[11];//���ѧ��
		char job[11];
	public:
	    void input()
	    {
	    	People::input();
	    	cout<<"���������ѧ����ְҵ��"<<endl;
			cin>>education>>job; 
		}
		void output()
		{
			People::output();
			cout<<education<<' '<<job<<endl;
		}
 };
 //��Ա��
 class Party:public Adult
 {
 	private:
 		char parites[15];//��Ա���
	public:
	    void input()
	    {
	    	Adult::input() ;
	    	cout<<"�����뵳Ա���"<<endl;
	    	cin>>parites;
		}
	    void output()
	    {
	    	cout<<"\r\n�����Ա��Ϣ��"<<endl;
			Adult::output() ;
			cout<<parites<<endl;
		}
};
//�������
int main()
{
	//���Ե�Ա�ࣨ���̳й�ϵ����һ����Ծ����࣬�����ࣩ
	Party party;
	party.input() ;
	party.output() ;
	return 0; 
} 
	
	
	
	
	
	
	
	
	
	
  














 

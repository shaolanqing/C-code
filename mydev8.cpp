#include<iostream>
#include<string>
using namespace std;
class Car
{
	public:
		Car(string con_carname,int con_seats):m_strCarName(con_carname),m_nSeats(con_seats)
		{
			cout<<"Calling Car contructor,set carname and seats!"<<endl;
		}
		Car(string con_carname="my new car")
		{
			cout<<"Calling Car contructor,set carname!"<<endl;
			m_strCarName=con_carname;
			m_nSeats=4;
		}
		void disp_memmsg()
		{
			cout<<"carname: "<<m_strCarName<<","<<"seats= "<<m_nSeats<<endl;
		}
		 
	private:
		string m_strCarName;
		int m_nSeats;
};
int main()
{
	//���ô���һ��Ĭ�ϲ����Ĺ��캯����������
	Car mycar;
	//���ô���һ�������Ĺ��캯���������󣬲�����Ĭ��ֵ
	Car tomcar("tom's car");
	mycar.disp_memmsg(); 
	tomcar.disp_memmsg() ;
	system("pause");
	return 0;
	 
}
 

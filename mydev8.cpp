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
	//调用带有一个默认参数的构造函数创建对象
	Car mycar;
	//调用带有一个参数的构造函数创建对象，不适用默认值
	Car tomcar("tom's car");
	mycar.disp_memmsg(); 
	tomcar.disp_memmsg() ;
	system("pause");
	return 0;
	 
}
 

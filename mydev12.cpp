//���һ����������Box�����ܼ��㲢��������������ͱ����
#include<iostream>
using namespace std;
class Box
{
	private:
		double length;
		double volume;//���
		double area;
	public:
		//���캯�� 
	 Box(double l)
	 {
	 	length=l;
	 	volume=0.0;
	 	area=0.0;
	 } 
	 //�������
	 double getVolume()
	 {
	 	return length*length*length;
	  } 
	  //��������
	  double getArea()
	  {
	  	return length*length*6;
	   }
	   //�����������
	   void show()
	   {
	   	volume=getVolume();
	   	area=getArea();
	   	cout<<"������������"<<volume<<",�������"<<area<<endl;
		} 
};
//������
int main()
{
int length=0;
cout<<"������������ı߳���";
cin>>length;
Box box(length);
box.show();
getchar();
return 0; 	
 } 
	 
		
		
  

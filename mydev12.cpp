//设计一个立方体类Box，它能计算并输出立方体的体积和表面积
#include<iostream>
using namespace std;
class Box
{
	private:
		double length;
		double volume;//体积
		double area;
	public:
		//构造函数 
	 Box(double l)
	 {
	 	length=l;
	 	volume=0.0;
	 	area=0.0;
	 } 
	 //计算体积
	 double getVolume()
	 {
	 	return length*length*length;
	  } 
	  //计算表面积
	  double getArea()
	  {
	  	return length*length*6;
	   }
	   //输出体积和面积
	   void show()
	   {
	   	volume=getVolume();
	   	area=getArea();
	   	cout<<"立方体的体积："<<volume<<",表面积："<<area<<endl;
		} 
};
//主函数
int main()
{
int length=0;
cout<<"请输入立方体的边长：";
cin>>length;
Box box(length);
box.show();
getchar();
return 0; 	
 } 
	 
		
		
  

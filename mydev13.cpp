 //学生成绩管理系统 
 
 
 
 #include<iostream>
 #include<string>
 using namespace std;
 #define N 5   //定义常量N=5
 
 //定义学生结构体
 typedef struct
 {
 	string number;//学号
	 string name;//姓名
	 float chinese;//语文
	 float math;
	 float english;
	 float total;//总成绩 
  }Student;
  
  //定义5个学生信息
  Student stu[N];
  
  //录入成绩
  void input (int n)
  {
  	string number;
  	string name;
  	float chinese;
  	float math;
  	float english;
  	for(int i=0;i!=n;i++)
  	{
  		cout<<"请输入第"<<i+1<<"个学生的学号：";
		  cin>>number;
		  stu[i].number ;
		  cout<<"请输入姓名：";
		  cin>>name;
		  stu[i].name ;
		  cout<<"请输入语文成绩：";
		  cin>>chinese;
		  stu[i].chinese ;
		  cout<<"请输入数学成绩：";
		  cin>>math;
		  stu[i].math ;
		  cout<<"请输入英语成绩：";
		  cin>>english;
		  stu[i].english ;
		  //该学生三门课的总成绩
		  stu[i].total=stu[i].chinese +stu[i].math +stu[i].english ;
	}
}
//打印每门课程的平均成绩
void printAvg()
{
	int i=0;
	float sumChinese=0,sumMath=0,sumEnglish=0;
	float avgChinese=0,avgMath=0,avgEnglish=0;
	for(i=0;i<N;i++)
	{
		sumChinese+=stu[i].chinese ;
		sumMath+=stu[i].math ;
		sumEnglish+=stu[i].english ;
	}
	avgChinese=sumChinese/N;
	avgMath=sumMath/N;
	avgEnglish=sumEnglish/N;
	cout<<"语文课平均值："<< avgChinese<<"\r\n";//\r\n表示光标移至下一行行首
	cout<<"数学平均值："<< avgMath<<"\r\n";
	cout<<"英语平均值："<< avgEnglish<<"\r\n";
}
//主函数
int main()
{
 input(N);
 cout<<"\r\n------统计结果------\r\n";
 cout<<"以下是每门课的平均成绩："<<"\r\n";
 for(int i=0;i<N;i++)
 {
 	cout<<stu[i].name <<":"<<stu[i].total <<"\r\n";
  } 
  cout<<"\r\n以下是每门课程的平均成绩："<<"\r\n"; 
 printAvg;
 
 //接收多余的"\r\n"
 getchar();
 getchar(); 
 return 0;
}
		  
		  
		  
		  
		  
		  
		  
		   
	  


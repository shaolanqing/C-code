 //ѧ���ɼ�����ϵͳ 
 
 
 
 #include<iostream>
 #include<string>
 using namespace std;
 #define N 5   //���峣��N=5
 
 //����ѧ���ṹ��
 typedef struct
 {
 	string number;//ѧ��
	 string name;//����
	 float chinese;//����
	 float math;
	 float english;
	 float total;//�ܳɼ� 
  }Student;
  
  //����5��ѧ����Ϣ
  Student stu[N];
  
  //¼��ɼ�
  void input (int n)
  {
  	string number;
  	string name;
  	float chinese;
  	float math;
  	float english;
  	for(int i=0;i!=n;i++)
  	{
  		cout<<"�������"<<i+1<<"��ѧ����ѧ�ţ�";
		  cin>>number;
		  stu[i].number ;
		  cout<<"������������";
		  cin>>name;
		  stu[i].name ;
		  cout<<"���������ĳɼ���";
		  cin>>chinese;
		  stu[i].chinese ;
		  cout<<"��������ѧ�ɼ���";
		  cin>>math;
		  stu[i].math ;
		  cout<<"������Ӣ��ɼ���";
		  cin>>english;
		  stu[i].english ;
		  //��ѧ�����ſε��ܳɼ�
		  stu[i].total=stu[i].chinese +stu[i].math +stu[i].english ;
	}
}
//��ӡÿ�ſγ̵�ƽ���ɼ�
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
	cout<<"���Ŀ�ƽ��ֵ��"<< avgChinese<<"\r\n";//\r\n��ʾ���������һ������
	cout<<"��ѧƽ��ֵ��"<< avgMath<<"\r\n";
	cout<<"Ӣ��ƽ��ֵ��"<< avgEnglish<<"\r\n";
}
//������
int main()
{
 input(N);
 cout<<"\r\n------ͳ�ƽ��------\r\n";
 cout<<"������ÿ�ſε�ƽ���ɼ���"<<"\r\n";
 for(int i=0;i<N;i++)
 {
 	cout<<stu[i].name <<":"<<stu[i].total <<"\r\n";
  } 
  cout<<"\r\n������ÿ�ſγ̵�ƽ���ɼ���"<<"\r\n"; 
 printAvg;
 
 //���ն����"\r\n"
 getchar();
 getchar(); 
 return 0;
}
		  
		  
		  
		  
		  
		  
		  
		   
	  


#include<iostream>
using namespace std;
class student
{
    int reg_no,m1,m2,m3,avg,total;
    char str[100];
    public:
   	student()
   	{
	   }
	   student(int x,char y[20],int a,int b,int c)
	   {
	   	reg_no=x;
	   	str[20]=y[20];
	   	m1=a;
	   	m2=b;
	   	m3=c;
	   }
	   void calculate()
	   {
	   	total=m1+m2+m3;
	   	avg=total/3;
	   	cout<<"total marks :"<<total;
	   	cout<<"\navg marks :"<<avg;
	   }
};
int main()
{
	student s(913132,"dast",50,80,90);
	s.calculate();
}

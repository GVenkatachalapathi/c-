#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c);
		void display();
		void operator-();
};
void space::getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void space::display()
{
	cout<<x<<y<<z;
}
void space::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
main()
{
	space s;
	s.getdata(-2,-6,8);
	-s;
	s.display();
}
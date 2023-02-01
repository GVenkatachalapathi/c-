#include<iostream>
#include<math.h>
using namespace std;
class circle
{
	float a,c,r,pi=3.14;
	public:
		getdata()
		{
			cout<<"enter r value :\n";
			cin>>r;
		}
		display()
		{
			a=pi*r*r;
			cout<< "area : " <<a;
			c=2*pi*r;
			cout<< "\ncircumference : " <<c;
		}
};
int main()
{
	circle c;
	c.getdata();
	c.display();
}
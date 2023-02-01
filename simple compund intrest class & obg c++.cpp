#include<iostream>
#include<math.h>
using namespace std;
class simplecompundintrest
{
	int p,n,r,s,c;
	public:
		getdata()
		{
			cout<<"enter p and n and r values :\n";
			cin>>p>>n>>r;
		}
		display()
		{
			s=p*n*r/100;
			cout<< "simple intrest: " <<s;
			c=p*pow((1+r/100),n);
			cout<< "\ncompound intrest: " <<c;
		}
};
int main()
{
	simplecompundintrest s;
	s.getdata();
	s.display();
}
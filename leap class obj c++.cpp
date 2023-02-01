#include<iostream>
#include<math.h>
using namespace std;
class leapyear
{
	int y;
	public:
		getdata()
		{
			cout<<"enter year :\n";
			cin>>y;
		}
		display()
		{
			if(y%4==0)
			{
				cout<<"leapyear :"<<y;
			}
			else
			{
				cout<<"not a leap year :"<<y;
			}
		}
};
int main()
{
	leapyear l;
	l.getdata();
	l.display();
}
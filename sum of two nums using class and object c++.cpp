#include<iostream>
using namespace std;
class sum
{
	int x,y;
	public:
		getdata()
		{
			cout<<"enter x and y values :\n";
			cin>>x>>y;
		}
		display()
		{
			cout<< "sum of two numbers :" <<x+y;
		}
};
int main()
{
	sum s;
	s.getdata();
	s.display();
}
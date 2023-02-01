#include<iostream>
using namespace std;
class oddeven
{
	int n;
	public:
		getdata()
		{
			cout<<"enter n value :\n";
			cin>>n;
		}
		display()
		{
			if(n%2==0)
			{
				cout<<"even number :"<<n;
			}
			else
			{
				cout<<"odd number :"<<n;
		    }
		}
};
int main()
{
	oddeven o;
	o.getdata();
	o.display();
}
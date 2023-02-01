#include<iostream>
using namespace std;
class arrayinput
{
	int n,a[10],i;
	public:
		getdata()
		{
			cout<<"enter n value :\n";
			cin>>n;
		}
		input()
		{
			cout<<"enter elements :\n";
			for(i=1;i<=n;i++)
			cin>>a[i];
		}
		display()
		{
			cout<<"entered elements are :\n";
			for(i=1;i<=n;i++)
			cout<<\na[i];
		}
};
int main()
{
	arrayinput a;
	a.getdata();
	a.input();
	a.display();
}
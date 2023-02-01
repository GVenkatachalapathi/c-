#include<iostream>
using namespace std;
class arrayevenoddsum
{
	int n,a[10],i,e=0,o=0,sum=0;
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
			for(i=1;i<=n;i++)
			{
				sum=sum+i;
			}
			for(i=0;i<=n;i++)
			if(a[i]%2==0)
			{
				e=e+i;
			}
			else
			{
				o=o+i;
			}
			cout<<"sum of all elements :"<<sum;
			cout<<"\neven elements sum :"<<e;
			cout<<"\nodd elements sum :"<<o;
		}
};
int main()
{
	arrayevenoddsum a;
	a.getdata();
	a.input();
	a.display();
}
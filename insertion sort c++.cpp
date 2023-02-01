#include<iostream>
using namespace std;
class insertionsort
{
	int n,a[10],i,j,temp;
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
		cout<<"after sorting :";
			for(i=1;i<=n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(a[i]<a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
				cout<<"\n"<<a[i];
			}
		}
};
int main()
{
	insertionsort i;
	i.getdata();
	i.input();
	i.display();
}
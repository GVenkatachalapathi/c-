#include<iostream>
using namespace std;
class wordsort
{
	char str[100][100],s[100];
	int i,j,n;
	public:
		getdata()
		{
			cout<<"enter n value :\n";
			cin>>n;
		}
		input()
		{
			cout<<"enter names :\n";
			for(i=1;i<=n;i++)
			cin>>str[i];
		}
		display()
		{
		    cout<<"after sorting :";
			for(i=1;i<=n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(strcmp(str[i],str[j])>0)
		            {
                        strcpy(s,str[i]);
                        strcpy(str[i],str[j]);
                        strcpy(str[j],s);
                    }
				}
				cout<<"\n"<<str[i];
			}
		}
};
int main()
{
	wordsort w;
	w.getdata();
	w.input();
	w.display();
}
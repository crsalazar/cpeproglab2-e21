#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream f("H:\\My Documents\\input.txt");
	int n1,n2,nn;
	int max=0;
	int a,b;
	int x=0;
	while(f>>n1>>n2)
	{
	
		if((n1>0&&n1<1000000)&&(n2>0&&n2<1000000))
	{
		if(n1<n2)
		{
			a=n1;
			b=n2;
		}
		for(int i=a;i<=b;i++)
		{
			nn=i;
			x=1;	
		while(nn!=1)
		{
			if(nn%2)
			{	
				nn=3*nn+1;
				x++;
			}else
			{
				nn=nn/2;
				x++;
			}
			
		
		}
		if(max<x)
		{
			max=x;
		}
		}
	cout<<n1<<' '<<n2<<' '<<max<<endl;
	
	}	
	}
	
}

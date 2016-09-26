//salazar
#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int factorial(int n);

double problem1(double num)
{	
	return round(num);
}

int main()
{
	double num,result;
	cout<<"Enter a number to be round of: ";
	cin>>num;
	result=problem1(num);
	cout<<result<<endl;
	cout<<"**********"<<" "<<"**********"<<endl;
	cout<<"UNIQUE NUMBERS"<<endl;
	int u[10];    
	int random;
	int uniqueflag;
	int a,b;
	cout<<"Unique Numbers are: ";
	for(a=0;a<10;a++)
 		{
     		do {
       
      			  uniqueflag = 1;
        		random = rand() % 20+ 1;
        
        			for (b=0;b<a && uniqueflag == 1; b++) 
				{
           			if (u[b] == random) 
		   			{
            		  uniqueflag = 0;
           			}
        		}
     		} while (uniqueflag != 1);
     			u[a] = random;
     			cout<<random<<" ";
		}
	cout<<endl;
	cout<<"**********"<<" "<<"**********"<<endl;
	cout<<"FACTORIAL"<<endl;
	cout<<"Enter a number: ";
	int n;
	cin>>n;
	factorial(n);
}
//prob2
int factorial(int n)
{
	int x,ans=1;
	for(x=1;x<=n;x++)
	{
		ans*=x;
	}
	cout<<"The factorial of "<<n<<" is "<<ans;
	
}



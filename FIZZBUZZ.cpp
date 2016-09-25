#include<iostream>
using namespace std;
int main()
{
	int f;
	
	for(f=1;f<101;f++)
	{
		if ((f%3==0)&&(f%5==0))
		cout<<"FizzBuzz"<<endl;
		else if(f%3==0)
			
			cout<<"Fizz"<<endl;
		
		else if(f%5==0)
		
			cout<<"Buzz"<<endl;
		
		else
			cout<<f<<endl;
			
	}
	
}

#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ifstream f("input.txt");

	int ff;

	while(f>>ff)
	{
		if ((ff%3==0)&&(ff%5==0))
		cout<<"FizzBuzz"<<endl;
		else if(ff%3==0)
			
			cout<<"Fizz"<<endl;
		
		else if(ff%5==0)
		
			cout<<"Buzz"<<endl;
		
		else
			cout<<ff<<endl;
			
	}

		
	
	
}

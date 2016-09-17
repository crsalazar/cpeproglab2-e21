//salazar
#include<iostream>
using namespace std;

struct student
{
	int id;
	char name[50];
	int quiz1;
	int quiz2;
	int quiz3;
};
int main()
{
	student record;
	float a;
	cout<<"Enter Student Record:"<<endl;
	cout<<"ID: ";
	cin>>record.id;
	cin.ignore();
	cout<<"Name: ";
	cin.getline(record.name,50);
	cout<<"Quiz 1: ";
	cin>>record.quiz1;
	cout<<"Quiz 2: ";
	cin>>record.quiz2;
	cout<<"Quiz 3: ";
	cin>>record.quiz3;
	cout<<endl;
	cout<<endl;
	cout<<"Student Record"<<endl;
	cout<<"ID: " <<record.id<<endl;
	cout<<"Name: "<<record.name<<endl;
	a=((record.quiz1)+(record.quiz2)+(record.quiz3))/3;
	
	cout<<"Grades: "<<a<<endl;
	if(a>75)
	{
		cout<<"Passed";
	}else
	cout<<"Failed";
	
	
	return 0;
	
	
}

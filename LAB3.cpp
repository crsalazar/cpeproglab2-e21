#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;


void problem1()
{
	char str1[100];
	char str2[100];
	
	cout<<"*********************"<<endl;
	cout<<"STRING COMPARE"<<endl;
	cout<<"*********************"<<endl;
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter a second word (str2): ";
	gets(str2);
	int c;
	c=strcmp(str1,str2);
	if(c<0)
	{
		cout<<"Negative";
		cout<<endl;
	}
	if(c>0)
	{
		cout<<"Positive";
		cout<<endl;
	}
	if(c==0)
	{
		cout<<"Equal";
		cout<<endl;
	}
}
void problem2()
{
	char str1[100];
	char str2[100];
	char Nstr[100];
	int x;
	cout<<"*********************"<<endl;
	cout<<"STRING COPY"<<endl;
	cout<<"*********************"<<endl;
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter a second word (str2): ";
	gets(str2);
	strcpy(Nstr,str2);
	cout<<"New string value for str1: ";
	puts(Nstr);
	cout<<endl;
	
}
void problem3()
{
	char str1[100];
	char str2[100];
	char str3[100] =" ";
	char c,a;
	cout<<"*********************"<<endl;
	cout<<"STRING CONCATENATION"<<endl;
	cout<<"*********************"<<endl;
	cout<<"Enter a first word (str1): ";
	gets(str1);
	strcat(str1,str3);
	cout<<"Enter a second word (str2): ";
	gets(str2);
	cout<<strcat(str1,str2);
	cout<<endl;
}
void problem5()
{
	char str1[100];
	cout<<"********************"<<endl;
	cout<<"Capitalize each word"<<endl;
	cout<<"********************"<<endl;
	cout<<"Enter some string: "; //heLLo woRLd
	gets(str1);
	for(int x=0;x<strlen(str1);x++)
	{
		str1[x]=tolower(str1[x]); //hello world
		str1[0]=toupper(str1[0]); //Hello world
	}
	for(int y=0;y<strlen(str1);y++)
	{
		if (str1[y]==' ')
		{
			str1[y+1]=toupper(str1[y+1]); //Hello World
		}
		
	}
	
	cout<<str1<<endl;
}
void problem6()
{
	string str,nst,w;
    int i;
    cout<<"********************"<<endl;
	cout<<"Split the string in to word"<<endl;
	cout<<"********************"<<endl;
    cout << "Enter a string: ";
    getline(cin,str);
    istringstream is(str);
    nst="";
    is>>nst;
    while(is>>w)
    {
        nst=w+"\n"+nst;
    }
    cout <<nst;
   
}
int main()
{
	problem1();
	problem2();
	problem3();
	problem5();
	problem6();
}

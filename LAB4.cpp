//salazar e21
#include<iostream>
#include<string.h>
using namespace std;

char str1[100]; 
char str2[100];
char *p1,*p2;
char str3[100]; 
char str4[100];
char *p3,*p4;
int check=0;
char str5[100]; 
char str6[100];
char *p5,*p6;
char str7[100]; 
char str8[100];
char *p7;
int check2=0;
void strcpy();
void strcmp();
int strlen(char*);
void strcat();
void srev();
void strcpy() {
	
	cout<<"STRCPY - COPY" << endl;
	cout<<"Enter first  string: ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<100;i++){
    	p1=&str1[i];
    	p2=&str2[i];
    	*p1=*p2;
    	cout<<str1[i];
	}  

}
void strcmp() {
	
	cout<<"STRCPM - COMPARE" << endl;
	cout<<"Enter first string: ";
    gets(str3);
    cout<<"Enter second string: ";
    gets(str4);
	for(int i=0;i<50;i++){
    	p3=&str3[i];
    	p4=&str4[i];
    	(int) str3[i];
    	(int) str4[i];
    	if (*p3==*p4){
    		check+=0;
		}
		else if (*p4<*p3) {
			check+=1;	
		}
		else{
			check-=1;
		}
	}
	if (check==0) cout<<"Equal";
	else if (check>0) cout<<"Positive one ";
	else cout<<"Negative one ";	
	cout<<endl;
}

void strcat() {
	
	cout<<"STRCAT - CONCATENATE" << endl;
	cout<<"Enter first  string: ";
    gets(str5);
    cout<<"Enter second string: ";
    gets(str6);
	for(int i=0;i<strlen(str5);i++){
    	p5=&str5[i];
    	cout<<*p5;
	}
	for(int i=0;i<strlen(str6);i++){
    	p6=&str6[i];
    	cout<<*p6;
	}
}

int strlen(char*p7)
{
	
	cin.ignore();
	cout<<"\nEnter a string:  ";
    gets(str7);
	while(*p7!='\0') 
	{
		check2++;
		p7++;
	}
	cout<<"The length of the string is: "<<check2 << endl;
	return check2;
}

void srev() {
	char word[100];
	int i=0;
	char str8[100];
    char*p8=word;
    char*p9=str8;
    cout<<"REVERSE STRING" << endl;
	
	cout<<"Enter string: ";
    gets(word);
    while(*p8){
    	p8++;
    	i++;
	}
	while(i>=1){
		p8--;
		*p9=*p8;
		p9++;
		--i;
	}
	cout<<"Reverse string is: "<<str8<< endl;
}

int main() {
	
	strcpy();
		cout << endl;
	strcmp();
		cout << endl;
	strcat();
		cout << endl;
	strlen(str7);
	cout << endl;
	srev();
	system("pause");
	
}

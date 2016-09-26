//salazar e21
#include<iostream>
#include<iomanip>
using namespace std;

void problem1()
{
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
		cout<<"Remarks: Passed";
	}else
	cout<<"Remarks: Failed";

	
	
}
}

void problem2()
{
	struct Student{
	int id[5];
	char fullName[30];
};

struct Quiz{
	float quizz[3];
};

int main()
;{
	Student stud[5];
	Quiz quiz[3];
	float total1=0,total2=0;
		
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "****STUDENT RECORDS****"<<endl;
    cout << "Enter student records: \n";
    for(int i=0; i<5; i++){
		cout<<"Student "<<i+1;
    	cout << "\nID: ";
		cin >> stud[i].id[i];
    	cin.ignore();
    	cout << "Name: ";
    	gets(stud[i].fullName);
    	for(int j=0; j<3; j++){
            cout << "Quiz "<< j+1 << ": ";
            cin >> quiz[i].quizz[j];
        }
        cout<<endl;
	}
	
	cout << setw(10) << "No."
	  	 << setw(15) << "Student No."
		 << setw(15) << "Name"
		 << setw(15) << "Grade"
		 << setw(16) << "Remark"
		 << endl;
	
	for(int q=0; q<5; q++){
		cout << setw(10) << q+1;
		
    	cout << setw(15) << q+1;
    	cout << setw(15)<< stud[q].fullName;
    	for(int w=0; w<3; w++){
    		
    	total1+=quiz[q].quizz[w];	
		}
		total2=total1/3;
		cout<<setw(17) << total2;
		if(total2<75){
			cout <<setw(17)<< "failed" << endl;
		}
		else{
			cout <<setw(17)<< "passed"<<endl;
		}
		
			total1=0;
		total2=0;
		
	}	
}
}
void problem3()
{
	struct customer{
	char fname[50];
	char lname[50];
	double cnum;
};
struct date{
	int month;
	int day;
	int year;
};
struct item{
	int id;
	char name[50];
	double price;
	int quantity;
	int id2;
	char name2[50];
	double price2;
	int quantity2;
	int id3;
	char name3[50];
	double price3;
	int quantity3;
	int totalprice;
	int pprice1;
	int pprice2;
	int pprice3;
};



int main();{
	customer ctm[3];
	date dt;
	item itm[3];
	
	int i,totalprice,totalprice2,totalprice3,pprice1,pprice2,pprice3;
	cout <<" Enter 3 Customers:\n";
	
	for(i=0;i<3;i++)
	{
		cout<<"Costumer Information " << i+1 <<endl;
		cout<<"First Name: ";
		cin.ignore();
		cin.getline(ctm[i].fname,49);
		cout<<"Last Name: ";
		cin.getline(ctm[i].lname,49);
		cout<<"Contact No. : ";
		cin>>ctm[i].cnum;
		cout<<"Order Date:" <<endl;
		cout<<"Day: ";
		cin>>dt.day;
		cout<<"Month: ";
		cin>>dt.month;
		cout<<"Year: ";
		cin>>dt.year;
		cout<<"Enter 3 items"<<endl;
			//1
			cout<<"ID: ";
			cin>>itm[i].id;
			cin.ignore();
			cout<<"Name: ";
			cin.getline(itm[i].name,49);
			cout<<"Price:";
			cin>>itm[i].price;
			cout<<"Quantity: ";
			cin>>itm[i].quantity;
			//2
			cout<<"ID: ";
			cin>>itm[i].id2;
			cin.ignore();
			cout<<"Name: ";
			cin.getline(itm[i].name2,49);
			cout<<"Price:";
			cin>>itm[i].price2;
			cout<<"Quantity: ";
			cin>>itm[i].quantity2;
			//3
			cout<<"ID: ";
			cin>>itm[i].id3;
			cin.ignore();
			cout<<"Name: ";
			cin.getline(itm[i].name3,49);
			cout<<"Price:";
			cin>>itm[i].price3;
			cout<<"Quantity: ";
			cin >> itm[i].quantity3;
			
			itm[i].pprice1=((itm[i].price)*(itm[i].quantity));
			itm[i].pprice2=((itm[i].price2)*(itm[i].quantity2));
			itm[i].pprice3=((itm[i].price3)*(itm[i].quantity3));
			itm[i].totalprice=((itm[i].pprice1)+(itm[i].pprice2)+(itm[i].pprice3));
			
		}
			
		cout << "SUMMARY REPORT"<< endl;
		cout<<setw(5)<<"#";	
		cout<<setw(20)<<"Costumer name:";	
		cout<<setw(15)<<"Order date:";
		cout<<setw(15)<<"Items:";	
		cout<<setw(15)<<"Price:";
		cout<<setw(15)<<"Quantity:";

	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	for (i=0;i<3;i++)
	{
	
	cout <<endl;
	cout <<setw(5)<<i+1;
	cout <<setw(18)<<ctm[i].lname<<", "<<ctm[i].fname;	
	cout <<setw(12)<<dt.day <<"/"<<dt.month <<"/"<<dt.year <<endl;
	cout <<setw(55)<<itm[i].name<<setw(15)<<itm[i].price<<setw(15)<<itm[i].quantity<<endl;
	cout <<setw(55)<<itm[i].name2<<setw(15)<<itm[i].price2<<setw(15)<<itm[i].quantity2<<endl;
	cout <<setw(55)<<itm[i].name3<<setw(15)<<itm[i].price3<<setw(15)<<itm[i].quantity3<<endl;
	cout<<setw(71)<<"Total Price: "<<itm[i].totalprice;
	
	}
	
	

}
}

int main()
{
	problem1();
	problem2();
	problem3();
}

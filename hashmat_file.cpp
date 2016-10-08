#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream f("hashmat.txt");
    
    int h, o;
    
    while (f >>h>>o) {
          cout << abs(h-o); 
		  cout<<endl;     
    }
    
 
    system("pause>0");
    return 0;
}   
    

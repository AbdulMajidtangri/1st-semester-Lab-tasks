#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,s;
	
	cout<<"Even\t\t\tOdd\n";
	for(a=0;a<=20;a++){
		s=getch();
		if (a%2==0){
			cout<<a<<"\t\t\t";
		}
		else {
			
			cout<<a<<endl;
		}
	}
	
	getch();
}

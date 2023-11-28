#include<iostream>
#include<conio.h>
using namespace std;
struct login{

	string password;
	string savpassword;
};
int main(){
	login l1;
	l1.savpassword="majid123";

      int attempt=5;
  while(attempt>0)
  {
		cout<<"enter your password"<<endl;
        cin>>l1.password;
    	if(l1.password==l1.savpassword)
	 {cout<<"wellcome to me"<<endl;
	  break;
	 }
	 else {
	    	cout<<"forget  password reamaining "<<attempt-1<<"!"<<endl;
	    	attempt--;
	    	if(attempt==0){
			cout<<"you don't have any more tries"<<endl;
			}
      }	
 
 }
	 
 }
   

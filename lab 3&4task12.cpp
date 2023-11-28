#include<iostream>
using namespace std;
int main(){
int num1;
int num2;
int num3;
cout<<"enter  1st number : "<<endl;
cin>>num1;
cout<<"enter 2nd number : "<<endl;
cin>>num2;
cout<<"enter 3rd number : "<<endl;
cin>>num3;
if (num1>num2 && num2>num3)
cout<<"decreasing order"<<endl;
else if(num3>num2 && num2>num1)
cout<<"increasing order"<<endl;
else {
	cout<<"invalid";
}
	}

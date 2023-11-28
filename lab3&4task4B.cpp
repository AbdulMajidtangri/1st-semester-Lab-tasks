#include<iostream>
using namespace std;
int main(){
	
int n;
cout<<"enter any number : "<<endl;
cin>>n;
if (n>9 && n<100)
cout<<"it's double figure number";
else if (n<9 ||n>99)
	cout<<"it's not double figure number";
	else{
	cout<<"invalid number";
}
	return 0;
}

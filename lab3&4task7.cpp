#include<iostream>
using namespace std;
int main(){
int n,m,u;

cout<<"enter the value of 1st number :";
cin>>n;
cout<<"enter the value of 2nd number :";
cin>>m;
cout<<"enter the value of 3rd number :";
cin>>u;
if(n>m && n>u)
cout<<n;
else if(m>n && m>u)
cout<<m;
else if(u>m && u>n)
cout<<u;
else{
	cout<<"invalid ";
}

	return 0;
}

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter any number : ";
cin>>n;
if(n%2==0)
{
n++;
cout<<n;
}
else if (n%2!=0)
{
int square=n*n;
cout<<"square of odd number : "<<square<<endl;
}

else if (n==0)
{
int cube=n*n*n;
cout<<"cube of double figure : "<<cube<<endl;
}
cout<<"resulting number :"<<n<<endl;
}


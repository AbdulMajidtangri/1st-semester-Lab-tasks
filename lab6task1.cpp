#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
struct dateformate{
	int n,day,month,year;
char o;
};
int main(){
	system("color fc");
dateformate d1;
do{

       cout<<"select date format"<<endl;
       cout<<"\t1.DD-MM-YY"<<endl;
       cout<<"\t2.MM-DD-YY"<<endl;
       cout<<"\t3.YY-MM-DD"<<endl;
        
cin>>d1.n;
if(d1.n==1)
 {
            cout<<"\t1.DD-MM-YY"<<endl;
            cin>>d1.day;
            cin>>d1.month;
            cin>>d1.year;
            cout<<d1.day<<"-"<<d1.month<<"-"<<d1.year<<endl;}
if(d1.n==2)
{
          cout<<"2.MM-DD-YY"<<endl;
          cin>>d1.month;
          cin>>d1.day;
          cin>>d1.year;
          cout<<d1.month<<"-"<<d1.day<<"-"<<d1.year<<endl;
}
if(d1.n==3)
{
		cout<<"3.YY-MM-DD"<<endl;
		cin>>d1.year;
		cin>>d1.month;
		cin>>d1.day;
	    cout<<d1.year<<"-"<<d1.month<<"-"<<d1.day<<endl;
}

                    	cout<<"do you want to continue(y/n)"<<endl;
                                   	cin>>d1.o;
}
while(d1.o=='y');
getch();
}

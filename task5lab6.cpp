#include<iostream>
#include<conio.h>
using namespace std;
struct student{
	char  name[50];
	int  age;
};
struct questions{
	string q,q1,q2,q3,q4;
};

struct total{
	int correct = 0,incorrect = 0, totalmarks = 0;
	int select;};
int main(){
	char op;
	student s1;
	questions q1;
	total t1;
	cout<<"                                                                                                                                         \n";
	cout<<"                                                  THE DAILY QUIZ                                                                         \n";
	cout<<"press enter to start the quize\n";
   getch();
   system("cls");
   cout<<"what is your namer ?"<<endl;
   cin.getline(s1.name,50);
    cout<<"what is your age ?"<<endl;
   cin>>s1.age;
   cout<<"are you ready to start the Quize!"<<s1.name<<" (y/n)"<<endl;
   cin>>op;
   cout<<"good luck!!"<<endl<<endl;
   
   
    system("cls");
   q1.q="1.Question_______";
   q1.q1="answer";
   q1.q2="answer";
   q1.q3="answer";
   q1.q4="answer";
   cout<<q1.q<<endl;
   cout<<"1."<<q1.q1<<endl;
   cout<<"2."<<q1.q2<<endl;
   cout<<"3."<<q1.q3<<endl;
   cout<<"4."<<q1.q4<<endl;
   cin>>t1.select;
   if(t1.select==4)
    {
	   t1.correct+=1;
      t1.totalmarks+=1;}
      else 
     {
	   t1.incorrect+=1;
      t1.totalmarks+=1;
  }
       q1.q="2.Question_______";
       
	   
   q1.q1="answer";
   q1.q2="answer";
   q1.q3="answer";
   q1.q4="answer";
   cout<<q1.q<<endl;
   cout<<"1."<<q1.q1<<endl;
   cout<<"2."<<q1.q2<<endl;
   cout<<"3."<<q1.q3<<endl;
   cout<<"4."<<q1.q4<<endl;
   cin>>t1.select;
   if(t1.select==2)
     {
	   t1.correct+=1;
      t1.totalmarks+=1;}
      else {
	  
      t1.incorrect+=1;
      t1.totalmarks+=1;}
       q1.q="3.Question_______";
   q1.q1="answer";
   q1.q2="answer";
   q1.q3="answer";
   q1.q4="answer";
   cout<<q1.q<<endl;
   cout<<"1."<<q1.q1<<endl;
   cout<<"2."<<q1.q2<<endl;
   cout<<"3."<<q1.q3<<endl;
   cout<<"4."<<q1.q4<<endl;
   cin>>t1.select;
   if(t1.select==1)
     {
	   t1.correct+=1;
      t1.totalmarks+=1;}
      else 
     {
	     t1.incorrect+=1;
      t1.totalmarks+=1;}
       q1.q="4.Question_______";
   q1.q1="answer";
   q1.q2="answer";
   q1.q3="answer";
   q1.q4="answer";
   cout<<q1.q<<endl;
   cout<<"1."<<q1.q1<<endl;
   cout<<"2."<<q1.q2<<endl;
   cout<<"3."<<q1.q3<<endl;
   cout<<"4."<<q1.q4<<endl;
   cin>>t1.select;
   if(t1.select==3)
   {
	     t1.correct+=1;
      t1.totalmarks+=1;}
      else 
      {
	  t1.incorrect+=1;
      t1.totalmarks+=1;}
       system("cls");
      cout<<"total questions are "<<t1.totalmarks<<endl<<"correct answers"<<t1.correct<<endl<<"incorrect answers "<<t1.incorrect;
	return 0;
}

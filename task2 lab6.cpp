#include<iostream>
#include<conio.h>

using namespace std;

struct Login{
	string username;
	string password;
	
	string savedUsername;
	string savedPassword;
};

struct attendance{
	string total;
	string presents;
	string absents;
};

struct registeration{
	string name;
	int age;
	string roll_no;			
	string dept;
};



int main(){
	registeration reg;
	attendance att;
	Login log;
	att.total="";
	att.presents="";
	att.absents="";
	
	log.savedUsername="";
	log.savedPassword="";
	
		int sel;
		do{
			system("cls");
			cout<<"\n1: REGISTER A STUDENT:\n"
				<<"2: Take attendance :\n"
				<<"3: Create User Name and Password for student\n"
				<<"4: Login and See attendance\n"
				<<"5: Exit\n"
				<<"What do you want to do: ";
			cin>>sel;	
	
			if(sel==1){
				system("cls");
				reg.name="";
				cout<<"+++++++++++++REGISTERATION OF STUDENT++++++++++++\n";
				cout<<"Enter student name: ";
				cin>>reg.name;
				cout<<"Enter student age: ";
				cin>>reg.age;
				cout<<"Enter student Department :"; 				
				cin>>reg.dept;
				cout<<"Enter student Roll no :"; 				
				cin>>reg.roll_no;
				
				cout<<"Student is registred.......";
			}//select 1
			
			if(sel==2){
				char status;
				int p=0;
				int ab=0;
				for(int i=3; i<=20; i+=3){
					
					cout<<"23sw0"<<i;
					status=getch();
					if(status=='p' || status=='P'){
						cout<< " \xfb"<<endl;
						p++;
						
												
						att.total+="23sw0";
					
						att.total+=" \xfb\n";
						
						att.presents+="23sw0";
					
						att.presents+=" \xfb\n";
					}
					else if(status=='a' || status=='A'){
						cout<< " x"<<endl;
						ab++;
						

						att.total+="23sw0";
						//reg.att.total+=j;
						att.total+=" x \n";
				
						att.absents+="23sw0";
						//reg.att.absents+=j;
						att.absents+=" x \n";
					}
		
				}
				
				cout<<"-------------------------------------\n"; 
				cout<<"Total: "<<p+ab<<"\nPreset: "<<p<<"\nAbsent: "<<ab; 
			}
			
			else if(sel==3){
				system("cls");
				cout<<"------Create User Name and Password for student---------\n"
				    <<"Enter Username: ";
					cin>>log.savedUsername;
				cout<<"Enter Password: ";
					cin>>log.savedPassword;		
											
				cout<<log.savedUsername<<" assigned "<<log.savedPassword<<" Password\n";									
			}
			
			else if(sel==4 && log.savedUsername!=""){
				system("cls");
				cout<<"---------STUDENTS ATTENDANCE DETAILS-------\n"
					<<"Enter Username: ";
					cin>>log.username;
				cout<<"Enter Password: ";
					cin>>log.password;
					
					if(log.username==log.savedUsername && log.password==log.savedPassword){
						int sel;
						cout<<"You are login into attendance sheet.\n"
							<<"1- Total Parent and Absent Students:\n"		
							<<"2- Present Students only:\n"
							<<"3- Absent Students only:\n"
							<<"Select To view Attendance: ";
							cin>>sel;
							
							if(sel==1)
								cout<<att.total;
							else if(sel==2)
								cout<<att.presents;
							else if(sel==3)	
								cout<<att.absents;
							else 
								cout<<"Invalid Selection";							
					}
					else{
						cout<<"Invalid username or password";
					}
					
			}//select 4
			else if(sel==4 && log.savedUsername==""){
				cout<<"You don't assigned a password";
			}			
			
			
			getch();
		}while(sel!=5);	
	
	return 0;	
}//end main

  #include<iostream>
 #include<conio.h>
 #include<windows.h>
using namespace std;
struct   menu{
        	int biryani;
	     	int sandwich;
			int chickenroll;
			int fries;
			int bill;
};
int main(){
	system("color F9");
	   menu m1;
	   m1.biryani=0;
	   m1.sandwich=0;
	   m1.chickenroll=0;
	   m1.fries=0;
	   m1.bill=0;
			int k;
			
	do{
			    cout<<"****welcome to my resturant********"<<endl;
			    cout<<"1.menu "<<endl;
				cout<<"2.order with quantity "<<endl;
				cout<<"3.bill"<<endl;
				cout<<"4.exit "<<endl;
				cin>>k;
			  if(k==1)
		 {        system("cls");
		 	cout<<"1.biryani"<<endl;
		 	cout<<"2.sandwich"<<endl;
		 	cout<<"3.chicken roll"<<endl;
		 	cout<<"4.fries"<<endl;
		 	cout<<"press any key to continue"<<endl;
		      	getch();
		}
		 if(k==2){
		 
		do{
			int k;
	      
		           system("cls");
					    cout<<"1.biryani"<<endl;
		 	    cout<<"2.sandwich"<<endl;
		 	    cout<<"3.chicken roll"<<endl;
		 	    cout<<"4.fries"<<endl;
		 	    cout<<"5.exit"<<endl;
		 	    cin>>k;
		 	    if(k==1)
		 	{              system("cls");
		 		cout<<"biryani quantity"<<endl;
		 		cin>>m1.biryani;
		 		m1.bill=m1.biryani*300;
			 }
			 else if(k==2)
		 	{            system("cls");
		 		cout<<"sandwich quantity"<<endl;
		 		cin>>m1.sandwich;
		 		m1.bill=m1.sandwich*260;
			   }
			  else if(k==3)
		 	{           system("cls");
		 		cout<<"chicken rolll quantity"<<endl;
		 		cin>>m1.chickenroll;
		 		m1.bill=m1.chickenroll*500;
			 }
			  else if(k==4)
		 	{         system("cls");
		 		cout<<"fries quantity"<<endl;
		 		cin>>m1.fries;
		 		m1.bill=m1.fries*100;
			 }
			 else
			 break;
			 cout<<"press any key to continue"<<endl;
			 getch();
		  }while(true);
		}
		else if(k==3)
		{          system("cls");
		
			if(m1.bill!=0)
		{int u;
			  if(m1.biryani!=0){
			                 system("cls");
			u++;
			cout<<"biryani   "<<"quantity :"<<m1.biryani<<"prize :"<<m1.biryani*300<<endl;
			}
			 if(m1.chickenroll!=0){
			                system("cls");
			u++;
			cout<<"chicken roll   "<<"quantity:"<<m1.chickenroll<<"prize :"<<m1.chickenroll*500<<endl;
			}
			 if(m1.sandwich!=0){
			               system("cls");
			u++;
			cout<<"sandwich  "<<"quantity:"<<m1.sandwich<<"prize:"<<m1.sandwich*260<<endl;
			}
			 if(m1.fries!=0){
			       system("cls");
			u++;
			cout<<"fries "<<"quantity :"<<m1.fries<<"prize :"<<m1.fries*100<<endl;
			}
			cout<<"--------Totatl bill is"<<m1.bill;
		}else
		cout<<"you ordered nothing"<<endl;
		
		
		cout<<"press any key to continue";
		getch();
		
		}
	}while(k!=4);
	return 0;
				
	
}

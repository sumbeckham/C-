#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class R
{
	public:
		string name;
		string sex;
		int a;
		void geta()
		{
			cout<<"::welcome to the regestration page::\n";
			cout<<"\nplease enter your full name :\n";
			getline(cin, name);
			cout<<"\nenter your age:\n ";
			cin>>a;
			cout<<"\nenter your sex";
			getline(cin, sex);
			cout<<"input 5 to display the filled details:\nelse input 6 to return to main menu:\n "<<endl;
			
			
		}
	
};

class search:public R
{
	public:
		int i;
		void getr()
		{
			cin>>i;
			if(i==1702)
			cout<<"id no.:1702\nName: john miller\nAge:45\nsex: Male"<<endl;
			else
			if(i==1703)
			cout<<"id no. :1703\nName:stacy keppler\nAge:19\nsex: Female"<<endl;
			else
			if(i==1704)
			cout<<"id no. :1704\nName:karl bose\nAge:72\nsex: Male (senior citizen)"<<endl;
		
			
		}
	
 }; 
 
 class D:public R
 {
 	public:
 		void disp()
 		{
 			cout<<"saved data is:\n";
 			cout<<name<<endl;
 			cout<<"age: "<<a<<endl;
 			cout<<sex<<endl;
 			
		 }
 		
 	
 };
 class T:public R
 {
 	public:
 		void exp()
 		{
 			cout<<":: Welcome to Travel Agency::\n"<<endl;
            cout<<"please toggel in between these options\n"<<endl;
			cout<<"1.New Registration\n2.Search\n3.modification\n4.delete"<<endl;
		 }
 };




int main()
{
   int k;
   R r;
   search s;
   D d;
   T t;
   cout<<":: Welcome to Travel Agency::\n";
   cout<<"please toggel in between these options \n1.New Registration\n2.Search\n3.modification\n4.delete"<<endl;
   cin>>k;
   switch(k)
   {
   	case 1:r.geta();
   	      
	   
	   break;
	   
	case 2: cout<<"enter any these id's to search \nid no: 1702\n\t1703\t1704";
	        s.getr();
	        break;
	case 3:  
	break;
	case 4:
	break;
	case 5: d.disp();
	break; 
	case 6: t.exp();
	break;   
   }
   
   




return 0;
	
}

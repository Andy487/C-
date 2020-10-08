#include<iostream>
using namespace std;
 int main()
  {
  	int i,choice;	  
	  cout<<"1.SUNDAY"<<endl;
	  cout<<"2.MONDAY"<<endl;
	  cout<<"3.TUESDAY"<<endl;
	  cout<<"4.WEDNESDAY"<<endl;
	  cout<<"5.THURSDAY"<<endl;
	  cout<<"6.FRIDAY"<<endl;
	  cout<<"7.SATURDAY"<<endl;
	  cout<<"Enter Your Week Day:-";
	  cin>>choice;
	  switch(choice)
	   {
	   	case 1:
	   		   cout<<"Your Week Day is 'SUNDAY' ";
	   		   break;
	   	case 2:
		       	   cout<<"Your Week Day is 'MONDAY' ";
	   		   break;
	   	case 3:
		          cout<<"Your Week Day is 'TUESDAY' ";
	   		   break;	   
        case 4:
		          cout<<"Your Week Day is 'WEDNESDAY' ";
	   		   break; 
		case 5:
		         cout<<"Your Week Day is 'THURSDAY' ";
	   		   break;		    
	   	case 6:
		          cout<<"Your Week Day is 'FRIDAY' ";
	   		   break;	   
		case 7:
		         cout<<"Your Week Day is 'SATURDAY' ";
	   		   break; 
		 }
	//	 return 0; 
	cout<<"size="<<5*sizeof(int); 
     }


#include<iostream>
using namespace std;
 class operatorOverload
 {
 	public:
 	     int a,b;
 	 public:
	     int setdata(int,int);
	     
	    /* int setdata(int x,int y)
         {
 	       a=x;
 	       b=y;
          }*/
		// void display();
	//	operatorOverload operator+(operatorOverlaod&);  //declaration
	 operatorOverload operator+( operatorOverload c) 
          {   
 	        operatorOverload temp;
 	         temp.a=a+c.a;
 	          temp.b=b+c.b;
 	          return temp;
           }  
		   
 
		  void display()
  {
  	 cout<<"result:"<<a<<endl<<b<<endl;
  	//	 cout<<"operator:"<<b<<endl<<b<<endl;
  } 
  operatorOverload operator -(operatorOverload c)
   {
   	  operatorOverload temp;
   	  temp.a=a-c.a;
   	  temp.b=b-c.b;
   	  return temp;
	} 
 };
 int operatorOverload::setdata(int x,int y)
 {
 	 a=x;
 	 b=y;
 }
 /* operatorOverload::operatorOverload operator+( operatorOverload &c) 
          {   
 	        operatorOverload temp;
 	         temp.a=a+c.a;
 	          temp.b=b+c.b;
 	          return temp;
           } */ 
		   
 
  int main()
   {
   	  operatorOverload p4,p1,p2,p3;
   	  p1.setdata(3,4);
   	  p2.setdata(6,7);
   	  p3=p1+p2;
   	  p4=p2-p1;
   	  p3.display();
   	  p4.display();
   }

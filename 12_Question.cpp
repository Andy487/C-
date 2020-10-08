#include<iostream>
using namespace std;
 class matrix
  {
  	 public:
 	     int a,b;
 	 public:
	     int setdata(int,int);
	      matrix operator+( matrix c) 
          {   
 	        matrix temp;
 	         temp.a=a+c.a;
 	          temp.b=b+c.b;
 	          return temp;
           }  
  void display()
   {
  	 cout<<"result:"<<a<<endl<<b<<endl;
    } 
  matrix operator -(matrix c)
   {
   	  matrix temp;
   	  temp.a=a-c.a;
   	  temp.b=b-c.b;
   	  return temp;
	} 
 };
 int matrix::setdata(int x,int y)
 {
 	 a=x;
 	 b=y;
 }
   int main()
   {
   	 matrix p4,p1,p2,p3;
   	  p1.setdata(10,4);
   	  p2.setdata(6,7);
   	  p3=p1+p2;
   	  p4=p2-p1;
   	  p3.display();
   	  p4.display();
   }

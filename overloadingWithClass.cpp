#include<iostream>
#include<conio.h>
using namespace std;
  class countArea 
  {
  	 private:
  	 	     int l,b,resul,r;
  	 	     float result;
  	 public:
  	 		 float area (int ,int);      //1st function and define scope 19 to 22                       1st and 2nd fun are correct             
             int area(int,int,int);                //2nd fun  scope 31 to 36
             int area();                 //3rd function scope 23 to 30
             int read();                 //call inside 3rd fun and scope 37 to 43
             float calculate(int);       //call inside 3rd fun and pass int value,scope is 44 to 49
             void display(float);   
    };
      float countArea::area(int l,int b)
       {
	     return (0.5*l*b);
        }
      int countArea::area(int l,int b,int h)
       {     	
     	 resul=l*b*h;
     	 cout<<"Area of rectangle:-"<<resul;
	    }    
	  int countArea::area()
	   { 
	     int r;
	     r=read();
	  	 result=calculate(r);
	  	 display(result);
	      return 0;
		}	
	  int countArea::read()
	   {
          int r;		
		  cout<<"Enter Value of circle:-";
		  cin>>r;
		  return (r);
		}	 
	  float countArea::calculate(int a)
	   {	
		   float result;
		   result=(3.14*a*a);
		   return (result);
		}   
	  void countArea::display(float result)	
	   { 
		   cout<<"Area of circule:-"<<result;
		}
	  int main()
	   {  
		 	countArea c1;             
		 	cout<<"1st function:-"<<c1.area(3,5)<<endl;
		 	cout<<"2nd function:-"<<c1.area(6,5,4)<<endl;
		 //	c1.area();
		 	cout<<"3rd function:-"<<c1.area()<<endl;
			 /*s=c1.read();
		 	c1.calculate(s);
		 	c1.displya(result);*/
		 	return 0;
		}

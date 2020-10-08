#include<iostream>
#include<conio.h>
using namespace std;
 float area (int ,int);      //1st function and define scope 20 to 22                       1st and 2nd fun are correct 
 int area(int, int,int);                 //2nd function scope 24 to 29
 void area();                //3rd fun  scope 31 to 37
 int read(); 
 float calculate(int); 
 void display(float);               //call inside 3rd fun and scope 38 to 44
 int main()        
  {
  	int l,b;
  	cout<<"Enter Two Values"<<endl;
  	cin>>l>>b;
  	cout<<"1st Area of RightAngle:-"<<area(l,b)<<endl;
  	cout<<"2nd area function:-"<<area(3,4,5)<<endl;
	area();
	//cout<<area();
      return 0;
  	}
  float area(int l,int b)
     {
	   return (.5*l*b);
      }
   int area(int a,int b,int c)
      {
      	return a*b*c;
	  }
 
	void area()
	  { float result;
	    int r,x;
	    
	    r=read();
	  	result=calculate(r);
	  	display(result);
		  }	
	int read()
	{
		int r;
		cout<<"Enter Value of circle:-";
		cin>>r;
		 return (r);
		  }	 
		float calculate(int a)
		 {	
		 	 return (3.14*a*a);
		 	 
			}   
		void display(float result)	
		{ 
		    			cout<<"Area of circule:-"<<result;
         }
        

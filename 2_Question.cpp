#include<iostream>
using namespace std;
class callByValue
 { 
     int a,b,c;
     public:
  void add(int a,int b)
    {
    	c=a+b;
    	cout<<"Additions is:-"<<c<<endl;
	}
	void sub(int a,int b)
	  {
	  	  c=a-b;
	  	 cout<<"Substraction is:-"<<c<<endl;
	  }
	  void multiply(int a,int b)
	   {
	   	  c=a*b;
	   	 cout<<"Multiply is :-"<<c<<endl;
	   }
	   void divide (int a,int b)
	    {
	    	c=a/b;
	    	cout<<"Deviedes is:-"<<c<<endl;
	     }
	     void mod (int a,int b)
	      {
	      	c=a%b;
	      	cout<<"Mod Result is:-"<<c<<endl;
		  }
    };
	int main()
	 {    
	      callByValue value;
	      value.add(8,4);
	      value.sub(8,4);
	      value.divide(8,4);
	      value.multiply(8,4);
	      value.mod(9,4);
		   return 0;
	 }

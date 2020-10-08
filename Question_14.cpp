//Write a C++ program to implement single inheritance
#include<iostream>
using namespace std;
 class BMW
   {
   	protected:
   	    float tierSize;
 	    int tier;
 	    string color,model;
 	    public:
 	        void car(int,string,string);
 		    
    };
    class AUDI:public BMW
     {
     	public:
     		void car(int,string,string);
	 };
	 void BMW::car(int t,string c,string m)
	   {
	     cout<<"Car Model :-"<<m<<endl;
   	     cout<<"Tier Size:-"<<t<<endl;
   	     cout<<"Color:-"<<c<<endl;
	   }
	   void AUDI::car(int t,string c,string m)
	   {
	     cout<<"Car Model :-"<<m<<endl;
   	     cout<<"Tier Size:-"<<t<<endl;
   	     cout<<"Color:-"<<c<<endl;
	    }
	    int main()
	      {
	      	BMW c1;
	      	AUDI c2;
	      	c1.car(3,"Top","BLACK");
	      	c2.car(2,"Lowest","RED");
		  }

// Write a C++ program to implement multiple inheritance. 
#include<iostream>
using namespace std;
 class BMW
   {
   	protected:
   	    float tierSize; 	    
 	    string color,model;
 	    public:
 	       virtual void car(float,string,string); 		    
    };
    class AUDI
     {
     	protected:
     		int tier;
     	public:
     		void car(int,string,string);
	 };
	 void BMW::car(float t,string c,string m)
	   {
	     cout<<" BMW Car Model :-"<<m<<endl;
   	     cout<<"Tier Size:-"<<t<<endl;
   	     cout<<"Color:-"<<c<<endl;
	   }
	   void AUDI::car(int t,string c,string m)
	   {
	     cout<<"AUDI Car Model :-"<<m<<endl;
   	     cout<<"Tier Size:-"<<t<<endl;
   	     cout<<"Color:-"<<c<<endl;
	    }
	    class NEXA :public BMW,public AUDI
     {
     	public:
     		void car(int,string,string);
	 };
	 void NEXA::car(int t,string c,string m)
	   {
	     cout<<"NEXA Car Model :-"<<m<<endl;
   	     cout<<"Tier Size:-"<<t<<endl;
   	     cout<<"Color:-"<<c<<endl;
	   }
 	    int main()
	      {
	      	BMW *p,c1,c2;
	      	
			 NEXA c3;
	      	//AUDI c2;
	      	 c1.car(1.2,"BLACK","TOP");               //overriding function call;
	         c2.car(2,"RED","LOWEST");
		     p=&c2;
		     p->car(3,"GREEN","2nd TOP");            //virtual fun calling
		     p=&c3;
		     p->car(3,"ORENGE","TOP");
		}

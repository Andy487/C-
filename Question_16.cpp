#include<iostream>
using namespace std;
class base
 {
 	protected:
 		int a,b;
 		public:
 			void readB()
 			  {
 			  	cout<<"Enter value of A and B:-"<<endl;
 			  	cin>>a>>b;
			   }
 };
 class derrived :public base
  {
  	protected:
  		int c,d;
  		public:
  			void read_d()
  			   {
  			   	cout<<"Enter value of C and D:-"<<endl;
  			   	cin>>c>>d;
  			   	}
  };
  class dChild
   {   
     protected:
   	   int e;
   	   public:
   	   	void read_dC()
   	   	 {
   	   	 	cout<<"Enter value of E:-"<<endl;
   	   	 	cin>>e;
   	   	 	 } 	
   };
   class dC_child :public dChild,public derrived
     { 
     	public:
     		void fun()
     		{
              readB();  		
	          read_d();
	          read_dC();
	          cout<<"Result is of a+b+c*d/e:-"<<a+b+c*d/e<<endl;
            }
 	 };
	 int main()
	  {
	  	 dC_child obj;
	  	 obj.fun();
	     return 0;
	  }

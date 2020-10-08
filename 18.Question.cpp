#include<iostream>
using namespace std;
class account
{  
 protected:
        int p,t;
        double i,r;
		public:
	virtual float intrest(int,float,int)=0;       //Abstract class can have normal functions and variables along with a pure virtual function.
};
class saving :public account
 {  
    
     public:
 	   float intrest(int p,float r,int t)
 	   {  
 	  
 		i=p*r*t;
 		 cout<<"interst saving"<<endl;
 		return i;
	    }
 };
 class current :public saving
   {  
  	 public:
   	 float intrest(int p,float r,int t)
   	 {  
   	 	i=p*r+t;
   	 	cout<<"interst current"<<endl;
 		return i;
		}  
//display()
// {
// 	cout<<"Display:  "<<endl;
//  } 
	};
   int main()
    {   
	    float i;
     	saving b1;
     	current b2;
		account *p;         //pointers and references of Abstract class type can be created.
    	p=&b1;
    	cout<<"interest ptr:  "<<p->intrest(4,4.3,5)<<i<<endl;      //i was printing directly i;
    	i=p->intrest(4,4.3,5);
    	cout<<"Direct print:     "<<i<<endl;        
        cout<<"without ptr:  "<<b2.intrest(3,4.3,5)<<endl;
    //  b2.display();             //after atleast one time define pV fun,we can execute other fun inside derived class without define of pure virtual fun
	} 

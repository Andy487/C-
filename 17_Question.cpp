#include<iostream>
using namespace std;
 class base
 {
 	public:
 		float height,width;
 	public:
	   
	   virtual float getResult()=0; 
	   calculate(int h)
	   {
	   	 height=h;
	   }
	   calculateA(int w)
	   { 
	     width=w;
	     }
 	};
 	class derived : public base
 	{  public:
 		float getResult()
 		{	
		 	 return height*width;
 	     
		  		  }
		  	};
	 class derivedChild :public base
	  { public:
	  	   float getResult() 
	   {
	   	 return height*width/2;
	   }
	 };
	 int main()
	    {
	    	 derivedChild c1;
			 derived d1;
	    	 d1.calculate(5);
	    	 d1.calculateA(5);
	    	 cout<<"result"<<d1.getResult()<<endl;
             c1.calculate(5);
	    	 c1.calculateA(5);
	    	 cout<<"result"<<c1.getResult()<<endl;
	    }
		

#include<iostream>
using namespace std;
template <class X,class Y>
X big(X a,Y b)
  {
  	 if(a<b)
  	 {
  	 	cout<<b<< " Is grather then"<<a<<endl;
	   }
	   else
	      cout<<b<<" is less then "<<a<<endl;
   } 
   int main()
    {
    	big(4,5);
    	big(8.9,5.3);
	}

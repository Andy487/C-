#include<iostream>
using namespace std;
 void add(int ,int);     //function declaration
 int main()
    { int 
	 add(3,4);            //function calling with call by value
     }
     void add(int a,int b)  //function defination with actual argument
     {  
	    int c;
     	c=a+b;
     	cout<<"Sum of 'a' and 'b' :   "<<c<<endl;
	 }

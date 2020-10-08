#include<iostream>
//#include<conio.h>
using namespace std;
 class construct
      {
      	public:
      	construct()
      	{
      		cout<<"We are in Default Constructor"<<endl;
		  }
		  ~construct()
		  {
		  	cout<<endl<<"We are in Destrictor"<<endl;
		  }
	  };
	  int main()
	   {
	   	 construct b1;
	   	//getch(); 
	   }

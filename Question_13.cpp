// Write a C++ program to implement function overloading.
#include<iostream>
using namespace std;
 class car
 {
 	float tierSize;
 	int tier;
 	string color,model;
 	public:
 		void BMW(int,string,string);
 		void BMW(float,string,string);
 };
 void car::BMW(int t,string c,string m)
   {
   	cout<<"Car Model :-"<<m<<endl;
   	cout<<"Tier Size:-"<<t<<endl;
   	cout<<"Color:-"<<c<<endl;
   }
   void car::BMW(float t,string c,string m)
    {
     cout<<"Car Model :-"<<m<<endl;
   	 cout<<"Tier Size:-"<<t<<endl;
   	 cout<<"Color:-"<<c<<endl;
     }
     int main()
     {
     	car BMW;
     	BMW.BMW(1.2,"Jeta","black");
	   // BMW.BMW(3,"black","Jeta");
	 }

#include<iostream>
using namespace std;
float calculate(int m,int s,int c)
 {  float per,marks;
   marks=m+s+c;
	     per=(marks)/300*100;	
      cout<<"Your Perccentage is:-"<<per<<endl;
	 return per;
   }
   void divisionDisplay(float per)
    {
    	if(per>80 && per<=100)
		  cout<<"you are topper with="<<per<<"%"<<endl;
	      else
	      {
		    if(per>=60 && per<80)
		      cout<<"you are scored first division="<<per<<"%"<<endl;
		        else if(per>=50 && per<60)
		          cout<<"you are scored second division="<<per<<"%"<<endl;
		        else if(per>=40 && per<50)
		          cout<<"you are scored third division="<<per<<"%"<<endl;
		        else if(per>37 && per<40)
		          cout<<"you are pass by grace="<<per<<"%"<<endl;
		        else if(per>=36 && per<=37)
		          cout<<"jako rakhe saiyaan mar ske na koi="<<per<<"%"<<endl;
		    else
		      cout<<"sorry,you are fails.please try again"<<endl;
		    }
	}
int main()
  {
  	string a;
  	int n,i;
  	float m,s,c,result;
  	cout<<"Enter Numbers of Total Students"<<endl;
  	cin>>n;
	  for(i=1;i<=n;i++)
  	   {
	     cout<<i<<"."<<"Enter Your Name:-"<<endl;
	     cin>>a;
	     cout<<"Enter marks of Math,Science,Computer:-"<<endl;
	     cin>>m>>s>>c;
	     result=calculate(m,s,c);
		 divisionDisplay(result);
		}
  }

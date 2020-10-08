//Write a C++ program to implement an array and its operations (add, display,search) using functions.
#include<iostream>
using namespace std;
 int main()
 {
   int a[10],i,n,x,found;
   int pos;

   cout<<"Enter number of an array:-";
   cin>>n;
   cout<<"Enter the elements of an array:-"<<endl;
   for(i=0;i<n;i++)
    {
    	cin>>a[i];
     }
     cout<<"Element are Follow as:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Enter element which You want search in an array:-";
	cin>>x;
	found=0;
	for(i=0;i<n;i++)
	 {
	 	cout<<a[i]<<endl;3

	 	if(a[i]==x)
	 	 {
	 		  found=1;
	 		  break;
	       }  
	 }
		if(found==1)
		{
			
				   
			   cout<<"searched succesfully:-"<<a[i]<<endl;
	   }
	 	else
			  	  cout<<"sorry this element not inside an array";
	     
	 	return 0;
  }

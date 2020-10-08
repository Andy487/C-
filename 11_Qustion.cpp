// Write a C++ program to implement an Array class with data members as n,a[10]. And member function as read(), search(), display(), insert().
#include<iostream>
using namespace std;
class array
  {
  	int a[10],i,pos,x;
  	int n= sizeof(a);
  	public:
  		read()
  		{
		   cout<<"Enter number of an array:-";
            cin>>n;
            cout<<"Enter the elements of an array:-"<<endl;
             for(i=0;i<n;i++)
              {
             	cin>>a[i];
               }
               return a[i],n;
        
		  }
        search(int a[10],int n)
        {
        	
				cout<<"Enter element which You want search in an array:-";
          	cin>>x;
         int found=0;
	         for(i=0;i<n;i++)
	          {
	 	     cout<<a[i]<<endl;
	 	    if(a[i]==x)
	      	 {
		     
	 		  found=1;
	 		  break;
	       }  
	 }
		if(found==1)
		{
			  	   
			   cout<<"searched succesfully:-"<<a[i];
	   }
	 	else
			  	  cout<<"sorry this element not inside an array";
	     
		}
    
	  
	/*  insert()
	  {
	  	 cout<<"enter elements after which you want insert:-";
         cin>>pos;
    cout<<"enter element which you want insert in array:-";
    cin>>x;
    for(i=n;i>=pos;i--)
    {
       a[i]=a[i-1];
       }
       a[pos-1]=x;
       n++;
       cout<<"inserted is succesfully";	  	
	  }
	   display()
      {
      		for(i=0;i<n;i++)
         	{
	     	cout<<a[i]<<endl;
	         }
  */};
  int main()
  {
    int *p;
     array b1;
          p=b1.read();
     b1.search(p);
 //  b1.insert();
  // b1.display();
}

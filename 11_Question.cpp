#include<iostream>
#include<conio.h>
using namespace std;
 class array
   {
   	int a[10],n,i,search,pos,x;
   	public:
   		read()
   		  {
   			cout<<"Enter the size of an array"<<endl;
   			cin>>n;
   			cout<<"Enter the elements of an array"<<endl;
   			for(i=0;i<n;i++)
   			 {
   			 	cin>>a[i];
				}
            }
        insert()
		  {  
		     cout<<"enter elements after which you want insert:"<<endl;
    cin>>pos;
    cout<<"enter element which you want insert in array:";
    cin>>x;
    for(i=n;i>=pos;i--)
    {

       a[i]=a[i-1];
       }
       a[pos-1]=x;
       n++;
       cout<<"inserted is succesfully\n"<<endl;
			 }   
         search()
          {
           	cout<<"Enter the element which you want search in an array"<<endl;
           	cin>>search;
           	 for(i=0;i<n;i++)
           	  {
           	  	if(search==a[i])
           	  	 {
           	  	 	cout<<"inside if statement";
           	  	 	break;
					  }
				 }  
     		}
     	display()
		  {
		 	for(i=0;i<n;i++)
		 	 {
		 	 	cout<<"Elements are follow as:"<<endl<<a[i]<<endl;
			  }
		   }	   
   };
   int main()
     {
     	array b1;
     	getch();
	 }

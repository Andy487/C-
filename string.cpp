#include<iostream>
#include<cstring>
using namespace std;
 display(char *fN,char *lN,int result)
  {
  	if(result<0)
  	{
  		cout<<fN<<" and grather then "<<lN;
  		}else if(result>0)
  		  {cout<<fN<<" and "<<" less then "<<lN;
			}
	  }
int main()
  {
  	 char fN[10],lN[10];
  	 int result;
  	 cin>>fN>>lN;
  /*	 cout<<fN<<" "<<lN<<endl;
  	 cout<<"len:"<<strlen(fN)<<endl;
  	 strcpy(lN,fN);
  	 cout<<"strcpy:"<<lN<<endl;
  	 strcat(fN, lN);
  	 cout<<"strcat: "<<fN<<endl;
  
  	 cout<<"strrev: "<<strrev(fN)<<endl;}
  	// cout<<"strrev:"<<fN;*/
//  	strcpy(fN,"Anand");
//    //	display(fN,lN,result);
//  	strcpy(lN,"Rajes");
//  	cout<<"strcmp local:"<<strcmp("banyy","anand")<<endl;
  	
  	//display(lN,lN,result);
   if(strcmp(fN,lN)>0)
      
	    cout<<fN<<" is less then "<<lN<<endl;
	
       else if(strcmp(lN,fN)>0)
    
		     cout<<lN<<" is grather then "<<fN<<endl;
		else
		 		   cout<<fN<<" is equal to "<<lN<<endl;
		    
	}

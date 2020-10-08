#include<iostream>
#include<fstream>
using namespace std;
int main()
 {
 	 ifstream getData;
 	 string line;
 	 char ch;	
 	 getData.open("exist.csv");
 	 if(!getData)
 	 {
 	 	 cout<<"i cannot find this file"<<endl;
 	 	 exit(-1);
	  }  	  
 	 ofstream printData;
 	 printData.open("copyFile.csv");
	  if(!printData)
	  {
	  	cout<<"i cannot find this file"<<endl;
 	 	 exit(-1);
	   } 
	   while(getData.eof()==0)
	    {
	    	 getData>>ch;
	    	 if(ch=='\n')
	    	 {
	    	 	printData<<endl;
	    	 	cout<<"new line";
			 }
	    	 printData<<ch;
	    	// cout<<ch;
		}
		cout<<"file copies successfully"<<endl;
     getData.close();
     printData.close();
   }

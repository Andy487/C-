#include<stdio.h>
#include<conio.h>
  int main()
  {
    FILE *fp,*ftpr;
    char ch;
    char *filename="TEST.txt";
    fp==fopen(filename,"r");
    if(fp==NULL)
      {
      	printf("file could not open");
	  }
	 ftpr==fopen("test2.csv","w");
	 if(ftpr==NULL)
	  {
	  	 printf("file could not open");
	   } 
	   
	   //while((ch=fgetc(fp))!=NULL)
	   
	 /*  while(ch)
	    {    
	        
	    	fgetc=(fp,ch);
	    	if(ch=='\n')
	    	  {
			     fprintf(ftpr,",\n");
                }
                fprintf(ftpr,"%c",ch);
		}*/
		ch = fgetc(fp); 
    while (ch!= EOF) 
    { 
        fprinf(ftpr,"%c",ch); 
        ch = fgetc(fp); 
    } 
	   printf("Sucesss");
	   getch();
  }

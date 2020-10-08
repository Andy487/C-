/*return_type function_name(data_type parameter...)
{  
//code to be executed  
}*/

#include <iostream>
using namespace std;
void func() {  
   static int i=0; //static variable  
   int j=0; //local variable  
   i++;  
   j++;  
   cout<<"i=" << i<<" and j=" <<j<<endl;  
}  
int main()
{
 func();  
 func();  
 func();  
}


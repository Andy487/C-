
#include<iostream>
using namespace std;
 class stu
     {
     	public:
     		string name;
     		int i,age,j;
     		public:
     			stu()
     			{
     				cout<<"default Constructer"<<endl;
				 }
				 stu(string n,int i,int a)
				 {
				   cout<<"Your Roll No is:-"<<i<<endl;
				   cout<<"Name:-"<<n<<endl;
				   cout<<"age:-"<<a<<endl;
     	         }
	 };
	 int main()
	   {
	   	 stu b1,b2("anand",12,23);
	   	 cout<<b1.name<<b1.age<<endl<<b1.i<<endl<<b1.j;
	     //b2.stu;
	   }

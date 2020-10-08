#include<iostream>
using namespace std;
class base
  {
  	 int a,b;
  	 public:
  	 	void setdata(int x,int y)
  	 	{
  	 		a=x;
  	 		b=y;
		   }
		   void showdata()
		   {
		   	cout<<"a="<<a<<","<<"b="<<b<<endl;
		   	cout<<"Sum is:-"<<a<<endl;
		   }
		   friend base operator+(base);
  };
  base operator+(base x)
  {
  	base result;
  	result.a=x.a+x.b;
  	return result;
  }
  int main()
   {
   	 base c1,c2,c3;
   	 c1.setdata(3,4);
   	 c2=+c1;
   	 c2.showdata();
   	 c3=c2;
   	 cout<<"c3:-"<<c3<<endl;
   }

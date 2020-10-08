#include<iostream>
using namespace std;
class Foo
{
private:
    int m;
    int y;
};
 
int main()
{
    Foo foo1= { 4, 5 }; // initialization list
   // Foo foo2 { 6, 7 }; // uniform initialization
   cout<<foo1.m;
    return 0;
}

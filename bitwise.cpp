#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter two integer number: ";
   cin>>a>>b;

   c=a|b;
   cout<<"Bitwise OR: ";
   cout<<c<<endl;

   c=a&b;
   cout<<"Bitwise AND: ";
   cout<<c<<endl;

   c=a^b;
   cout<<"Bitwise XOR: ";
   cout<<c<<endl;

   c=a>>2;
   cout<<"Bitwise Right Shift of 1st integer number: ";
   cout<<c<<endl;

   c=a<<2;
   cout<<"Bitwise Left Shift of 1st integer number: ";
   cout<<c<<endl;

   c=b>>2;
   cout<<"Bitwise Right Shift of 2nd integer number: ";
   cout<<c<<endl;

   c=b<<2;
   cout<<"Bitwise Left Shift of 2nd integer number: ";
   cout<<c<<endl;

   return 0;
}

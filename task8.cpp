#include<iostream>
#include<windows.h>
using namespace std;

void isEqual(int num1, int num2);

main()
{
int num1,num2;
cout<<"Enter 1st number:";
cin>> num1;
cout<<"Enter 2nd number:";
cin>> num2;
isEqual(num1, num2);

}

void isEqual(int num1, int num2)
{

if( num1 == num2 )
   {
cout<<"Equal"<<endl;
    }
if( num1 != num2 )
{
cout<<"Not Equal"<<endl;

   }


}
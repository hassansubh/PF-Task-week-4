#include <iostream>
using namespace std;
int num1,num2,product,sum,division,sub;
char op;
main(){
while(true)
          {
cout<<"Enter number 1:";
cin>>num1;
cout<<"Enter number 2:";
cin>>num2;
cout<<"Enter operatin(+,-,*,/):";
cin>>op;  
cout<<"sum"<<sum<<endl;
cout<<"sub"<<sub<<endl; 
cout<<"division"<<division<<endl; 
cout<<"product"<<product<<endl;  }

if(op=='+')
{    sum=num1+num2; 
cout<<"sum is:"<<sum<<endl;      }

if(op=='-') 
{    sub=num1-num2;
cout<<"sub is:"<<sub<<endl;       } 

if(op=='*')
{  product=num1*num2;
cout<<"product is:"<<product<<endl;      }

if(op=='/')
{  division=num1/num2;
cout<<"division is:"<<division<<endl; 
}





}
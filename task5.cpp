#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printH();
void printA();
void printS();
void printN();


void printH()
{
cout<<"      ***          ***    "<<endl;
cout<<"      ***          ***    "<<endl;
cout<<"      ***          ***    "<<endl;
cout<<"      ***          ***    "<<endl;
cout<<"      ****************    "<<endl;
cout<<"      ****************    "<<endl;
cout<<"      ***          ***    "<<endl;
cout<<"      ***          ***    "<<endl;
cout<<"      ***          ***    "<<endl;
cout<<"      ***          ***    "<<endl;
cout<<endl<<endl;

}

void printA()
{

cout<<"      ***                "<<endl;
cout<<"     *****               "<<endl;
cout<<"    *** ***              "<<endl;
cout<<"   ***   ****            "<<endl;
cout<<"  ************           "<<endl;
cout<<"  ************           "<<endl;
cout<<"  ***      ***           "<<endl;
cout<<"  ***      ***           "<<endl;
cout<<"  ***      ***           "<<endl;
cout<<"  ***      ***           "<<endl;
cout<<endl<<endl;

}

void printS()
{
cout <<"       ************         "<<endl;
cout <<"      **                   "<<endl;
cout <<"       **                  "<<endl;
cout <<"        **                 "<<endl;
cout <<"          **               "<<endl;
cout <<"            **             "<<endl;
cout <<"              **           "<<endl;
cout <<"                **         "<<endl;
cout <<"      ***********          "<<endl;
cout<<endl<<endl;

}

void printN()
{
cout<<"    *****         ***  "<<endl;
cout<<"    *** **        ***  "<<endl;
cout<<"    ***  ***      ***  "<<endl;
cout<<"    ***   ***     ***  "<<endl;
cout<<"    ***    ***    ***  "<<endl;
cout<<"    ***     ***   ***  "<<endl;
cout<<"    ***      ***  ***  "<<endl;
cout<<"    ***       *** ***  "<<endl;
cout<<"    ***         *****    "<<endl;
cout<<endl<<endl;
} 

main()
{

printH();
printA();
printS();
printS();
printA();
printN();

}
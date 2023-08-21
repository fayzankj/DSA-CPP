#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include<conio.h>

using namespace std;

//For students
struct student
{
    /* data */
    string fname;   //first name
    string lname;   //last name
    string regno;   //for registration number
    string classes; // for classes info

} studentdata; //variable for student type

//For teachers

struct teacher
{
    /* data */
    string f_name;  //first name
    string l_name;  //last name
    string qual;    // qualification
    string exp;     // experience
    string pay;     //tchr pay
    string subject; //subject he/she teach
    string lec;     //lectures per week
    string adrs;    //teachers address
    string no;      //phone number
    string blood;   //bld group
    string serves;  // no of serves in schoools
} tech[50];//Variable of teacher type

///////////////////////////////////////////////////
//Main function

void main()
{
    int i=0, j;
    char choice; //for getting choice
    string find;//for sorting
    string srch;

}

while (1)//outer loop
{
     system("cls");//Clear screen

     
//Level 1-Display process 
 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
 cout<<"Enter your choice: "<<endl;
 cout<<"1.Students information"<<endl;
 cout<<"2.Teacher information"<<endl;
 cout<<"3.Exit program"<<endl;
 cin>>choice;

system("cls");//Clear screen

    switch (expression)//first switch
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}
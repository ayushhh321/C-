//There are two types of header file:
//1. system header files : It comes with compiler like niche wala
#include<iostream>
//2. user defined header files : it is written by the programmer like niche wala
// #include "this.h"  -- > this will produce and error if this.h is not present in the curent directory

using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"operators in c++ :"<<endl;
    cout<<"following are the types of operators in c++"<<endl;

//arithmethic operator
cout<<"the value of a+b is "<<(a+b)<<endl;
cout<<"the value of a-b is "<<(a-b)<<endl;
cout<<"the value of a*b is "<<(a*b)<<endl;
cout<<"the value of a/b is "<<(a/b)<<endl;
cout<<"the value of a%b is "<<(a%b)<<endl;
cout<<"the value of a++ is "<<(a++)<<endl;
cout<<"the value of a-- is "<<(a--)<<endl;
cout<<"the value of ++a is "<<(++a)<<endl;
cout<<"the value of --b is "<<(--b)<<endl;

// assignment operator --> used to assign values to variables
//int a=3, b=4;
// char a="b";

//comparison operator --> defintion and meaning in copy

cout<<"following are the example of comaprison operator"<<endl;
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;

//logical operator --> defintion and meaning in copy . it can be only three types as DLD me tha and or not(value oppostie ho jata not me) 

cout<<"following are the example of logical operator"<<endl;
cout<<"the value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
cout<<"the value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
cout<<"the value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;


 
   return 0;
}



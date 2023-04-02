#include<iostream>
using namespace std;

int main()
{
  //1st way to create an array 
  int marks[]={23,45,56,89};

  cout<<marks[0]<<endl;
  cout<<marks[1]<<endl;
  cout<<marks[2]<<endl;
  cout<<marks[3]<<endl;

  //2nd way to create/represent an array

  int mathmarks[4];
  mathmarks[0]=2278;
  mathmarks[1]=738;
  mathmarks[2]=378;
  mathmarks[3]=578;

 cout<<"these are mathmarks "<<mathmarks[0]<<endl;//aise bhi likh skte but niche wala is jada nice looking
 

//we can change the value of an array in middle of code using array name and specify tha value

 mathmarks[2]=544;//value of mathmarks[2] changed before printing
 cout<<mathmarks[0]<<endl;
 cout<<mathmarks[1]<<endl;
 cout<<mathmarks[2]<<endl;
 cout<<mathmarks[3]<<endl;
 
 //printing the array using for loop

 for (int i = 0 ; i<4 ; i++)
  {
    cout<<"the value of mathmarks "<<i<<" is "<<mathmarks[i]<<endl; 
  }

  //pointers in array
  int *p=marks;
  
  cout<<*(p++)<<endl;
  cout<<*(++p)<<endl;//p++ ke karan jump krke 45 pr aagya now ++ kra toh 56 aya now print kra 
  
 cout<<"the value of *p is "<<*p<<endl;  
 cout<<"the value of *(p+1) is "<<*(p+1)<<endl; 
 cout<<"the value of *(p+2) is "<<*(p+2)<<endl; 
 cout<<"the value of *(p+3) is "<<*(p+3)<<endl; 
  return 0;

}     

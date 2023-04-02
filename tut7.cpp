#include<iostream>

using namespace std;
int c = 45;
 int main(){
    
    //***************built in data types*******************

    int a , b ,c ;

    cout<<"enter the vakue of a :- "<<endl;
    cin>>a;

    cout<<"enter the vakue of b :- "<<endl;
    cin>>b;

    //now ek operator bana de rhe jo a and b ko add krke usko C me store krega

    c=a+b;

    cout<<"the sum is "<<c<<endl;
    
    //now until the above line if we run the code it will add a and b because c=a+b is local scope
    //now if we want to print the value of global scope like at line above int main as it is out of int main funtion so we need to use
    //scope resolution operator looks like :: 

    cout<<"the global sum is "<<::c;

    //now it will print the value of both local and global value of C 


    //**************** float , double , and long double literals*******************


    /*sometime to give info about the value we write literals with the data like for float
    we write f and F , for long double it will be L and l */

    float d =34.4F;
    long double e =34.4L;
//we will use sizeof command to get size of any value

    cout<<"the size of 34.4 "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L "<<sizeof(34.4L)<<endl; 
    
//****************refrence variables******************

//ayush-----ayuuu------ranu
/*like if we want to call same variable value but diffent refrence se bas yhi hai refrence variables
for that we use ampercent & */

float x = 455;

/*mai yaha chata hu ki y bhi x ko bula rha so we are using Y as refence*/

float & y=x;

cout<<x<<endl;
cout<<y<<endl;

    //********typecasting*******

    /* it stands for ek data types se dusre data type me convert kr dena bas jisme
    convert krna hai while printing waha pr wo data type likh do */


    int r= 5;
    float z=45.56;

    cout<<"the vale of float should be chaged to integer "<<(int)z<<endl;
    cout<<"the value of integer should be chnaged to long double "<<(long double)r<<endl;

    /* so like this we can covert any data type to other data type*/

    cout<<"the expression is "<<r+z<<endl;
    cout<<"the ezpression is "<<r+(int)z;
    return 0 ;


 }
/*constants , manipulators and operator precedence*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    /*int a =5;
    cout<<"enter the vale of a "<<a<<endl;
    a =6;
    cout<<"enter the vale of a is "<<a<<endl;
    
    /*see yaha pr hum a ke do values liye fir dono ko print karane ke liye cout liye no issues do a ke values print hore
    but we want ki a ki value constant hojaye toh we use Constant in c++ and the keyword for that is const (data type)*/

    const int a = 7;

    cout<<"the value of a is "<<a<<endl;

    // a=3;
/*now yaha upar wale a me error ayega bcz upar hum const fix kr chuke hai isiliye hume age nai badhne dega had to 
delete this abhi comment kr de rhe tum run krke dekh lena revison ke time*/

    cout<<"the value of a is "<<a<<endl;

    /*Manipulators are used to formating data display commonly used manipulators are endl and setw(used for right justify
    the result for using setw we have to include anotther header file called iomanip) this setw is generally used for 
    formatting and justifying text to right*/

     int x=4 , y=33 , z=3444;

    cout<<"the value of x without setw is "<<x<<endl;
    cout<<"the value of y without setw is "<<y<<endl;
    cout<<"the value of z without setw is "<<z<<endl;

    cout<<"the value of y with setw is "<<setw(4)<<y<<endl;
    cout<<"the value of z with setw is "<<setw(4)<<z<<endl;
    cout<<"the value of x with setw is "<<setw(4)<<x<<endl;

    /*operator precendce - basically function likhne hote hai isme visit this wesbite to know kis symbol(+ - *) ka kunsa bracket lgta watch video
    to revise*/ 

    int a= 4 , b=3;
    //int c = (a*5)+b;

    int c = ((((a*5)+b)-45)+87);
    
    return 0;
}




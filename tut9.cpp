/*c++ control structures , if else and switch case statement*/

//read theory and synatx in copy

#include<iostream>

using namespace std;

int main()
{
    //1 . selection control structure if else ladder

    int age;
    cout<<"tell me ur age"<<endl;
    cin>>age;

        if ((age<18) && (age>0)){  //if agar age 0 se leke 18 ke nich hui (if)
        cout<<"you can not come to my party"<<endl;
        }

        else if (age==18){   //agar age 18 hui toh (and)
            cout<<"you are a kid and you will get a kid pass to the party"<<endl;
        }

        else if (age<1){  //agar age 1 se choti hui mns 0 hui (and)
            cout<<"you are not yet born"<<endl;

        }
        
        else{   // agar age 18 se badi hui toh (or)
            cout<<"you can come to my party"<<endl;
        }
        //this means we have taken all the conditions

     

     //2. selection control strcuture : switch case statements
     /*here also we are using switch boiler plate for switch case statement*/
      switch (age)
      {
      case 18:
      cout<<"you are 18"<<endl;
      break;

      case 22:
      cout<<"you are 22"<<endl;
      break;

      case 33:
      cout<<"you are 33"<<endl;
      break;

      default:
      cout<<"done with switch case"<<endl;

        break;
      }

      //to run any control strcutucte you have to comment uske phela wala control structure

     return 0;
}

//break and continue statements in c++

/*break mns kite no. ka loop ho uss particular if par uss loop se exit krdo and loop ko bhi khatam
krdo and continue means jitte ka loop ho usko continue kro uss particular if ko ignore krke agee ki
iteration continue kro */

#include<iostream>
using namespace std;

int main(){

    /*for (int i = 0; i<4 ; i++)
    {
        cout<<i<<endl;
        if(i==2){
            break;
        }
    } */ 

    for (int i=0; i<=10 ; i++)
    {
       
        if(i==2){
            continue;
        }

        
         cout<<i<<endl;
    }  

    /*just for me 

for (int i=0; i<=10 ; i++)
    {
       
        if(i==2){
            continue;
        }

        else if(i==7){
            break;
        }
    return 0;
         cout<<i<<endl;*/

         return 0;
    }  


    
    
    





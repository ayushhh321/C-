//Pointers in c++

/* A pointer is a  data type which holds the address of other data type just samjho is topic
me kya hota ki ek data type dusre data type ka address (tumhre laptop me) and uska value 
store krke rakhta hai . The "&" operator is "address off" operator (iska use krke address
nikal skte and isi me address store krte) and the "*" operator is called "value at" 
dereference operator (iska use krke value nikal skte uss address ka)*/

#include<iostream>
using namespace std;

int main()
{
     int a=3;
     int *b=&a ; //{here also b=&a}(storing a ka value* at b and address also at b&)

     //&-->(address of) operator 
     cout<<"the address of a is "<<&a<<endl;
     cout<<"the address of a is "<<*b<<endl; //also aise bhi bcz *b=&a

     //*----->(value at) dereference operator
     cout<<"the value at b is "<<*b<<endl;

     //pointer to pointer
     /*iska mtlb ek pointer (new banega abhi) usme dusre(last pointer already existed) pointer
     ka address and value store karayega and ye second pointer hai i mean pointer ke andar
     pointer hau jo do star lagega*/

     int **c=&b; //{here also c=&b}(**c ka mtlb ek star mtlb isme * pr *c ko store kara hai isiliye 3rd line me value at c is *c)
     cout<<"the address of b is "<<&b<<endl;
     cout<<"the address of b is "<<c<<endl;
     cout<<"the value at c is "<<*c<<endl;
     cout<<"the value at address value at(address vale at c) is "<<**c<<endl;

    return 0;
}
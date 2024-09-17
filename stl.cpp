#include<bits/stdc++.h>
using namespace std;

void print(){
  cout<<"ayush"<<endl;
}

int add(int a, int b)
{
     return a+b;
}

int main(){
print(); //normal call kr diya print ko

int value =add(4,4); // yaha toh upar parameter ki value pass kara diye
cout<<value; //and print kra diye



return 0;

}

//algorithms , containers , fucntions , iterators

//pairs - part of utlitty libraryry

//suppose we want to store two interger we can do this using pairs can contain any data type now this varuable p contain two integer

pair<int, int> p={2,3};

cout<<p.first<<endl;//2
cout<<p.second<<endl;//3

//we can use nested porperty of pair to store multiple values

//multiple value store in nested way

pair<int,pair<int,int>> p={3,{4,5}};

cout<<p.second.first<<endl;//4
cout<<p.first<<endl;


//we can declare pair array indexing hogi {} brackets ko dekh ke

pair<int,int> arr[]={{1,2},{3,4}};//whole {1,2} is index 0 , whole {3,4} is index 1
cout<<arr[1].second//4


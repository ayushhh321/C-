#include<bits/stdc++.h>
using namespace std;

void print(){
  cout<<"ayush"<<endl;
}

int add(int a, int b)
{
     return a+b;
}



//algorithms , containers , fucntions , iterators

//pairs - part of utlitty libraryry

//suppose we want to store two interger we can do this using pairs can contain any data type now this varuable p contain two integer

void pairslearn(){

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

}

//vectors

//why and how = arr[5] it is static in nature ek baar declare hogya uske baad we cant modify length and chize toh waha prr we use vector it is dynamic in nature . so when we donot know the size like kitna store krna hai uss point pr we use vector

//it contains any data ttype yaha pr we are using int only

void vectorlearn(){

vector<int> ayush; //creating vector named ayush of int data type. it creates empty container names ayush. now abhi kisi size ka nahi hai ye now jabhum isme value dalnege toh dynamically ye apna size badahyega

//adding values

ayush.push_back(1); 
ayush.emplace_back(2);//same kaam but faster

//now creating vector of pair data type;

vector<pair<int,int>> ayush1; //now this vector accepts pair values;

ayush1.push_back({1,2});//now ayush1 has one pair {1,2}

//defineing an vector with an fixed size and value like yaha pr ayush2(5,20) this means conatiner ka size 5 hai and pacho me 20 filled hai if only ayush2(5) hai this measn 5 size ka hai but usme garbage value hai

vector<int> ayush2(5,20);
ayush2.push_back(100);//container of size 5 now will be size 6 and vakues will be 20 20 20 20 20 100;

vector<int> ayush3(5);//conatin 5 garbage value

//copying one conatiner to another isme new container create hojyega with new address

vector<int> ayush3(5,22);
vector<int> ayush4(ayush3);

//Accessing elements in vector

//example vector ayush5={22,33,44,55}


//accessing from starting using iterators
vector<int>::iterator it=ayush5.begin()//"it" is name of iteraror
it++;
cout<<*(it)<<"" // * means value at that iterator now 22,33,44,55

it=it+2;
cout<<*(it)<<""//2 chor ke

//accessing from ending using iterators
vector<int>::iterator it=ayush5.end();

}

int main(){
print(); //normal call kr diya print ko

int value =add(4,4); // yaha toh upar parameter ki value pass kara diye
cout<<value; //and print kra diye



return 0;

}
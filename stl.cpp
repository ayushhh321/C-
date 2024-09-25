//set data structure accepts only unique elements
//maps used to store key value pair

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
it--;
cout<<*(it)<<"";

//normal acessing using index
cout<<ayush5[2]<<endl; //44

//printing an vector

for(vector<int>::iterator it=ayush5.begin(); it !=ayush5.end(); it++) //contain start kaha se krna , kab tak krna , increment
{
  cout<<*(it)<<endl; //22,33,44,55
}

//now itta likhne ke jagah use auto auto khud se hi data type deal kr lega auto assign krke

for(auto it=ayush5.begin(); it !=ayush5.end(); i++){
  cout<<*(it)<<endl; //22,33,44,55
}

//deleting an element
//use erase to delete
//vectror<int> ayush6={12,13,14,15,16,17}
ayush6.erase(ayush.begin()+1)//12,14,15,16,17
ayush6.erase(ayush.begin()+2,ayush.begin()+4)//12,13,15,17


//insert funtion
vector<int> v(2,100)//2 size and 100 100
v.insert(v.begin(),300)//300 100 100
v.insert(v.begin()+1,2,10)//after one place , how many times , the value to add //300 10 10 100 100

//size function
vector<int> ayush7(23,34)
cout<<ayush7.size();//2

//pop last element
//10,20
v.pop_back()//10

//swap
//v1-10,20 and v2-39,30
v.swap(v2)//v1-39,30 and v2-10,20

//erases whole
v.clear();


//list = same as vector , dyanimc can do all frontrow functions

void explainlist(){
  list<int> list1;
  list1.push_back(3);//{3}
  list1.emplace_back(4);//{3,4}

  //yaha pr insert ka use krke front me add nahi krna hota yaha funxtion hota hai

  list1.push_front(5);//{5,3,4}

  //rsst funtion same as vector
}


//deque
void dequeLearn(){
deque<int>dq1;
dq1.push_back(1);//{1}
dq1.push.back(2);//{1,2}
dq1.emplace.back(4);//{1,2,4}
dq1.push_front(7);//{7,1,2,4}

dq1.pop_back();//{7,1,2}
dq1.pop_front();//{1,2}

//baki sab same as vector
}


//stacks- it words on theory of LIFO isme indexing nahi hoti yaha sirf top , push and pop hota hai O(1)

stack<int> st1;
st1.push(1);//{1}
st1.push(2);//{2,1}
st1.push(3);//{3,2,1}
st1.push(4);//{4,3,2,1}

cout<<st1.top()//4  st[2] this is invalid bcz indexing nahi hoti

st1.pop()//3,2,1

cout<<st.size()//3

stack<int> st1,st2;
st1.swap(st2)

//queue-it works on the concept of FIFO, similar to stack but it is FIFO. O(1) . ISME CHIZE LINE ME JATI HAI

void queueLearn(){
queue<int>q1;
q1.push_back(1)//{1}
q1.push_back(2)//{1,2}

q.back+=5;

cout<<q1.back()//last element me 5 add hoga 5+2=7

//now q1 become 1,7

cout<<q1.front()//1
q1.pop()//7

//now q1 has only 7

cout<<q1.front()//7

}


//Priority queue - It is tree data structure . isme kaise bhi data dalo sabse bada number humeesha top pr rhega

void explainPq() { 
  priority_queue<int>pq;
pq.push(5); // {5}
pq.push(2); // (5, 2)
pq.push(8); // (8, 5, 2}
pq.emplace(10); // (10, 8, 5, 2)

cout << pq.top(); // prints 10
pq.pop(); // {8, 5, 2}

cout <<<< pq.top(); // prints 8
// size swap empty function same as others

// Minimum Неар- is like sabse bada sabse niche ulta krdo
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(5); // (5)
pq.push(2); // {2, 5}
pq.push(8); // {2, 5, 8}
pq.emplace(10); // (2, 5, 8, 10)
cout << pq.top(); // prints 2
}
//push and pop - log n
//top - o(1)


//set -store unique elements in sorted way. 

void explainset(){

set<int> st1;
st.insert(1);
st.insert(2);
st.insert(3);
st.insert(4);//1,2,3,4
st.insert(4);//1,2,3,4 only unqiue element


//1,2,3,4,5
auto it=st.find(3); 

//1,2,3,4,5
auto it-st.find(6);//will written after end

st.erase(5)//1,2,3,4

//unique hai toh element ka occurenece check krnahai hai toh count use krenge like it will give 0 and 1 mns true or false

int cnt = st.count(1)//true or false

//erasing

//1,2,3,4,5

auto it1 = st.find(2);
auto it2 = st.find(4);
st.erase(it1,it2)//after erase it will delete btw 2 and 4 also 2 not 4 like start but not end . 1,4,5


}

//Unordered set - Unique element but not sorted . O(1)
//everything as set

//MAPS





























int main(){
print(); //normal call kr diya print ko

int value =add(4,4); // yaha toh upar parameter ki value pass kara diye
cout<<value; //and print kra diye



return 0;

}
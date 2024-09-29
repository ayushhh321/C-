//plaindorme and reversed check 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string ayush;
    cin>>ayush;
    string dup=ayush;
    string reversed;
    for(int i=ayush.size()-1;i<ayush.size();--i){
        reversed=ayush[i];
    };
    if(ayush==string(dup.rbegin(),dup.rend())){
        cout<<"Palindrome";
    } else {
        cout<<"Not Palindrome";
    };
    

    return 0;
}
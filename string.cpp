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
// number of vowels and consonants and white spaces
//in string white spaces are aslo trated as index
//Yes, in a string, white spaces are also treated as characters and occupy an index position like any other character.

// For example, in the string "Hello World", the white space between "Hello" and "World" is stored at index 5. The string can be visualized like this:

// Index	0	1	2	3	4	5	6	7	8	9	10
// Char	H	e	l	l	o	' '	W	o	r	l	d
// In this case, ' ' (the white space) is at index 5.

#include <bits/stdc++.h>
using namespace std;
int main() {
   string str;
   getline(cin,str);
int vowels=0 ;
int consonants=0 ;
int white_spaces=0;
   for(int i=0;i<str.size();i++){
       str[i]==tolower(str[i]);
   }
   
   for(int i=0 ; i<str.size();i++){
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
           vowels++;
       }
       else if(str[i]==' '){
           white_spaces++;
       } else if(str[i]>='a' && str[i]<='z'){
           consonants++ ;
       }
   };
   cout<<"Vowels are"<<vowels<<endl;
   cout<<"Consonstamts are"<<consonants<<endl;
   cout<<"white spaces"<<white_spaces<<endl;
    

    return 0;
}
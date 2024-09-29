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

//finding ASCII values

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   char input;
   cin>>input;
   
   int sum;
   sum=int(input);//direct funtion
   cout<<sum;
    return 0;
}

//removing all the vowels

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   string str;
   getline(cin,str);
   
   for(int i=0 ; i<str.size();i++){
       str[i]=tolower(str[i]);
   }
   vector<char> result;
   for(char ch: str){
       if(ch !='a' && ch !='e' && ch !='i' && ch !='o' && ch !='u'){
           result.push_back(ch);
       }
   }
   for(char ch: result){
       cout<<ch;
   }
   return 0;
   
}

//removing white spaces

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
 string str;
 getline(cin,str);
 vector<char> result;
 for(char ch: str){
     if(ch !=' '){
         result.push_back(ch);
     }
 }
 for(char ch: result){
     cout<<ch;
 }
   return 0;
   
}
//removing speacial char and numbers from string
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    vector<char> result;  // Using vector to store characters
    for (char ch : str) {
        if (isalpha(ch)) {
            result.push_back(ch);  // Add only alphabetic characters
        }
    }

    // Output the result from vector
    for (char ch : result) {
        cout << ch;
    }
    cout << endl;  // To add a newline after output

    return 0;
}
//reverse an string

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    
    for(int i=str.size()-1;i>=0;--i){
        cout<<str[i];
    }

    return 0;
}

//reversing word from the string 

#include<bits/stdc++.h>
using namespace std;
string result(string s)
{
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    //Iterate the string and keep on adding to form a word
    //If empty space is encountered then add the current word to the result
    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
}
int main()
{
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<result(st);
    return 0;
}

// Let's break down how the code you provided processes the string step-by-step, specifically focusing on the example string "here is me".

// Initial Setup
// String: s = "here is me"
// Variables:
// left = 0
// right = s.length() - 1 = 11 (the last index of the string)
// temp = "" (to store the current word)
// ans = "" (to store the final reversed string)
// Iterating Through the String
// The loop runs as long as left <= right. The character at index left is checked at each iteration.

// First Iteration (left = 0)
// Character: s[0] is 'h'.
// Since 'h' is not a space, it gets added to temp.
// temp = "h"
// Increment left: left becomes 1.
// Second Iteration (left = 1)
// Character: s[1] is 'e'.
// 'e' is added to temp.
// temp = "he"
// Increment left: left becomes 2.
// Third Iteration (left = 2)
// Character: s[2] is 'r'.
// 'r' is added to temp.
// temp = "her"
// Increment left: left becomes 3.
// Fourth Iteration (left = 3)
// Character: s[3] is 'e'.
// 'e' is added to temp.
// temp = "here"
// Increment left: left becomes 4.
// Fifth Iteration (left = 4)
// Character: s[4] is a space ' '.
// Since ch is a space, the current word stored in temp is added to ans:
// Since ans is empty, ans = "here"
// temp is reset to an empty string:
// temp = ""
// Increment left: left becomes 5.
// Continuing with the Next Words
// Sixth Iteration (left = 5)
// Character: s[5] is 'i'.
// 'i' is added to temp.
// temp = "i"
// Increment left: left becomes 6.
// Seventh Iteration (left = 6)
// Character: s[6] is 's'.
// 's' is added to temp.
// temp = "is"
// Increment left: left becomes 7.
// Eighth Iteration (left = 7)
// Character: s[7] is a space ' '.
// Since ch is a space, the current word stored in temp is added to ans:
// ans = "is here"
// temp is reset to an empty string:
// temp = ""
// Increment left: left becomes 8.
// Ninth Iteration (left = 8)
// Character: s[8] is 'm'.
// 'm' is added to temp.
// temp = "m"
// Increment left: left becomes 9.
// Tenth Iteration (left = 9)
// Character: s[9] is 'e'.
// 'e' is added to temp.
// temp = "me"
// Increment left: left becomes 10.
// Last Step
// Eleventh Iteration (left = 10)
// Character: s[10] is out of bounds for the current string length (left will increment until it is greater than right).
// The loop condition fails (left <= right becomes false) and the loop exits.
// Final Addition
// After exiting the loop, we check if temp is not empty. Here, temp = "me":

// Since ans is not empty, it becomes:
// ans = "me is here"
// Final Output
// Thus, the final reversed string is ans = "me is here".

// Summary
// The while loop iterates through the string character by character.
// When a space is encountered, it indicates the end of a word. The current word (temp) is added to the result (ans).
// The process continues until all characters are processed.
// The left index moves through the string to the end, and the final string is bu



// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     // cout<<"enter the value of n"<<endl;

// //     cin >> n;
// //     {
// //         int sum = 0;
// //         for (int i = 1; i <= n; i++)
// //         {
// //             sum = sum + i;
// //             return sum;
// //         }
// //     }
// // }




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int sum = 0;

//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         sum = sum + i;
//     }

//     cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

//     return 0;
// }



class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 ; string str2;

        for(int i=0 ; i<word1.size(); i++)
        {
            str1=word1[i];
        }

        for(int j=0 ; j<word2.size(); j++)
        {
            str2=word2[j];
        }

        if(str1==str2){
            return true; 
        }







        else
           return false;
    }
};





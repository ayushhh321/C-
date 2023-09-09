// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     // cout<<"enter the value of n"<<endl;

//     cin >> n;
//     {
//         int sum = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             sum = sum + i;
//             return sum;
//         }
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}





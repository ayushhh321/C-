// // // #include<iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     cout<<"enter the number"<<endl;
// // //     int n;
// // //     cin>>n;

// // //   //1st way to create an array
// // //   int marks[]={};

// // //   cout<<marks[10]<<endl;
// // //   cout<<marks[20]<<endl;
// // //   cout<<marks[30]<<endl;
// // //   cout<<marks[40]<<endl;
// // //   cout<<marks[50]<<endl;

// // //   return 0;
// // // }

// // import java.util.Scanner;

// // public class ArraySumAndAverage {
// //     public static void main(String[] args) {
// //         Scanner scanner = new Scanner(System.in);

// //         // Take input from the user to determine the size of the array
// //         System.out.print("Enter the size of the array: ");
// //         int size = scanner.nextInt();

// //         // Create an array with the specified size
// //         double[] numbers = new double[size];

// //         // Take input from the user and add it to the array
// //         for (int i = 0; i < size; i++) {
// //             System.out.print("Enter a number: ");
// //             numbers[i] = scanner.nextDouble();
// //         }

// //         // Calculate the sum of all the numbers
// //         double sum = 0;
// //         for (double number : numbers) {
// //             sum += number;
// //         }

// //         // Calculate the average of all the numbers
// //         double average = sum / size;

// //         // Display the sum and average
// //         System.out.println("Sum of numbers: " + sum);
// //         System.out.println("Average of numbers: " + average);

// //         scanner.close();
// //     }
// // }

// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     double* numbers = new double[size];

//     for (int i = 0; i < size; i++) {
//         cout << "Enter a number: ";
//         cin >> numbers[i];
//     }

//     double sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += numbers[i];
//     }

//     double average = sum / size;

//     cout << "Sum of numbers: " << sum << endl;
//     cout << "Average of numbers: " << average << endl;

//     delete[] numbers;

//     return 0;
// }

// //to collect these agrabge blocks from the main memory and  deposit them back into free pool , java internally used software
// // build unto jvm named garbage collection .

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int number[] = {36, 49, 9, 7, 22, 26, 257};

    // for (int number = 0 ; i < number ; i++)
    // {
        
    // }

    
    return 0;
}

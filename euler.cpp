// // #include <iostream>

// // int euler_totient(int n) {
// //     int phi = n;
// //     int p = 2;

// //     while (p * p <= n) {
// //         if (n % p == 0) {
// //             while (n % p == 0) {
// //                 n /= p;
// //             }
// //             phi -= phi / p;
// //         }
// //         p++;
// //     }

// //     if (n > 1) {
// //         phi -= phi / n;
// //     }

// //     return phi;
// // }

// // int main() {
// //     int n = n;
    
// //     int result = euler_totient(n);
// //     std::cout << "The value of Euler's totient function for " << n << " is: " << result << std::endl;
// //     return 0;
// // }


// import java.io.*;

// class Main {
//     static int gcd(int a, int b) {
//         if (a == 0)
//             return b;
//         return gcd(b % a, a);
//     }

//     static int phi(int n) {
//         int result = 1;
//         for (int i = 2; i < n; i++) {
//             if (gcd(i, n) == 1)
//                 result++;
//         }
//         return result;
//     }

//     public static void main(String[] args) {
//         int n = 5;
//         System.out.println(phi(n));
//     }
// }


// import java.io.*;

// class Main {
//     static int phi(int n)
//     {
//         float result=n;
//         for(int p=2;p*p<=n;++p){
//             if(n%p=0){

//             }
//         }
//     }


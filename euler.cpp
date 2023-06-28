//euler phi concept

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


// strobogrammatic numbers
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class StrobogrammaticNumber {
    public List<String> findStrobogrammatic(int n) {
        return generateStrobogrammatic(n, n);
    }

    private List<String> generateStrobogrammatic(int n, int length) {
        if (n == 0) {
            return new ArrayList<>(Arrays.asList(""));
        }
        if (n == 1) {
            return new ArrayList<>(Arrays.asList("0", "1", "8"));
        }

        List<String> result = new ArrayList<>();
        List<String> subResult = generateStrobogrammatic(n - 2, length);

        for (String sub : subResult) {
            if (n != length) {
                result.add("0" + sub + "0");
            }
            result.add("1" + sub + "1");
            result.add("6" + sub + "9");
            result.add("8" + sub + "8");
            result.add("9" + sub + "6");
        }

        return result;
    }

    public static void main(String[] args) {
        int n = 3;
        StrobogrammaticNumber strobogrammaticNumber = new StrobogrammaticNumber();
        List<String> result = strobogrammaticNumber.findStrobogrammatic(n);
        System.out.println(result);
    }
}


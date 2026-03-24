// 🔹 Q10. Strong Prime

// 👉 Logic:

// A prime is strong if it is greater than the average of the previous and next prime numbers.

// Steps:

// Check if number is prime.

// Find previous prime.

// Find next prime.

// Compare with average.

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     if (!isPrime(n)) {
//         cout << n << " is NOT prime, so cannot be a Strong Prime." << endl;
//         return 0;
//     }

//     // Find previous prime
//     int prev = n - 1;
//     while (prev > 1 && !isPrime(prev)) prev--;

//     // Find next prime
//     int next = n + 1;
//     while (!isPrime(next)) next++;

//     double avg = (prev + next) / 2.0;

//     if (n > avg) cout << n << " is a Strong Prime" << endl;
//     else cout << n << " is NOT a Strong Prime" << endl;

//     return 0;
// }


// ✅ Example: Input 17 → previous=13, next=19 → avg=16 → 17 > 16 → Strong Prime
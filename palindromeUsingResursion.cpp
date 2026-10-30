#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    n=12321;

    if (n == reverseNumber(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
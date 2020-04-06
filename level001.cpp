#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    float sum1, sum2;
    cout << "THIS IS NOT A CALCULATOR\n\n\n";
    cout << "first summand: ";
    cin >> sum1;
    cout << "second summand: ";
    cin >> sum2;
    printf("\n%f + %f = %f\n", sum1, sum2, sum1 + sum2);
    return 0;
}
/**
 * Goals:
 * - make it do all main 4 operations
 */

#include <iostream>
#include <utility>
#include <stdio.h>
#include <vector>

using namespace std;

enum Operation {
    addition,
    subtraction,
    multiplication,
    division
};

class Computation{
    Operation operation;
    vector<float> numbers;
    
    public:
        Computation(Operation _operation, vector<float> _numbers) {
            operation = _operation;
            numbers = _numbers;
        }
        float do_it();
        void print_it();
};

float Computation::do_it() {
    float solution = 3;
    switch (operation)
    {
        case addition : solution = numbers[0] + numbers[1]; break;
        case subtraction : solution = numbers[0] - numbers[1]; break;
        case multiplication : solution = numbers[0] * numbers[1]; break;
        case division : solution = numbers[0] / numbers[1]; break;
    }
    return solution;
}

void Computation::print_it() {
    printf("solution: %f\n", do_it());
}

Computation take_input() {
    float num1, num2;
    char input_operation;
    Operation operation;

    cout << "first number: ";
    cin >> num1;
    cout << "operation: ";
    cin >> input_operation;
    cout << "second number: ";
    cin >> num2;

    switch(input_operation) {
        case '+' : operation = addition; break;
        case '-' : operation = subtraction; break;
        case '*' : operation = multiplication; break;
        case '/' : operation = division; break;
    }

    vector<float> numbers (num1, num2);

    return Computation (operation, numbers);
}

int main() {
    cout << "THIS IS NOT A CALCULATOR\n\n\n";
    Computation computation = take_input();
    computation.print_it();
}
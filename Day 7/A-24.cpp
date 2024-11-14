//
// Created by User on 14-11-2024.
//
#include <iostream>
using namespace std;

float divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero error!");
    }
    return static_cast<float>(numerator) / denominator;
}

int main() {
    int num, denom;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> denom;

    try {
        float result = divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program ended successfully." << endl;
    return 0;
}

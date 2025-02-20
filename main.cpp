#include <iostream>
#include <cmath>
using namespace std;

int task3();
int task5();

int task3(){
    double num1;
    double num2;

    cout << "Provide a number: ";
    cin >> num1;
    cout << "Provide a number: ";
    cin >> num2;

    double result = pow(num1, num2);
    cout << "The result of " << num1 << " raised to the power of " << num2 << " is : " << result;

    return 0;
}




int main(){
    task3();
    return 0;
}
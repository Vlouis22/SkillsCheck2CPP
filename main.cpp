#include <iostream>
#include <cmath>
#include <random>
using namespace std;

int task3();
int task5();
int task6();
int task7();
int task8();
int task11();
void divider();
int task12();
void incrementByTwo(int &num);
int task13();
int Division(int num1, int num2);
double Division(double num1, double num2);
int task15();
int recursiveFactorial(int n);
int task16();

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

int task5(){
    double num1;
    cout << "Provide a number: ";
    cin >> num1;
    double result = sqrt(num1);
    cout << "The square root of " << num1 << " is " << result;
    return 0;
}

int task6(){
    int num1;
    int num2;
    cout << "Provide a number: ";
    cin >> num1;
    cout << "Provide a number that is bigger than " << num1 << ": ";
    cin >> num2;

    if(num2 < num1){
        cout << "the second number must be larger than the first number!";
        return -1;
    }

    for(int i = num1; i <= num2; i++){
        if(i % 3 == 0){
            cout << i << endl;
        }
    }
    return 0;
}

int task7(){
    bool terminateProgram = false;
    int num;
    srand(time(NULL));
    do
    {   
        cout << "Type 1 to flip a coin. Type any other number to terminate program: ";
        cin >> num;
        if(num == 1){
            int randomNumber = rand() % 2;
            if (randomNumber == 1){
                cout << "Landed on heads." << endl;
            } else {
                cout << "Landed on tails." << endl;
            }
        }
        else{
            terminateProgram = true;
        }
    } while (!terminateProgram);
    
    return 0;
}

int task8(){
    bool terminateProgram = false;
    int num;
    srand(time(NULL));

    do
    {   
        cout << "Type 1 to throw the die. Type any other number to terminate the program: ";
        cin >> num;
        if(num == 1){
            int randomNumber = (rand() % 6)+1;
            cout << "Number of dots: " << randomNumber << endl;
        }
        else{
            terminateProgram = true;
        }
    } while (!terminateProgram);
    
    return 0;
}

void divider(){
    for(int i = 0; i < 33; i++){
        cout << "-";
    }
}

int task11(){
    divider();
    return 0;
}

double multiply(double num1, double num2){
    return num1 * num2;
}

int task12(){
    double num1;
    double num2;

    cout << "Provide a number: ";
    cin >> num1;
    cout << "Provide a number: ";
    cin >> num2;

    cout << num1 << " x " << num2 << " = " << multiply(num1, num2) << endl;
    return 0;
}

void incrementByTwo(int &num){
    num += 2; 
}

int task13(){
    int num1;
    cout << "Provide a number: ";
    cin >> num1;

    incrementByTwo(num1);

    cout << "new value is: " << num1 << endl;

    return 0;
}

int Division(int num1, int num2){
    return num1 / num2;
}

double Division(double num1, double num2){
    return num1 / num2;
}

int task15(){
    int typeOfNum = 1;
    cout << "type 1 for integer division, type anything else for decimal division.";
    cin >> typeOfNum;
    if (typeOfNum == 1){
        int num1;
        int num2;
        cout << "Enter dividend: ";
        cin >> num1;
        cout << "Enter divisor: ";
        cin >> num2;
        int result = Division(num1, num2);
        cout << "The result is: " << result << endl;
    } else {
        double num1;
        double num2;
        cout << "Enter dividend: ";
        cin >> num1;
        cout << "Enter divisor: ";
        cin >> num2;
        double result = Division(num1, num2);
        cout << "The result is: " << result << endl;
    }
    return 0;
}

int recursiveFactorial(int n){
    if (n <= 1){
        return 1;
    } return n * recursiveFactorial(n-1);
}

int task16(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = recursiveFactorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;
    return 0;
}

int main(){
    // task3();
    // task5();
    // task6();
    // task7();
    // task8();
    // task11();
    // task12();
    // task13();
    // task15();
    task16();
    return 0;
}
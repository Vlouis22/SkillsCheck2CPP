#include <iostream>
#include <cmath>
#include <random>
using namespace std;

int task3();
int task5();
int task6();
int task7();

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

    do
    {   
        cout << "Type 1 to flip a coin. Type any other number to terminate program.";
        cin >> num;
        if(num == 1){
            srand(time(NULL));
            int randumNumber = rand() % 2;
            if (randumNumber == 1){
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



int main(){
    // task3();
    // task5();
    // task6();
    task7();
    return 0;
}
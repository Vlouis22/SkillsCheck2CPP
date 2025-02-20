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
void task11Helper();

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

void task11Helper(){
    for(int i = 0; i < 33; i++){
        cout << "-";
    }
}

int task11(){
    task11Helper();
    return 0;
}


int main(){
    // task3();
    // task5();
    // task6();
    // task7();
    // task8();
    task11();
    return 0;
}
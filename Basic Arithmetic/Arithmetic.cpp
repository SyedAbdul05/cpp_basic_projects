
#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    int add, sub, mul;
    int divisionResult;
    int remainderValue;

    cout << "Enter Two Numbers\n";
    cout << "\nEnter First 1st Number : ";
    cin >> firstNumber;
    cout << "\nEnter Second Number : ";
    cin >> secondNumber;

    //Main Calculations
    add = firstNumber + secondNumber;       //Addition
    sub = firstNumber - secondNumber;    //Subtraction
    mul = firstNumber * secondNumber; //Multiplication
    divisionResult = firstNumber / secondNumber;       //Division (Without Remainder)
    remainderValue = firstNumber % secondNumber;       //Remainder value
   
    cout << "\n\nAddition Result = " << add;
    cout << "\nSubtraction Result = " << sub;
    cout << "\nMultiplication Result = " << mul;
    cout << "\nDivision Result = "  << divisionResult;
    cout << "\nRemainder value = " << remainderValue;
    return 0;

}

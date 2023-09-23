/**
 ******************************************************************************
 * @file           : Task_2.cpp
 * @author         : Mennatallah Karam
 * @brief          : A simple calculator
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
#include <iostream>
/* ********************** Includes Section End   ********************** */

using namespace std;

int main()
{
    float NumberOne,NumberTwo;
    char Operation;
    cout<< "Please enter the first number : ";
    cin >> NumberOne;
     cout<< "Please enter the operation you want : ";
    cin >> Operation;
    cout<< "Please enter the second number : ";
    cin >> NumberTwo;
    switch(Operation)
    {
    case '+':
        cout << "Result = "<< NumberOne+NumberTwo;
        break;

        case '-':
        cout << "Result = "<< NumberOne-NumberTwo;
        break;
        case '*':
        cout << "Result = "<< NumberOne*NumberTwo;
        break;
        case '/':
            if (NumberTwo != 0)
        cout << "Result = "<< NumberOne/NumberTwo;
        else
            cout << "Error!!";
        break;

        default :
            cout << "Invalid operation !!";
            break;
    }
    return 0;
}



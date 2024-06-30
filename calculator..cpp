#include <iostream>
using namespace std;

// Function to add two numbers
int addition(int a, int b) {
    return a + b;
}

// Function to subtract one number from another
int subtraction(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiplication(int a, int b) {
    return a * b;
}

// Function to divide one number by another, with a check for division by zero
int division(int a, int b) {
    if (b == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    while (true) {
        // Displaying the menu for the user to choose an operation
        cout << "Select the function you want to perform" << endl;
        cout << "1 - Addition" << endl;
        cout << "2 - Subtraction" << endl;
        cout << "3 - Multiplication" << endl;
        cout << "4 - Division" << endl;
        cout << "5 - Exit" << endl;
        
        int choice;
        cout << "Enter your choice among these (1/2/3/4/5): ";
        cin >> choice;

        // Exit the program if the user chooses 5
        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        // Check for invalid choices
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please select a valid operation." << endl;
            continue;
        }

        // Ask the user for two numbers
        int num1, num2;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Perform the chosen operation and display the result
        switch (choice) {
            case 1:
                cout << "The result of addition is " << addition(num1, num2) << endl;
                break;
            case 2:
                cout << "The result of subtraction is " << subtraction(num1, num2) << endl;
                break;
            case 3:
                cout << "The result of multiplication is " << multiplication(num1, num2) << endl;
                break;
            case 4:
                cout << "The result of division is " << division(num1, num2) << endl;
                break;
        }
    }
    
    return 0;
}


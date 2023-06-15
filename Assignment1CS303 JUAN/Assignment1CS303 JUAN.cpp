// Assignment1 CS 303 JUAN GAMEZ
//6/12/2023
#include "Functions.hpp"

int main() {
    char input;
    int in, in2;
    fstream txt;
    txt.open("Array.txt");

    int Array[150] = {
      0
    };
    int arraySize = sizeof(Array) / sizeof(Array[0]);

    for (auto j = 0; j < arraySize; j++){
        txt >> Array[j];
       
    }
    cout << "Current Array:\n";
    printArray(Array, arraySize);
    cout << "Would you like to search this array for a number? (Y)(N)\n";
    cin >> input;
    if (input == 'Y') {
        cout << "What Number?\n";
        cin >> in;
        findIndex(Array, in, arraySize);
    }

    cout << "Would You like to modify a value?\n";

    while (true) {
        try {
            cin >> input;
            if (toupper(input) == 'Y') {
                cout << "Which index?\n";
                cin >> in;
                cout << "Enter New Value\n";
                cin >> in2;
                cout << "Old Array: ";
                printArray(Array, arraySize);
                cout << endl;
                modifyIndex(Array[in], in2, arraySize);
                cout << "New Array ";
                printArray(Array, arraySize);
                cout << endl;
                break;
            }
            else
                if (toupper(input) != 'N' || toupper(input) == 'Y') {
                    throw (input);
                }
                else
                    break;

        }
        catch (char input) {
            cout << "Invalid Input-Choose Y/N\n";
        }
    }

    while (true) {
        try {
            cout << "Would You like to add a value?\n";
            cin >> input;
            if (toupper(input) == 'Y') {
                cout << "Enter New Value\n";
                cin >> in2; \
                    addToArray(Array, in2, arraySize);
                cout << "New Array ";
                printArray(Array, arraySize);

                cout << endl;
                break;
            }
            else
                if (toupper(input) != 'N' || toupper(input) == 'Y') {
                    throw (input);
                }
                else
                    break;
        }
        catch (char input) {
            cout << "Invalid Input-Choose Y/N\n";
        }

    }

    cout << "Would You like to zero an index?\n";
    cin >> input;
    if (input == 'Y') {
        cout << "Enter index\n";
        cin >> in2;
        zeroIndex(Array, in2, arraySize);
        cout << "New Array ";
        printArray(Array, arraySize);
        cout << endl;
    }

}
#include "Functions.hpp"

void modifyIndex(int& old, int newnum, int size) {
    cout << "Changing " << old << " to " << newnum << endl;
    old = newnum;
}
void printArray(int array[], int size) {
    for (auto i = 0; i < size; i++) {
        if (array[i] == 0)
            continue;
        cout << array[i] << " ";
    }
    cout << endl;
}
void findIndex(int array[], int numFound, int size) {
    int notFound = 0;
    for (auto i = 0; i < size; i++) {
        if (array[i] == numFound) {
            cout << numFound << " found at index " << i << endl;
        }
        else notFound++;
    }
    if (notFound == sizeof(array) + 2) {
        cout << "Number Not Found\n";
    }
}
void addToArray(int array[], int num, int size) {
    for (auto i = 0; i <= size; i++) {
        if (array[i] == 0) {
            array[i] = num;
            break;
        }
    }
}
void zeroIndex(int array[], int index, int size) {
    array[index] = 0;
    int temp;
    for (auto i = 0; i < size; i++) {
        if (array[index + 1] == 0) {
            break;
        }
        temp = array[index + 1];
        array[index + 1] = array[index];
        array[index] = temp;

    }
}
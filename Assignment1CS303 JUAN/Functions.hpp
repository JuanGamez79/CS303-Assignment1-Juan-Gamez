#pragma once

#include <iostream>

#include <fstream>

#include <string>

#include<stdexcept>

using namespace std;

void modifyIndex(int& old, int newnum, int size);
void printArray(int array[], int size);
void findIndex(int array[], int numFound, int size);
void addToArray(int array[], int num, int size);
void zeroIndex(int array[], int index, int size);
// Dane Thompson
// CIS 1202 808
// Assignment 15a - Exceptions
// checking letters and throwing errors when something is not right

#include <iostream>
using namespace std;

// my two exception classes for the assignment
class invalidCharacterException {};
class invalidRangeException {};

char character(char start, int offset) {
    char target;

    // first make sure the starting character is actually a letter
    if (!((start >= 'A' && start <= 'Z') || (start >= 'a' && start <= 'z'))) {
        throw invalidCharacterException();
    }

    target = start + offset;

    // if it started uppercase, it has to stay uppercase
    if (start >= 'A' && start <= 'Z') {
        if (target < 'A' || target > 'Z') {
            throw invalidRangeException();
        }
    }

    // if it started lowercase, it has to stay lowercase
    if (start >= 'a' && start <= 'z') {
        if (target < 'a' || target > 'z') {
            throw invalidRangeException();
        }
    }

    return target;
}

int main() {
    cout << "Exceptions Assignment" << endl << endl;

    try {
        cout << "character('a', 1) returns ";
        cout << character('a', 1) << endl;
    }
    catch (invalidCharacterException) {
        cout << "invalid character exception" << endl;
    }
    catch (invalidRangeException) {
        cout << "invalid range exception" << endl;
    }

    try {
        cout << "character('a', -1) returns ";
        cout << character('a', -1) << endl;
    }
    catch (invalidCharacterException) {
        cout << "invalid character exception" << endl;
    }
    catch (invalidRangeException) {
        cout << "invalid range exception" << endl;
    }

    try {
        cout << "character('Z', -1) returns ";
        cout << character('Z', -1) << endl;
    }
    catch (invalidCharacterException) {
        cout << "invalid character exception" << endl;
    }
    catch (invalidRangeException) {
        cout << "invalid range exception" << endl;
    }

    try {
        cout << "character('?', 5) returns ";
        cout << character('?', 5) << endl;
    }
    catch (invalidCharacterException) {
        cout << "invalid character exception" << endl;
    }
    catch (invalidRangeException) {
        cout << "invalid range exception" << endl;
    }

    try {
        cout << "character('A', 32) returns ";
        cout << character('A', 32) << endl;
    }
    catch (invalidCharacterException) {
        cout << "invalid character exception" << endl;
    }
    catch (invalidRangeException) {
        cout << "invalid range exception" << endl;
    }

    return 0;
}

#ifndef Q1_HPP
#define Q1_HPP

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}

void getTwoValues(int& begin, int& end) {
    do {
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int start) {
    int num = start + 1;
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int getPrevPrime(int end) {
    int num = end - 1;
    while (num > 1 && !isPrime(num)) {
        num--;
    }
    return num;
}

#endif
/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 26, 2017, 8:45 PM
 * Purpose: Practice Project 1
 */

#include <iostream>
using namespace std;

int main()
{
    int number_1, number_2, sum, product;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter your first integer:\n";
    
    cin >> number_1;
    
    cout << "Enter your second integer:\n";
    cin >> number_2;
    
    sum = number_1 + number_2;
    product = number_1 * number_2;
    cout << "If you have ";
    cout << number_1;
    cout << " and ";
    cout << number_2;
    cout << " their sum is: \n";
    cout << sum;
    cout << " And their product is: \n";
    cout << product;
    
    
    
    
    
    
    
    return 0;
}


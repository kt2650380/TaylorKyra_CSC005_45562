/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 23, 2017, 12:20 PM
 * Purpose: Practice Program 1 (Display 1.8)
 */

#include <iostream>
using namespace std;

int main()
{
    int width, length, total_area;
    
    cout << "Hello\n";
    cout << "Let's measure out your fence area\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the length measurement of your fence:\n";
    
    cin >> length;
    
    cout << "Enter the the width measurement of your fence:\n";
    cin >> width;
    total_area = width * length;
    cout << "If you have a: ";
    cout << width;
    cout << " foot width measurement";
    cout << " and a ";
    cout << length;
    cout << " foot length measurement, then\n";
    cout << "you have a ";
    cout << total_area;
    cout << " foot squared total area for the fence.\n";
    cout << "Good-bye\n";
    
    
    
    
    
    return 0;
}


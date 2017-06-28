/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 26, 2017, 8:45 PM
 * Purpose: Practice Project 3
 */

#include <iostream>
using namespace std;

int main()
{
#define quarters 25
#define dimes 10
#define nickels 5
    
    
    
   
            
    int QUARTER, DIME, NICKEL, total_fee;
            
            
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    
    cin >> QUARTER;
    
    cout << "Enter the number of dimes:\n";
    cin >> DIME;
    
    cout << "Enter the number of nickels: \n";
    cin >> NICKEL;
    
    total_fee= (QUARTER * quarters + DIME * dimes + NICKEL * nickels)  ;        
            
    cout << "If you have ";
    cout << quarters;
    cout << " quarters \n";
    cout << dimes;
    cout << " dimes";
    cout << " and \n";
    cout << nickels; 
    cout << " nickels \n";
    cout << "Then your total change is: ";
    cout << total_fee;
    cout << " cents";
            
    
    
    
    
    
    
    
    return 0;
}


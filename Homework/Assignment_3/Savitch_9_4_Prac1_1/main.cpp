/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 7- Temperature Change (Celsius to Fahrenheit)
 */

#include <iostream>
using namespace std;

double(drive_too)(short liters_par, short miles_par);

int main()
{
    long miles, liters, miles_per_gal, gal_total ;
    const double lit_to_gal = 0.26479;
    cout << "Enter how many liters of gas are consumed by your car\n";
    cout <<"Then press return\n";
    
    cin >> liters;
     gal_total = liters * lit_to_gal;
    
    cout << "Enter the number of miles your car travels\n";
    cout << "Then press return\n";
    
    cin >> miles; 
    
    miles_per_gal = drive_too (gal_total, miles);
            
            
    
    cout << "Your car consumes " << gal_total << " gallons of gas.\n";
    cout << "And has gone " <<miles << " miles.\n";
    cout << "The number of miles per gallon is " << miles_per_gal
            <<endl;
    
                   
    return 0;
}

double(drive_too)(short liters_par, short miles_par)

{
 
    
    
    long total;
    
    
    total = liters_par / miles_par;
    
    return (total);
           
    
}
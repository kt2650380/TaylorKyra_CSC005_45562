/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 10, 2017, 3:45 PM
 * Purpose: Practice Program 1- Liters to Gallons Calulator
 */

#include <iostream>
using namespace std;

double(drive_too)(int liters, int miles);
const double lit_to_gal = 0.26479;
int main()
{
    long miles, liters;
    
    cout << "Enter how many liters of gas are consumed by your car\n";
    cout <<"Then press return\n";
    
    cin >> liters;
    
    
    cout << "Enter the number of miles your car travels\n";
    cout << "Then press return\n";
    
    cin >> miles; 
    
   
            
            
    
    cout << "Your car consumes " << liters << " liters of gas.\n";
    cout << "And has gone " <<miles << " miles.\n";
    cout << "The number of miles per gallon is " << drive_too(liters, miles)
            <<endl;
    
                   
    return 0;
}

double(drive_too)(int liters, int miles)

{
 
    double gallons;
   
    gallons = lit_to_gal*liters;
    
    
    
    return (miles / gallons);
           
    
}
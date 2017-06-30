/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 23, 2017, 12:20 PM
 * Purpose: Practice Program 2 Chapter 2
 */

#include <iostream>
using namespace std;

int main()
{
    double miles_per_hour, minutes_seconds_mile;
    
    
    cout << "We are going to calculate that pace\n";
    cout << "Enter your pace now\n";
    cout << "Then press return\n";
    cin >> miles_per_hour;
    cout << "Your treadmill is going " << miles_per_hour << " miles per hour\n";
    
   
    minutes_seconds_mile = (60 / miles_per_hour );
    
    int min= static_cast<int>(minutes_seconds_mile);
    double sec = (minutes_seconds_mile-min)*60;
    
    cout << "Your pace is " <<min<< " minutes and " << sec << "seconds\n";
    
    
    
    
    
    
   
    
    

    
    
    return 0;
}


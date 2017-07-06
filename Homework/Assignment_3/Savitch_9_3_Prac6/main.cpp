/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 6- Archimedes Principle
 */

#include <iostream>
using namespace std;


int main()
{
    int weight, buoy_for, radius; 
    
    cout<<"Enter weight of object in pounds \n";
    cin >> weight; 
    
    cout << "Enter radius of object in feet \n";
    cin >> radius; 
    
    buoy_for = 62.4*((4 *3.14 * radius * radius * radius)/3);
       
      if (buoy_for >= weight) 
              cout <<"The sphere will float in water\n";
      else cout << "The sphere will sink in water.\n";    
    
    return 0;
}


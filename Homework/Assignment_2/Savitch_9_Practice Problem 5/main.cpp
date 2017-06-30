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
    double radius, volume;
    
    const double PI = 3.1415;
    const double MUL_NUM = 4.0, MUL_DEN = 3.0;
    
    cout <<" \nEnter radius of a sphere ";
    cin >>radius;
    
    volume = (MUL_NUM/MUL_DEN)*PI *radius * radius * radius; 
    
    cout <<" The volume is " << volume << endl;
    
    
    
    
    
    
    
    
    return 0;
}


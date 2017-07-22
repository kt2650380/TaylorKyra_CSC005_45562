/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 14, 2017, 12:20 PM
 * Purpose:  Midterm Program 1- Create an X of decreasing number range
 */

#include <iostream>
#include <cmath>
using namespace std;


const float FEET = 0.3048, INCHES = 2.54;
// feet to meters conversion
//inches to centimeters conversion




float(calculate)(short feet_par);
//Precondition: Take in the values for feet and inches
//Postcondition: Calculate the feet and inch values to meters and centimeters

float(second_inch)(short inches_par);




int main()
{


    double feet, inches, meters, centimeters, total;
    
    cout<< "We are going to do some system conversions from US to SI\n";
    cout<<"We are going to need a few things first\n";
    cout<<"First enter how many feet you want converted.\n";
    cout<<"Then press return\n";
    
    
    
    cin >>feet;
    
    
    cout<<"Now enter the number of inches you would like converted.\n";
    cin>> inches;
    
    meters = calculate (feet);
    
    centimeters = second_inch (inches);
    
    total = meters + (centimeters/100.00);
    
    cout <<"Your meters to centimeters calculation is " << meters<< " meters\n"
            <<"and "<<centimeters<<" centimeters\n";

    cout<<" For a grand total of "<<total<<" meters\n";

    return 0;

}

            
void(input)(short feet, short inches)
{
    
}


float(calculate)(double feet_par)
{
    double  final_feet;

    

    final_feet = feet_par  * FEET;

    

    return (final_feet);
}

float(second_inch)(double inches_par)
{
    double final_inch; 
    
    final_inch = (inches_par * INCHES);
    
    return (final_inch);
    
}
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

void(input)(short& input_1, short& input_2);
// receives input from the keyboard and holds it for following steps


short(calculate)(short& feet, short& inches);
// takes in input, and calculates it into meters and centimeters

void(show_results)(short output_1, short output_2);
// shows results of the conversion from US to metric system


int main()


{
    short num_1, num_2;
    cin>>num_1
            >>num_2;
    
    
    input(num_1, num_2);
    calculate(num_1, num_2);
    
    show_results(num_1,num_2);
    

return 0;
}
void(input)(short& input_1, short& input_2)
{
    using namespace std; 
    
    cout << "Enter the number for feet that you wish to convert to meters\n";
    cin>> input_1;
    
    cout<< "Enter the number of inches you would like to convert to meters\n";
    cin>> input_2;
    
}

short(calculate)(short& feet, short& inches)
{
    using namespace std; 
    
    short num_1, num_2; 
    
    num_1 = feet * FEET;
    
    num_2 = inches * INCHES;

    
    return (num_1, num_2);
    
}

void(show_results)(short output_1, short output_2)
{
    cout<< "You now have"<<output_1<<"meters, and"<<output_2<<"centimeters\n";
}

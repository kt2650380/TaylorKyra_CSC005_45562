/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 23, 2017, 12:20 PM
 * Purpose: Practice Program 4 (Altitude Drop)
 */

#include <iostream>
#include <cmath>
using namespace std;


const float GRAVITY=3.2714e1f;//32.174ft/sec^2
const float CNVFTM=3.281f;//3.281ft/meter

int main(int argc, char** argv)
{
    
    float altFt,altM,time;// Altitude(ft) or (meters) and Time (secs)
    
    cout << "This problem calculates the altitude";
    cout << " drop in free fall";
    cout << " input the measured time in seconds";
    cout << " for the object to drop: ";
    cin >> time;
    
    altFt=GRAVITY*time*time/2;
    altM=altFt/CNVFTM;
    
    cout << "The distance dropped = "<<altFt<<"(ft)\n";
    cout << "The distance dropped = "<<altM<<"(m)";
    
           
            
    
    
    
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 7- Temperature Change (Celsius to Fahrenheit)
 */

#include <iostream>
using namespace std;


int main()
{
    int celsius; 
    int fahren;
    
    celsius = 100; 
    
    
    cout << "The following table displays the values of Celsius and Fahrenheit until both values are the same."<<endl;
           
    do
    {
        celsius--; 
        
        fahren = ((9*celsius/5)+32);
        
        cout <<"" <<celsius<< "\t\t"
                
        <<fahren<<endl;
        
    }while(celsius !=fahren);
    cout << "\n The temperature, below 100 which is equal in both Celsius and Fahrenheit:"<<celsius <<endl;
        
                
    
    return 0;
}


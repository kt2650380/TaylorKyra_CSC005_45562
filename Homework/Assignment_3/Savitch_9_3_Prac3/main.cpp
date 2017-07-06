/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 5- Prime Number Finder
 */

#include <iostream>
using namespace std;


int main()
{
    int num_div;
    
    cout << "All prime number between 3 and 100 will be found;"
            <<endl;
    
    for(int integer = 3; integer <= 100; integer++)
    
    {
        num_div = 0;
        
        for(int divisor = 2; divisor <= integer/2; divisor++)
        
        {
        if(integer % divisor == 0)
            
        {
            num_div++;
            
            break;
        }
        
        if(num_div == 0)
            cout <<integer<<"";
    }
        
        
    
            
    
    }
       
           
    
    return 0;
}


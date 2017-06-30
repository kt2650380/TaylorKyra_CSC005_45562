/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 29, 2017, 8:45 PM
 * Purpose: Practice Project 2
 */

#include <iostream>
using namespace std;

int main()
{
    double n, sqrt, guess, r, preGuess, diff;
    
    cout << "Enter a number:\n";
    cin >> n;
    
    guess = n/2;
    
    diff = guess;
    
    preGuess= guess;
    
    while (diff > guess*0.01){
        r=n/guess;
                
        guess = (guess+r)/2;
                
        diff = preGuess-guess;
        preGuess = guess;
                
                
                
                
             
    }
            
    
    cout << "The square root of " <<n<< " is " << guess;
    
    
    
    
    
    return 0;
}


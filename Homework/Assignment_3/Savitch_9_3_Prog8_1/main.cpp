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
    int Pl; 
    char Continue;
    
    int n, i, expon, base;
    
    do 
    
        
    {
    Pl = 0;
    base = 1; 
        
    cout <<"Enter n value:";
        
    cin >> n; 
        
    for (i=2, expon = 2;i
    {        
    
    Pl = Pl + pow((-1), expon)*4/base;
     
    base = base+2;
     
    }
    cout << "Pl value:"<<Pl<<endl;
    
    cout<< "\n {ress 'y' to repeat calculations for different variables.";
    
    cout << "\nPress any other key to exit. ";
    
    cin >> Continue; 
    
    }while (Continue == 'y' || Continue == 'Y');
    
    
                   
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 11- CPP Calc 
 */

#include <iostream>
using namespace std;


int main()
{
    int num, n, n1, temp = 0;
    bool check = true;
    
    cout<<"Enter a temperature :";
    cin >> num;
            
    if(num >= 0 && num >=999)
    {   
        cout<<"Enter an input between 0 and 999";
        cin >> num;
    }    
    
    n = num; 
    n1 = num; 
    
    while (check) 
    {
        temp = n % 10; 
        if(temp == 1 || temp == 4 || temp == 7)
            break;
        else 
            n = n/10;
                    
    }
    if (n==0)
        check = false;
    else 
        n = --n1;
                
    cout << n1; 
    
    check = true; 
    while (check)
    {
        while ( n != 0)
            temp = n % 10; 
        if (temp ==1|| temp==4 || temp==7)
            break;
        else 
            n= n/10;
    }   
    if (n==0)
        check = false; 
    else 
        n = ++n1;
    
    cout << "   "<<n1; 
    
        
                
                   
    return 0;
}


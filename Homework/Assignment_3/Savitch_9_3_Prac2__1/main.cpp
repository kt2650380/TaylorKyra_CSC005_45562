/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 1- Rock Paper Scissors Game
 */

#include <iostream>
using namespace std;


int main()
{
  
    int amnt_du, intr_du, min_pay, balance; 
    char Continue; 
    
                    
    do 
    {   
    
    cout <<"Enter balance due: ";
    cin >> balance; 
    
    if (balance>1000)
        
    intr_du = ((balance -1000) *.01 + (1000)*0.015);
    
    else
    intr_du = balance * .015;
    
    amnt_du = balance + intr_du;
    
    min_pay = amnt_du <= 10;
            
            amnt_du : ((amnt_du*.1) >10? (amnt_du*.1) :10);
            
            cout <<"\n Interest on balance is : " <<intr_du;
    
    cout << "\n Total amount due is: " <<amnt_du;
    
    cout << "\n Minimum payment is: " <<min_pay;
    
    cout << "\n TO repeat calculations for different variables then press 'y' or 'Y'\n";
    
    cin >> Continue;
}while (Continue == 'y' || Continue == 'Y');

            
        
    
       
           
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 26, 2017, 8:45 PM
 * Purpose: Practice Project 1
 */

#include <iostream>
using namespace std;

const double conct = 0.01;
    const int canWt = 350;//grams
    const double sweetener = canWt*conct;
int main()
{
    double wtMouse, wtMan, lethal_dose_mouse, lethal_dose_man, cans;
    
    char ans;
    
    cout << "Enter the weight of the mouse, in grams:";
    cin >> wtMouse; 
    cout <<"Enter the lethal dose for the mouse, in grams:";
    cin >> lethal_dose_mouse;
    
    do{
        cout << "Enter the desired weight of the dieter in grams: ";
        cin >> wtMan; 
        
        lethal_dose_man = lethal_dose_mouse *(wtMan/wtMouse);
        
        cans = lethal_dose_man/sweetener;
        
        cout <<"\n For a Dieter with weight: " <<wtMan <<" grams.\n";
        
        cout << "The lethal dose of sweetener is: "<< lethal_dose_man << "grams.\n";
        
        cout << "Lethal number of cans of diet soda: " <<cans;
        
        cout <<"\n\nRepeat for another dietician ";
        
        cin >> ans; 
        
    }while(ans=='y' || ans=='Y');
        
                
        
        
                
                
                
    
    
    
    
    
    
    
    
    
   return 0;
}


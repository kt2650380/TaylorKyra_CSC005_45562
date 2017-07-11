/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 10, 2017, 3:45 PM
 * Purpose: Practice Program 4- Gauge the rate of inflation for the next year 
 */

#include <iostream>
#include <cmath>

using namespace std;

double inflation(double pre_price, double cur_price);

int main()
{
  
    double pre_price, cur_price, rate;
    char choice;
    
    
    do
    {
        cout<< "Enter previous year price of the item\n";
        cin>> pre_price;
        
        
        cout <<"Enter present year price of the item\n";
        cin>> cur_price;
        
        
        rate = inflation(pre_price, cur_price);
        
        cout << "Rate of inflation:"<< rate*100<<"%"<<endl;
        
        cout<<"Press 'y' or 'Y' to repeat calculations for different variables";
        
        cin>>choice; 
    }
        
    while (choice == 'y' || choice == 'Y');

    
    }
    
    
double inflation(double pre_price, double cur_price)
{
    return ((cur_price - pre_price)/cur_price);
}
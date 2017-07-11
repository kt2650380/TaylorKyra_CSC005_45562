/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 10, 2017, 3:45 PM
 * Purpose: Practice Program 2- Two car input miles per gallon
 */

#include <iostream>
#include <cmath>

using namespace std;
double inflation(double pre_price, double cur_price);
double estimated (double cur_price,double rate);

int main()
{
    double pre_price,cur_price,rate,total;
    char choice; 
    
    do 
    {
        cout<<"Enter previous year price of the item:";
        cin>>pre_price;
        
        cout<<"Enter present year price of the item:";
        cin>>cur_price;
        
        rate = inflation (pre_price,cur_price);
        total = estimated(cur_price,rate);
        
        cout<<"Rate of inflation"<<rate*100<<"%"<<endl;
        cout<<"Estimated " <<total<<"\n";
        
        
        
        cout<<"Press 'y' or 'Y' to repeat calculations for different variables";
        
        cin>>choice; 
    }
        
    while (choice == 'y' || choice == 'Y');
    
    
    }
double inflation(double pre_price, double cur_price)
{
    
    return ((cur_price - pre_price)/cur_price);
    
}
double estimated (double cur_price, double rate)

{
  return (cur_price * rate) ; 
}
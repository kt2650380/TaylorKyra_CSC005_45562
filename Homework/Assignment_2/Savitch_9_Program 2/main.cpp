/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 26, 2017, 8:45 PM
 * Purpose: Project 2, find your monthly salary
 */

#include <iostream>
using namespace std;

int main()
{
    double previous_salary, due, annual_salary, monthly_salary;
    
    const double increase = .076;
    
    char choice; 
    
    do
    {
        cout<< "Enter your previous annual salary \n";
        cin >> previous_salary;
        
        due = ((previous_salary*increase)/2);
        
        cout <<"Previous Salary due is " <<due << "\n";
                
                annual_salary = (previous_salary*(1+increase));
        
        cout <<" New annual salary of employee is " <<annual_salary <<"\n";
        
        monthly_salary = (previous_salary*(1+increase/12));
        
        cout << "New monthly salary is " <<monthly_salary << "\n";
        
        cout<<"To repeat calculations for different values, then press 'y' or 'Y'.\n";
        
        cin>> choice;
    }while(choice == 'y' || choice =='Y');
    
                
                
                
                
                
                
       
        
       
    
    
    
    
    
    
    
    return 0;
}


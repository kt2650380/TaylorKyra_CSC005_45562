/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 10, 2017, 3:45 PM
 * Purpose: Practice Program 7- Gravitational Attractive Force between two bodies
 */

#include <iostream>
#include <cmath>

using namespace std;
double G = 6.6738E-8;

double Gravity (double m1, double m2, double d);

int main()
{
    double m1, m2, d, gravityF;
    char choice; 
    
    do 
    {
        cout<<"\n Enter mass of first body: ";
        cin>> m1;
        
        cout <<"\n Enter mass of second body: ";
        cin>>m2;
        
        cout<<"\n Enter distance between two bodies: ";
        cin>>d;
        
        gravityF = Gravity(m1, m2, d);
        
        cout <<"\n Gravitational force between two bodies is :  "<<gravityF;
        
        cout<<"Press 'y' or 'Y' to repeat calculations for different variables";
        
        cin>>choice; 
    }
        
    while (choice == 'y' || choice == 'Y');
    
    
    }
double Gravity(double m1, double m2, double d)
{
    
    return (G * m1 * m2)/(d * d);
    
}
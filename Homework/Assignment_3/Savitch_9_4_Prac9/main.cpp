/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 10, 2017, 3:45 PM
 * Purpose: Practice Program 9- Overloaded max function
 */

#include <iostream>
#include <cmath>

using namespace std;
double Max(double n1, double n2, double n3);
double Max(double n1, double n2);
int main()
{
    double num1, num2, num3;
    cout <<"Enter number ";
    cin>>num1;
    cout<<"Enter number ";
    cin>>num2;
    cout<<"Enter number ";
    cin>>num3;
    
    cout <<"Maximum of num1 and num3: "<<Max(num1,num3)<<endl;
    cout<<"Maximum of num2 and num3:"<<Max(num2,num3)<<endl;
    cout<<"Maximum of num1, num2, and num3:"
            <<Max(num1,num2,num3)<<endl;
}
    double Max (double n1, double n2, double n3)
    
    {
        if(n1>n2)
        {
            
            if(n1>n3)
                return n1;
            else 
                return n3;
        }
        else
        {
            if(n2>n3)
                return n2;
            else 
                return n3;
        }
    }
    double Max(double n1, double n2)
    {
        if(n1>n2)
            return n1;
        else 
            return n2;
    }
       
       
   
        
        
     

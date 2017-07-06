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
    int x; 
    int sum;
    int factor; 
    char choice;
    
    do
    {
        cout <<"Enter a value for x:";
        
        cin>> x;
        
        cout <<"\n The value of exp(" <<x<<"):"<<exp(x)<<endl;
        
        cout << "The value of e^x for n=1 to 100 using the equation:"<<endl;
        
        sum = 1;
        
        for(int n=1; n<=100: n++)
            
        {
            factor = 1; 
            
            for (int m = n; m>0;m--)
                
                factor = factor *m;
            sum = sum + pow(x,n)/factor
                    
            if(n % 10 ==1)
                
            cout << endl;
            cout <<sum<<"";
            
        }
        
        cout << "\nDo you want to calculate gain? (Y/N):";
        
        cin>> choice; 
        
        cout <<endl;
        
    }while(cjoice == 'y' || choice == 'Y');
    
        }    
        
        
    }
    
                
    
    return 0;
}


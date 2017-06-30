/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 23, 2017, 12:20 PM
 * Purpose: Practice Program 1 Chapter 2 
 */

#include <iostream>
using namespace std;

int main()
{
    
    double metric_ton, cereal_weight, final_weight, yield_cereal;
    metric_ton=35273.92;
    
            
            cout << "Enter the weight of your breakfast cereal in ounces\n";
          
            cin >> cereal_weight;
            
            final_weight = cereal_weight / metric_ton;
            
            cout << "Your cereal's weight is " << final_weight << " metric tons\n";
            
            yield_cereal = metric_ton / cereal_weight;
            
            
            cout << "You need " << yield_cereal << " boxes of this cereal to equal one metric ton";
            
                    
                    
                  
                    
          
            
            
            
            
            
            
            return 0;
    
}


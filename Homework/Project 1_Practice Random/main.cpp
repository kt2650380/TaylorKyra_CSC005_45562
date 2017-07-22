/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 23, 2017, 12:20 PM
 * Purpose:  Setup_Hmwk1
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    
    srand (time(0));
   int battleship = (rand ()%10)+1;
   int battleship_1 = (rand ()%10)+1; 
   int battleship_2 = (rand ()%10)+1; 
   
   cout << battleship<<"\n"; 
   cout << battleship_1<<"\n";
   cout << battleship_2<<"\n"; 
   cout << battleship + battleship_1 + battleship_2;
   
               
    int n = (rand() % 10);
    char c = (char)(n+65);
    cout << c << "\n";
        
    int n_1 = (rand() % 10);
    char c_1 = (char)(n_1+65);
    cout << c_1 << "\n";
    
    
   
    int n_2 = (rand() % 10);
    char c_2 = (char)(n_2+65);
    cout << c_2 << "\n";
   
    int n_3 = (rand() % 10);
    char c_3 = (char)(n_3+65);
    cout << c_3 << "\n";
        
   
   
    cout << "Opponents first placed ship is located at"<<c<<battleship<<"\n";
   
   return 0;
}


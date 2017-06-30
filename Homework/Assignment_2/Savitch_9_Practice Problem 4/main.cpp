/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 26, 2017, 8:45 PM
 * Purpose: Practice Project 1
 */

#include <iostream>
using namespace std;

int main()
{
    string instructor, name, food, adjective, color, animal;
    double number;
    
    cout << "Enter your instructor name\n";
    cin >> instructor; 
    
    cout << "Enter your name\n";
    cin >> name; 
    
    cout << "Enter a food\n";
    cin >> food;
    
    cout << "Enter a number between 100 and 120\n";
    cin >> number;
    
    cout << "Enter an adjective\n";
    cin >> adjective; 
    
    cout <<"Enter a color\n";
    cin >> color;
    
    cout << "Enter an animal\n";
    cin >> animal; 
    
    
    cout << "Dear Instructor "<< instructor <<", ";
    cout <<"\n\n I am sorry that I am unable to turn in my homework at this time. \n First, "
            "I ate a rotten "<< food;
    
     cout << " ,which made me turn " << color <<" and "
             "extremely ill.\n I came down with a fever of "  
                                          << number ;
     cout<<". Next, my "<< adjective << " pet " << animal ;
     cout << " must have smelled the remains of the "
            << food << " on my homework, because he ate it.";
     cout << " I am currently rewriting my homework and hope you will accept it late.";
     cout << "\n\n Sincerely, "<<"\n"<< name << endl; 
    
             
    
    
    
    
    
    
    return 0;
}


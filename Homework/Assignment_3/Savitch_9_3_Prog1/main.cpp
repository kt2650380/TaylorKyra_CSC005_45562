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
    int hours, mins, minutes; 
    char day_1, day_2, choice; 
    
    do 
    {
    cout<<"Enter the day of call\n Sunday-Su or su \n Monday-MU or mu\n Tuesday-Tu or tu \n Wednesday-We or we"<<endl;
        
    cout<< "Thursday-Th or th \n Friday-Fr or fr\n Saturday-Sa or sa"<<endl;
    cin >> day_1;
    cin >> day_2;
    cout << "Enter the time of call in 24hours format: Format(hh mm)";
            
    cin>>hours>>mins;
            
    cout <<"Enter call duration in minutes"<<endl;
    cin>> minutes; 
            
    if(((day_1 == 'S' || day_1 =='s') &&(day_2 == 'a' || day_2 == 'A')) || ((((day_1 == 'S' || day_1 =='s')
    && (day_2 == 'u' || day_2 == 'U'))))
            
   {
    cout << "Call charges are:$"<<(0.15*minutes);
    }
     
    else if ((day_1 == 'M' || day_1 == 'm') && (day_2 == 'o' || day_2 == 'O')) || ((day_1 =='t'|| day_1 == 'T')
    && (day_2 == 'u' || day_2 == 'U')) || ((day_1 == 'w' || day_1 == 'W') && (day_2 == 'e' || day_2 == 'E')||
    (day_1 == 't' || day_1 == 'T') && (day_2 =='h' || day_2 =='H')|| ((day_1 == 'F' || day_1 == 'f')&&
    (day_2 == 'r' || day_2 == 'R')))
                    
                    
    {
    if (hours >= 8 && hours <18)
    {
    cout << "Call charges are:$"<<(0.4*minutes);
    }
    else 
    {
    cout <<"\n Call charges are:$"<<(0.25*minutes);
    }
    }
    else 
    {
    cout<<"You entered wrong values";
    }
            
    cout<< "\n TO repeat calculations for different variables then press 'y' or 'Y'<<endl;"
    cin >>choice;
    }while (choice == 'y' || choice == 'Y');
            

                
                   
    return 0;
}


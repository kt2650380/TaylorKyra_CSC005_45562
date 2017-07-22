/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on June 23, 2017, 12:20 PM
 * Purpose:  Setup_Hmwk1
 */

#include <iostream>
using namespace std;
char carrier_letter1; 
int carrier_number1;
int main()
{
    
    cout << "Okay here you can place your ships for yourself\n";
      cout << "The first ship we will place is your carrier which has five pegs\n"
              <<"so type in any letter from A to J\n";
              cin >> carrier_letter1;
      cout << "Next we will have you type in any number from 1 to 10\n";
      cin >> carrier_number1;
      cout << "Your first peg of your carrier will be placed at "
              <<carrier_letter1<<carrier_number1<<"\n\n";
      
      
              
    char direction;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> direction;
    
    switch (direction)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"so let's pick the next few spots for your ship\n";
                
                
                
                 if (carrier_number1 >= 7)
                {
                    cout <<carrier_letter1<< --carrier_number1<<"\n";
                cout <<carrier_letter1<< --carrier_number1<<"\n";
                cout<<carrier_letter1<< --carrier_number1<<"\n";
                cout<<carrier_letter1<<--carrier_number1<<"\n";
                }else if (carrier_number1 <= 4)
                    {
                        cout <<carrier_letter1<< ++carrier_number1<<"\n";
                cout <<carrier_letter1<< ++carrier_number1<<"\n";
                cout<<carrier_letter1<< ++carrier_number1<<"\n";
                cout<<carrier_letter1<<++carrier_number1<<"\n";
                }else 
                    {
                        cout <<carrier_letter1<< ++carrier_number1<<"\n";
                cout <<carrier_letter1<< ++carrier_number1<<"\n";
                cout<<carrier_letter1<< ++carrier_number1<<"\n";
                cout<<carrier_letter1<<++carrier_number1<<"\n";
                }
          break;           
    }
    return 0;
}


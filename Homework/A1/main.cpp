/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 21, 2017, 12:20 PM
 * Purpose:  Project 1- Battleship Game
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void opponent (int oppnum_1, int opppnum_2, int oppnum_3, int oppnum_4, int oppnum_5);

char carrier_letter1, battleship_letter1, cruiser_letter1, submarine_letter1, destroyer_letter1;
int carrier_number1, battleship_number1, cruiser_number1, submarine_number1, destroyer_number1;
int main()
{
   
   cout << "WELCOME TO BATTLESHIP THE ULTIMATE WAR GAME \n";
   char Continue, Place; 
   
   
   
   
   cout << "If this is your first time playing battleship we can introduce "
           <<"some simple instructions to get you started.\n";
  
   
   cout << "Press Y or y for the instructions\n";
   cout << "If you would like to forego the instruction press any letter besides y\n";
   cin >> Continue;
   while (Continue == 'y' || Continue == 'Y')
   {
   cout <<"For starters this is a game of wit and skill, and also a bit of luck "
           <<"but is also extremely fun\n"
   
            << "You will be provided with 5 different ships to keep safe which include\n"
           <<"a carrier \n"
           <<"a battleship \n"
           <<"a cruiser \n"
           <<"a submarine \n"
           << "and lastly a destroyer \n"
            <<"\n\n\n"
            <<"Each ship has on it a certain amount of pegs to be attacked \n"
           <<"in order for it to be sunk, for example, \n"
           <<"the carrier must be hit 5 times, once in each of its pegs\n"
           <<"in order to be sunk\n"
            <<"\n\n\n"
            
            << "You will be asked to guess coordinates of your opponents ships\n"
            <<"if you hit one of your opponents pegs that is a sign,\n"
           <<"that you are close to sinking their ship, keep track of your hits\n"
           <<"and make sure to keep guessing in that same area until you sink that ship\n"
           <<"\n\n\n"
           
           <<"Your guesses can include any letter between A and J\n"
           <<"And any number between 1 and 10\n"
           
           <<"That's about all there is to it, so have fun and GO BATTLE\n";
   
   
   
         
   break;
   
   
   }
   
   string submarine, destroyer, battleship, carrier, cruiser; 
   
   char choice; 
   cout<<"Will their be another player or would you like to play against the computer\n";
   cout<<"If you would like to play against the computer press c or C "
           <<"else you have another friend to play against press any key besides c\n";
   cin >> choice;
   while (choice == 'C' || choice == 'c')
   {
       cout<<"Okay we will enter the computers coordinates after we input yours\n";
   break; 
   }
   
   cout <<"\n\n\n";
   cout << "Let's get started, first we will ask you to enter the position of each"
          << "of your ships, or we can place them for you\n";
   
   
   cout << "If you would like them placed for you press p or P\n";
   cout <<"If not press any letter besides P to continue\n";
   cin >> Place; 
   
   if (Place == 'p' || Place == 'P')
       // here we will have the random letter and number generator for the player 1
       // we will inform the player of where their ships are placed in a matrix
       
   {
     srand (time(0));
     {
     int battleship = (rand ()%10)+1;
   int n = (rand() % 10);
   char c = (char)(n+65);
   
   
   cout << "the peg of your carrier is located at "<<c<<battleship<<"\n";
    char carrier_ran;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> carrier_ran;
    
    switch (carrier_ran)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other four pegs will occupy spaces\n";
                
                if (battleship > 10 || battleship <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (battleship >= 7)
                {
                    cout <<c<< --battleship<<"\n";
                cout <<c<< --battleship<<"\n";
                cout<<c<< --battleship<<"\n";
                cout<<c<<--battleship<<"\n";
                }else if (battleship <= 4)
                    {
                        cout <<c<< ++battleship<<"\n";
                cout <<c<< ++battleship<<"\n";
                cout<<c<< ++battleship<<"\n";
                cout<<c<<++battleship<<"\n";
                }else 
                    {
                        cout <<c<< ++battleship<<"\n";
                cout <<c<< ++battleship<<"\n";
                cout<<c<< ++battleship<<"\n";
                cout<<c<<++battleship<<"\n";
               
                }
                break;
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other four pegs will occupy spaces\n";
            static_cast<int>(c);
            if (c > 74 || c <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (c >= 71)
            {
                cout <<--c<< battleship<<"\n";
                cout <<--c<< battleship<<"\n";
                cout<<--c<< battleship<<"\n";
                cout<<--c<< battleship<<"\n";
                
                    
            }else if (c <= 68)
            {
                cout <<++c<<battleship<<"\n";
                cout <<++c<< battleship<<"\n";
                cout<<++c<< battleship<<"\n";
                cout<<++c<< battleship<<"\n";
                
               
            }
       break;     
    }
   
   
     
     
     
    cout <<"\n\n\n";
     int battleship_1 = (rand ()%10)+1; 
        int n_1 = (rand() % 10);
        char c_1 = (char)(n_1+65);
        cout<<"The peg of your battleship is located at "<<c_1<<battleship_1<<"\n";
   char battleship_ran;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> battleship_ran;
    
    switch (battleship_ran)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other three pegs will occupy spaces\n";
                
                if (battleship_1 > 10 || battleship_1 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (battleship_1 >= 7)
                {
                    cout <<c_1<< --battleship_1<<"\n";
                cout <<c_1<< --battleship_1<<"\n";
                cout<<c_1<< --battleship_1<<"\n";
                
                }else if (battleship_1 <= 4)
                    {
                        cout <<c_1<< ++battleship_1<<"\n";
                cout <<c_1<< ++battleship_1<<"\n";
                cout<<c_1<< ++battleship_1<<"\n";
                
                }else 
                    {
                        cout <<c_1<< ++battleship_1<<"\n";
                cout <<c_1<< ++battleship_1<<"\n";
                cout<<c_1<< ++battleship_1<<"\n";
                
               
                }
                break;
       case 'v':
            cout <<"You chose to move vertically "
                    <<"the other three pegs will occupy spaces\n";
            static_cast<int>(c_1);
            if (c_1 > 74 || c_1 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (c_1 >= 71)
            {
                cout <<--c_1<< battleship_1<<"\n";
                cout <<--c_1<< battleship_1<<"\n";
                cout<<--c_1<< battleship_1<<"\n";
                
                
                    
            }else if (c_1 <= 68)
            {
                cout <<++c_1<<battleship_1<<"\n";
                cout <<++c_1<< battleship_1<<"\n";
                cout<<++c_1<< battleship_1<<"\n";
                
                
               
            }
       break;     
    }
   
    cout <<"\n\n\n";
   if (c == c_1 )
   {
       cout << "We are going to randomize again so your ships do not take up the same spaces\n";
        int battleship_1 = (rand ()%10)+1; 
        int n_1 = (rand() % 10);
        char c_1 = (char)(n_1+65);
        cout<<"The peg of your battleship is located at "<<c_1<<battleship_1<<"\n";
        cout << "the peg of your carrier is located at "<<c<<battleship<<"\n";
   }else
   {
      cout << "Continue...\n\n"; 
   }
}
   
     
     { 
     
          cout <<"\n\n\n";
         
         int battleship_2 = (rand ()%10)+1; 
   int n_2 = (rand() % 10);
   char c_2 = (char)(n_2+65);
   cout<<"The peg of your cruiser is located at "<<c_2<<battleship_2<<"\n";
   char cruiser_ran;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> cruiser_ran;
   
   switch (cruiser_ran)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other two pegs will occupy spaces\n";
                
                if (battleship_2 > 10 || battleship_2 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (battleship_2 >= 7)
                {
                    cout <<c_2<< --battleship_2<<"\n";
                cout <<c_2<< --battleship_2<<"\n";
                
                
                }else if (battleship_2 <= 4)
                    {
                        cout <<c_2<< ++battleship_2<<"\n";
                cout <<c_2<< ++battleship_2<<"\n";
                
                
                }else 
                    {
                        cout <<c_2<< ++battleship_2<<"\n";
                cout <<c_2<< ++battleship_2<<"\n";
                
                
               
                }
                break;
         case 'v':
            cout <<"You chose to move vertically "
                    <<"the other two pegs will occupy spaces\n";
            static_cast<int>(c_2);
            if (c_2 > 74 || c_2 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (c_2 >= 71)
            {
                cout <<--c_2<< battleship_2<<"\n";
                cout <<--c_2<< battleship_2<<"\n";
                
                
                    
            }else if (c_2 <= 68)
            {
                cout <<++c_2<<battleship_2<<"\n";
                cout <<++c_2<< battleship_2<<"\n";
                
                
               
            }
       break;     
    }
   
   
     cout <<"\n\n\n"; 
   
     
    int battleship_3 = (rand ()%10)+1;
   int n_3 = (rand() % 10);
   char c_3 = (char)(n_3+65);
   cout<<"The peg of your submarine is located at "<<c_3<<battleship_3<<"\n";
   char submarine_ran;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> submarine_ran;
   switch (submarine_ran)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other two pegs will occupy spaces\n";
                
                if (battleship_3 > 10 || battleship_3 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (battleship_3 >= 7)
                {
                    cout <<c_3<< --battleship_3<<"\n";
                cout <<c_3<< --battleship_3<<"\n";
                
                
                }else if (battleship_3 <= 4)
                    {
                        cout <<c_3<< ++battleship_3<<"\n";
                cout <<c_3<< ++battleship_3<<"\n";
                
                
                }else 
                    {
                        cout <<c_3<< ++battleship_3<<"\n";
                cout <<c_3<< ++battleship_3<<"\n";
                
                
               
                }
                break;
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other two pegs will occupy spaces\n";
            static_cast<int>(c_3);
            if (c_3 > 74 || c_3 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (c_3 >= 71)
            {
                cout <<--c_3<< battleship_3<<"\n";
                cout <<--c_3<< battleship_3<<"\n";
                
                
                    
            }else if (c_3 <= 68)
            {
                cout <<++c_3<<battleship_3<<"\n";
                cout <<++c_3<< battleship_3<<"\n";
                
                
               
            }
       break;     
    }
   
    cout <<"\n\n\n";
   if (c_2 == c_3 )
   {
       cout << "We are going to randomize again so your ships do not take up the same spaces\n";
        
        int battleship_2 = (rand ()%10)+1; 
   int n_2 = (rand() % 10);
   char c_2 = (char)(n_2+65);
   cout<<"The peg of your cruiser is located at "<<c_2<<battleship_2<<"\n";
   
   
     
   
     
    int battleship_3 = (rand ()%10)+1;
   int n_3 = (rand() % 10);
   char c_3 = (char)(n_3+65);
   
   cout<<"The peg of your submarine is located at "<<c_3<<battleship_3<<"\n";
   
   }else
       
   {
       cout<< "Now one more ship, almost there\n\n";
       
   }
   
      }
          
 
{
     cout <<"\n\n\n";
    int battleship_4 = (rand ()%10)+1;
   int n_4 = (rand() % 10);
   char c_4 = (char)(n_4+65);
   cout<<"The peg of your destroyer is located at "<<c_4<<battleship_4<<"\n";
   
    char destroyer_ran;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> destroyer_ran;
   switch (destroyer_ran)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other peg will occupy spaces\n";
                
                if (battleship_4 > 10 || battleship_4 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (battleship_4 >= 7)
                {
                    cout <<c_4<< --battleship_4<<"\n";
                cout <<c_4<< --battleship_4<<"\n";
                
                
                }else if (battleship_4 <= 4)
                    {
                        cout <<c_4<< ++battleship_4<<"\n";
                cout <<c_4<< ++battleship_4<<"\n";
                
                
                }else 
                    {
                        cout <<c_4<< ++battleship_4<<"\n";
                cout <<c_4<< ++battleship_4<<"\n";
                
                
               
                }
                break;
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other peg will occupy spaces\n";
            static_cast<int>(c_4);
            if (c_4 > 74 || c_4 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (c_4 >= 71)
            {
                cout <<--c_4<< battleship_4<<"\n";
                
                
                
                    
            }else if (c_4 <= 68)
            {
                cout <<++c_4<<battleship_4<<"\n";
               
                
                
               
            }
       break;     
    }
   
   
        
   
     }
      
   } else
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
                <<"the other four pegs will occupy spaces\n";
                
                if (carrier_number1 > 10 || carrier_number1 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (carrier_number1 >= 7)
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
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other four pegs will occupy spaces\n";
            static_cast<int>(carrier_letter1);
            if (carrier_letter1 > 74 || carrier_letter1 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (carrier_letter1 >= 71)
            {
                cout <<--carrier_letter1<< carrier_number1<<"\n";
                cout <<--carrier_letter1<< carrier_number1<<"\n";
                cout<<--carrier_letter1<< carrier_number1<<"\n";
                cout<<--carrier_letter1<<carrier_number1<<"\n";
                    
            }else if (carrier_letter1 <= 68)
            {
                cout <<++carrier_letter1<< carrier_number1<<"\n";
                cout <<++carrier_letter1<< carrier_number1<<"\n";
                cout<<++carrier_letter1<< carrier_number1<<"\n";
                cout<<++carrier_letter1<<carrier_number1<<"\n";
               
            }
            
    }
            
            
       cout << "Next we will place a battleship\n";
      cout << "The battleship we will place has four pegs\n"
              <<"so type in any letter from A to J\n";
              cin >> battleship_letter1;
      cout << "Next we will have you type in any number from 1 to 10\n";
      cin >> battleship_number1;
      cout << "Your first peg of your battleship will be placed at "
              <<battleship_letter1<<battleship_number1<<"\n\n";
            
            
    char direction_battleship;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> direction_battleship;
    
    switch (direction_battleship)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other three pegs will occupy spaces\n";
                
                if (battleship_number1 > 10 || battleship_number1 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (battleship_number1 >= 7)
                {
                    cout <<battleship_letter1<< --battleship_number1<<"\n";
                cout <<battleship_letter1<< --battleship_number1<<"\n";
                cout<<battleship_letter1<< --battleship_number1<<"\n";
                
                }else if (battleship_number1 <= 4)
                    {
                        cout <<battleship_letter1<< ++battleship_number1<<"\n";
                cout <<battleship_letter1<< ++battleship_number1<<"\n";
                cout<<battleship_letter1<< ++battleship_number1<<"\n";
                
                }else 
                    {
                        cout <<battleship_letter1<< ++battleship_number1<<"\n";
                cout <<battleship_letter1<< ++battleship_number1<<"\n";
                cout<<battleship_letter1<< ++battleship_number1<<"\n";
                
               
                }
                break;
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other three pegs will occupy spaces\n";
            static_cast<int>(battleship_letter1);
            if (battleship_letter1 > 74 || battleship_letter1 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (battleship_letter1 >= 71)
            {
                cout <<--battleship_letter1<< battleship_number1<<"\n";
                cout <<--battleship_letter1<< battleship_number1<<"\n";
                cout<<--battleship_letter1<< battleship_number1<<"\n";
               
                    
            }else if (battleship_letter1 <= 68)
            {
                cout <<++battleship_letter1<< battleship_number1<<"\n";
                cout <<++battleship_letter1<< battleship_number1<<"\n";
                cout<<++battleship_letter1<< battleship_number1<<"\n";
                
               
            }
            
    }
                                 
                     
                     
     cout << "Next we will place a cruiser\n";
      cout << "The cruiser we will place has three pegs\n"
              <<"so type in any letter from A to J\n";
              cin >> cruiser_letter1;
      cout << "Next we will have you type in any number from 1 to 10\n";
      cin >> cruiser_number1;
      cout << "Your first peg of your cruiser will be placed at "
              <<cruiser_letter1<<cruiser_number1<<"\n\n";
      
      
            
      char direction_cruiser;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> direction_cruiser;
    
    switch (direction_cruiser)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other two pegs will occupy spaces\n";
                
                if (cruiser_number1 > 10 || cruiser_number1 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (cruiser_number1 >= 7)
                {
                    cout <<cruiser_letter1<< --cruiser_number1<<"\n";
                cout <<cruiser_letter1<< --cruiser_number1<<"\n";
               
                
                }else if (cruiser_number1 <= 4)
                    {
                        cout <<cruiser_letter1<< ++cruiser_number1<<"\n";
                cout <<cruiser_letter1<< ++cruiser_number1<<"\n";
                
                
                }else 
                    {
                        cout <<cruiser_letter1<< ++cruiser_number1<<"\n";
                cout <<cruiser_letter1<< ++cruiser_number1<<"\n";
                
                
               
                }
                break;
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other two pegs will occupy spaces\n";
            static_cast<int>(cruiser_letter1);
            if (cruiser_letter1 > 74 || cruiser_letter1 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (cruiser_letter1 >= 71)
            {
                cout <<--cruiser_letter1<< cruiser_number1<<"\n";
                cout <<--cruiser_letter1<< cruiser_number1<<"\n";
                
               
                    
            }else if (cruiser_letter1 <= 68)
            {
                cout <<++cruiser_letter1<< cruiser_number1<<"\n";
                cout <<++cruiser_letter1<< cruiser_number1<<"\n";
               
                
               
            }
            
    }
                                           

    
    
    
    cout << "Next we will place a submarine\n";
      cout << "The submarine we will place has three pegs\n"
              <<"so type in any letter from A to J\n";
              cin >> submarine_letter1;
      cout << "Next we will have you type in any number from 1 to 10\n";
      cin >> submarine_number1;
      cout << "Your first peg of your submarine will be placed at "
              <<submarine_letter1<<submarine_number1<<"\n\n";
      
   
    
    
     char direction_submarine;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> direction_submarine;
    
    switch (direction_submarine)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other two pegs will occupy spaces\n";
                
                if (submarine_number1> 10 || submarine_number1 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (submarine_number1 >= 7)
                {
                    cout <<submarine_letter1<< --submarine_number1<<"\n";
                cout <<submarine_letter1<< --submarine_number1<<"\n";
               
                
                }else if (submarine_number1 <= 4)
                    {
                        cout <<submarine_letter1<< ++submarine_number1<<"\n";
                cout <<submarine_letter1<< ++submarine_number1<<"\n";
                
                
                }else 
                    {
                        cout <<submarine_letter1<< ++submarine_number1<<"\n";
                cout <<submarine_letter1<< ++submarine_number1<<"\n";
                
                
               
                }
                break;
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other two pegs will occupy spaces\n";
            static_cast<int>(submarine_letter1);
            if (submarine_letter1 > 74 || submarine_letter1 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (submarine_letter1 >= 71)
            {
                cout <<--submarine_letter1<< submarine_number1<<"\n";
                cout <<--submarine_letter1<< submarine_number1<<"\n";
                
               
                    
            }else if (submarine_letter1 <= 68)
            {
                cout <<++submarine_letter1<< submarine_number1<<"\n";
                cout <<++submarine_letter1<< submarine_number1<<"\n";
               
                
               
            }
            
    }
                                           

    
    
    cout << "Next we will place our final ship the destroyer\n";
      cout << "The destroyer we will place has two pegs\n"
              <<"so type in any letter from A to J\n";
              cin >> destroyer_letter1;
      cout << "Next we will have you type in any number from 1 to 10\n";
      cin >> destroyer_number1;
      cout << "Your first peg of your submarine will be placed at "
              <<destroyer_letter1<<destroyer_number1<<"\n\n";
     
     
       char direction_destroyer;
    cout << "Enter the direction for which you would like your next move to be\n";
    cout << "Type in h for horizontal movement or v for vertical movement\n";
    cin >> direction_destroyer;
    
    switch (direction_destroyer)
    {
        case 'h':
                cout <<"You chose to move horizontally " 
                <<"the other peg will occupy spaces\n";
                
                if (destroyer_number1 > 10 || destroyer_number1 <= 0)
                {
                    cout << "Please enter a number between 1 and 10\n";
                
                }else if (destroyer_number1 >= 7)
                {
                    cout <<destroyer_letter1<< --destroyer_number1<<"\n";
                
               
                
                }else if (destroyer_number1 <= 4)
                    {
                        cout <<destroyer_letter1<< ++destroyer_number1<<"\n";
                
                
                
                }else 
                    {
                        cout <<destroyer_letter1<< ++destroyer_number1<<"\n";
               
                
                
               
                }
                break;
        case 'v':
            cout <<"You chose to move vertically "
                    <<"the other peg will occupy spaces\n";
            static_cast<int>(destroyer_letter1);
            if (destroyer_letter1 > 74 || destroyer_letter1 <= 64)
            {
                cout << "Please choose a letter between A and J\n";
            
            }else if (destroyer_letter1 >= 71)
            {
                cout <<--destroyer_letter1<< destroyer_number1<<"\n";
                
                
               
                    
            }else if (submarine_letter1 <= 68)
            {
                cout <<++destroyer_letter1<< destroyer_number1<<"\n";
               
               
                
               
            }
            
    }
             }                        
      
  
    
    
  
    
    
    
    
    
    
    
    

    
    return 0;

}
void opponent (int oppnum_1, int oppnum_2, int oppnum_3, int oppnum_4, int oppnum_5)
    // The following gives random numbers and random letters for the computer player. 
{

    srand (time(0));
     
    oppnum_1 = (rand ()%10)+1;
    int r = (rand() % 10);
    char x = (char)(r+65);
   
   
    cout << "the peg of your carrier is located at "<<x<<oppnum_1<<"\n";
   
   
   
     
     
     
     
    oppnum_2 = (rand ()%10)+1; 
        int r_1 = (rand() % 10);
        char x_1 = (char)(r_1+65);
        
        
        cout<<"The peg of your battleship is located at "<<x_1<<oppnum_2<<"\n";
   
   
   if (x == x_1 )
   {
       cout << "We are going to randomize again so your ships do not take up the same spaces\n";
        int oppnum_2 = (rand ()%10)+1; 
        int r_1 = (rand() % 10);
        char x_1 = (char)(r_1+65);
        cout<<"The peg of your battleship is located at "<<x_1<<oppnum_2<<"\n";
        cout << "the peg of your carrier is located at "<<x<<oppnum_1<<"\n";
   }else
   {
      cout << "Continue...\n\n"; 
   }

   
     
     { 
     int oppnum_3 = (rand ()%10)+1; 
   int r_2 = (rand() % 10);
   char x_2 = (char)(r_2+65);
   cout<<"The peg of your cruiser is located at "<<x_2<<oppnum_3<<"\n";
   
   
     
   
     
    int oppnum_4 = (rand ()%10)+1;
   int r_3 = (rand() % 10);
   char x_3 = (char)(r_3+65);
   
   cout<<"The peg of your submarine is located at "<<x_3<<oppnum_4<<"\n";
   
   
   if (x_2 == x_3 )
   {
       cout << "We are going to randomize again so your ships do not take up the same spaces\n";
        
        int oppnum_3 = (rand ()%10)+1; 
   int r_2 = (rand() % 10);
   char x_2 = (char)(r_2+65);
   cout<<"The peg of your cruiser is located at "<<x_2<<oppnum_3<<"\n";
   
   
     
   
     
    int oppnum_4 = (rand ()%10)+1;
   int r_3 = (rand() % 10);
   char x_3 = (char)(r_3+65);
   
   cout<<"The peg of your submarine is located at "<<x_3<<oppnum_4<<"\n";
   
   }else
       
   {
       cout<< "Now one more ship, almost there\n\n";
       
   }
   
      }
          
 
{
    
    int oppnum_5 = (rand ()%10)+1;
   int r_4 = (rand() % 10);
   char x_4 = (char)(r_4+65);
   cout<<"The peg of your destroyer is located at "<<x_4<<oppnum_5<<"\n";
    
   
}
        
    
}
    
    
    
    

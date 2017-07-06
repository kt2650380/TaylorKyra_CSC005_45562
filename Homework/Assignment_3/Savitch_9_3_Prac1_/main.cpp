/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 1- Rock Paper Scissors Game
 */

#include <iostream>
#include <string>
using namespace std;


int main()
{
  
      char user_1 ;
      char user_2;
    
    cout << "How about a game of rock, paper, scissors\n";
    cout << "We need two players\n";
    cout << "Enter R for rock, P for paper or S for scissors\n";
    cout << "Here are the rules\n"
            "Paper beats rock \n"
            "Rock breaks scissors\n"
            "And Scissors cut paper\n";
    cout << "If both users select the same sign, Nobody wins\n";
    
    cout << "User 1 go ahead and select your sign\n";
    cin >> user_1;
    
   
    
    
    if ((user_1 == 'R') || (user_1 == 'r')) {
        cout << "You're up user 2\n";
    
    }else 
        cout << "You may have selected the wrong letter User 1, try again. \n";
    
 
    
  
    
    
    
    
 cout << "User 2 go ahead and select your sign\n";
 cin >> user_2;
    
    
     if 
            ((user_2 == 'S') || (user_2 == 's'))
            cout << "Rock crushes scissors, congrats user 1\n";
        else if 
            ((user_2 == 'P') || (user_2 == 'p'))
            cout << "Paper covers rock, congrats user 2\n";
            
           
    
           
        else 
        cout << "Game Over, wrong input User 2. \n";
    
     
       
   if ((user_1 == 'S') || (user_1 == 's')) {
        cout << "You're up user 2\n";
    
    }else 
        cout << "You may have selected the wrong letter User 1, try again. \n";
    
 
    
  
    
    
    
    
 cout << "User 2 go ahead and select your sign\n";
 cin >> user_2;
    
    
     if 
            ((user_2 == 'R') || (user_2 == 'r'))
            cout << "Rock crushes scissors, congrats user 2\n";
        else if 
            ((user_2 == 'P') || (user_2 == 'p'))
            cout << "Paper gets spliced by scissors, congrats user 1\n";
            
           
     
           
        else 
        cout << "Game Over, wrong input User 2. \n";
     
     if ((user_1 == 'P') || (user_1 == 'p')) {
        cout << "You're up user 2\n";
    
    }else 
        cout << "You may have selected the wrong letter User 1, try again. \n";
    
 
    
  
    
    
    
    
 cout << "User 2 go ahead and select your sign\n";
 cin >> user_2;
    
    
     if 
            ((user_2 == 'R') || (user_2 == 'r'))
            cout << "Rock gets covered by paper, congrats user 1\n";
        else if 
            ((user_2 == 'S') || (user_2 == 's'))
            cout << "Scissors cut paper congrats user 2\n";
            
           
    
           
        else 
        cout << "Game Over, wrong input User 2. \n";
    
    
     
                     
    
     
            
                    
     
        
    
       
           
    
    return 0;
}


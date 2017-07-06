/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 5, 2017, 8:45 PM
 * Purpose: Practice Program 5- Prime Number Finder
 */

#include <iostream>
using namespace std;


int main()
{
    
    cout << " Enter a number and I will generate the prime numbers up to that number: ";
    int num = 0;
    cin >> num;
    prime_num(num);
}

void prime_num( int num)
{
    bool isPrime=true;
    for ( int i = 0; i <= num; i++)
    {
        for ( int j = 2; j <= num; j++)
        {
            if ( i!=j && i % j == 0 )
            {
                isPrime=false;
                break;
            }
        }
       if (isPrime)
       {
           cout <<"Prime:"<< i << endl;
       }
       isPrime=true;
    }
}

       
           
    
    return 0;
}


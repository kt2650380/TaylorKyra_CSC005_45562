/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 10, 2017, 3:45 PM
 * Purpose: Practice Program 8- Overloaded Absolute Value Function
 */

#include <iostream>
#include <cmath>

using namespace std;
int absolute(int n);
double absolute(double n);
float absolute (float n);
int main()
{
  int i  = -10;
  cout << "Absolute value of -10:"<<absolute(i)<<endl;
  
  double d = -10.01
  cout <<"Absolute value of -10.01:"<<absolute(d)<<endl;
  float f = -2.51;
  
  cout << "Absolute value of -2.51:"<<absolute(f)<<endl;
  
  long l = -10000L;
  
  cout <<"Absolute value of -10000L:"<<absolute(l)<<endl;
  
  return 0;
 
    }
      
int absolute (int n)
{
    cout<<"/n Overload:integer abs()\n";
    return n<0?-n :n;
}
double absolute (double n)
{
    cout <<"\n Overload:double abd()\n";
    return<0?-n:n;
}
float absolute(float n)

{
    cout<<"\nOverload:float abs()\n";
    return n<0?-n:n;
}

long absolute (long n)

{
    cout<<"\n Overload:long abs()\n";
    return n<0?-n:n;
}
    

       
   
        
        
     

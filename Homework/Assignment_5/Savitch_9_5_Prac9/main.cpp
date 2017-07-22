/* 
 * File:   main.cpp
 * Author: Kyra Taylor
 * Created on July 14, 2017, 12:20 PM
 * Purpose: Practice Problem 9, Calculate the area and perimeter of a triangle from a given three sides.
 */

#include <iostream>
#include <cmath>
 
using namespace std;

void inputval(float& a, float& b, float& c);
bool triangle (float a, float b, float c);
float s_perimeter(float a, float b, float c);
void a_perimeter (float a, float b, float c, float &perimeter, float &area);
void output(float perimeter, float area);





int main()
{
    float a, b, c,perimeter,area;
    char choice;
    
    do
    {
        inputval(a,b,c);
        
        if(triangle(a,b,c));
        {
            s_perimeter(a,b,c);
            a_perimeter(a,b,c,perimeter,area);
            output(perimeter,area);
        }
        
    
    cout<<"Enter choice 'y' or 'Y' to repeat standard\n"
               <<"deviation calculation\n";
       
       cin>>choice; 
    }while (choice=='y'||choice== 'Y');
    return 0;
}
    
    
  void inputval(float& a, float& b, float& c)
  {
  cout<<"Enter the length of sides of a triangle\n";
  cout<<"a=";
  cin >> a;
  
  while(a <=0)
  {
      cout<<"Enter positive integer";
      cin>> a;
  }
  
  cout<< "b=";
  cin >>b;
  while(b<=0)
  {
      cout<<"Enter positive integer";
      cin>> b;
      cout<<b;
  }
  
  cout<< "c=";
  cin >>c;
  while(c<=0)
  {
      cout<<"Enter positive integer";
      cin>> c;
  }
  
      
  }
  
  
  
bool triangle (float a, float b, float c)
{
        if(a+b>=c)
    
            return true;
        else
        {
            return false;
            cout<<"Invalid Input";
        
        }
}
float s_perimeter(float a, float b, float c)
{
    float s = (c+a+b)/2.0;
    return s;
    
}
void a_perimeter (float a,float b, float c, float &perimeter, float &area)
{
float s=s_perimeter(a,b,c);

perimeter = a+b+c;

area = sqrt(s*(s-a)*(s-b)*(s-c));
}


void output(float perimeter, float area) 
    
{
    cout<<"Area of a triangle = "<<area<<endl;
    cout<<"perimeter of a triangle = "
            <<perimeter<<endl;
}  

       
       

       
       
    



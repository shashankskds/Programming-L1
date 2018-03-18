/**
 * Asn 2 , extwo.cpp
 * this is the program which gives number from 0 to x. x is the vairiable which is input 
 * 
 * input 
 * 3
 * output 
 * 0 , 1 , 2 , 3.
 *
 * @author shashank
*/

#include<iostream>
using namespace std;
                                                              
int main ()
{                           
            int x;          //x is a input it can any integer.
            int y = 0;

            cout << " Enter a number " << endl;
	    cin >> x;                                                  
                                  
	    while (y <= x )                           
            {          cout << y << endl;
                       y = y + 1;
            }        
}
                                              

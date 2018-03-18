/**
 * Asn 3 , factorial.cpp
 * purpose :this program calculate factorial of any integers 
 *
 * @author shashank
 */


#include<iostream>
using namespace std;
/**
 * returns factorial of those number 
 *
 * @param n n is a integer
 * @return the factorial of n
 */

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{                 
     if ( n > 1 ) 
     {
	     return n * factorial ( n - 1 ); // if n = 3 than n become 2 and total = 3 x 2 it goes untill statement is true 

     }
     else    // if n = 1 than it return 1                                    
     {
	     return 1;
     }
                                                  
}

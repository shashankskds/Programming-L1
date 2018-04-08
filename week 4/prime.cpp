/* porpuse : this program print all prime number between 1 to 100.
 * input : nothing
 * output :  1 3 5 7 .......... 97
 */

#include<iostream>

using namespace std;

//this is prime function which print all prime no
void isPrime ()
{
	cout << " print all prime number 1 to 100 : " << endl;
                                           
	for ( int i = 1; i <= 100; ++i )
	{                                    
		int x = 1;// this x value remain 1. if value of i is prime 
                
		// this loop checks i is composit or not .
		for ( int j = 2; j <= (i-1); ++j )
		{
			if ( i%j == 0 )
			{
				x = -1;
		              break;
			}
	
  		}
                            	 
  		if ( x == 1 )  //if value of i is prime than i will print .
		{
			cout << i << " ";
		}
	}
}

int main() //this is main function.
{                   
	isPrime();
}


/* porpuse : this program print all prime number between 1 to 1000.
 * input : nothing
 * output :  1 3 5 7 ........... ....997
 */

#include<iostream>

using namespace std;

//this  function  print all prime no
void isPrime ( int num )
{
	for ( int i = 1; i <= num; i++ ){

		bool flag = true;

		if ( i >= 2 )
		{
			//this loop checks if number has any factore it shows flag false if number does not have factor than flag will be true
			for ( int j = 2; j < i; j++ ){  //if number is n than loop start from n+1 and end at n-1 
				  	
				
				if ( i%j == 0 )
				{
					flag = false;
					break;
				}
			}

			if ( flag == true )
			{
				cout << i << " ";
			}
		}
	}
}

int main ()
{
	int num = 1000;

	isPrime(1000);
}


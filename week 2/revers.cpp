/**
 * Asn 4 , revers.cpp
 * purpose : this program gives revers number 
 * input = 1577 
 * output = 7751 
 *
 * @author shashank
 */

#include<iostream>
using namespace std;

// controls opration of the program.
int main()
{                
	int x ;
	int reversed_number = 0;
	int last_digit;
                                                                               
	cout << " enter a number " << endl;
	cin >> x;
                       
	while ( 0 != x)
       	{                                                                       
	           last_digit = x % 10; // 1577%10=7 it gives last digit  
          	   reversed_number = 10 * reversed_number + last_digit; // 10x0 + 7 = 7 it revers last number.
                   x = x / 10 //  it gives us 1577 / 10 = 157 and the prosses is on untill x is not equal to 0.
	}
        cout << "REERSED NUMBER " << " = " << reversed_number << endl;
	return 0;
}




                                                                            


/**
 * Asn 6 , magic.cpp                                          
 * purpose : it gives MAGIC if number is multipli of 100
 *
 * @author shashank
 */

#include<iostream>
using namespace std;

// controls opretation of the program
int main()
{               
	int number;
       
      cout << " Enter a number " << endl;
      cin >> number;                                                                
                                                                                           
        if(number/100) // if the number is divisible by 100 and gives any intigar than it print MAGIC
	{        
		cout << " Magic " << endl;
	} else { 
		cout << " Error " << endl;
	}

	return 0;
}


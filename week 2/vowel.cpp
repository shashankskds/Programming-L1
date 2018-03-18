/**          
 * Asn 5 , vowel.cpp
 * purpose : this program distinguish between vowel and consonant.
 * input = e
 * output =e is a vowel
 
 */                  
                         
#include<iostream>
using namespace std;

//control opration of the program

int main()
{                  
  	char x; // x is a vairiable it can be any opretor
	int lower_vowel;
	int upper_vowel;

	cout << " Enter a number " ;
	cin >> x;

	lower_vowel = ( x=='a' || x=='e' || x=='i' || x=='o' || x=='u' );
             
	upper_vowel = ( x=='A' || x=='E' || x=='I' || x=='O' || x=='U' );
                                                    
	if ( lower_vowel || upper_vowel )
	{                                                 
		cout << x << " is a Vowel "; // if input is a,e,i ,o ,u 
	}   
	else
	{    
		cout << x << " is a consonant " << endl; // if input is other it gives consonant
	}
	 return 0;
}
                                                               

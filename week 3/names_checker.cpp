/*
 * porpuse : this program check if first character is vowel than it prints names
 * input : 2 
 *         abhishek , ram
 * output : abhishek
 */

#include<iostream>
#include<string> //gives you a string function
                 
using namespace std;

int main()
{
	int n;
	cout << " enter how maney names you have ";
	cin >> n;               
        
	string names[n]; //string array it is going to store all names
        string x;        //this x string is going to be very helpful in output
        
	cout << " enter names here \n ";

	// this for loop store names
	for ( int i = 0; i < n; i++ )
	{
     		cin >> names[i];
	}
        
	cout << "names whose first character is starting with vowel \n ";

	//this for loop check if names first character is vowel than this loop
	//print names else not
	for ( int i = 0; i < n; i++ )
      	{
	   	x = names[i]; //it assign names = x than the name will check                
                if ( x.at(0) == 'a'|| x.at(0) == 'e' || x.at(0) == 'i' || 
				x.at(0) == 'o' || x.at(0) == 'u' )
		{                  
		  	cout << x << endl;
		}
	 	
	}
}                          


/* asn no : 2 
 *purpose : this program tells us highest and lowest marks 
 *input : 8 ,7 ,6 ,22
output : highest = 22 
         lowest = 6
	 */

#include<iostream>

using namespace std;

int main ()
{
	int lowest;
	int highest;
	int size;
        cout << "Enter no of element " << endl;
	cin >> size;
	                   
	int marks[size]; //array of marks this array is storing marks

	for ( int i = 0; i < size; ++i )
	{       
		cout << 1 + i << ")" ;
	     	cout << "Enter a integer marks " << endl;
      		cin >> marks[i];
	}

	highest = lowest = marks[0];
                                                    
	for ( int i = 1; i < size; ++i )
		{            
			if ( marks[i] > highest )   // it compare marks with 
			{
				highest = marks[i]; //with first marks if first
				//is less than another it store as a first 
			}
			if ( marks[i] < lowest )
			{
				lowest = marks[i];
			}
		}

	cout << " the highest marks is = " << highest << endl;
	cout << " the lowest marks is = " << lowest << endl;

	return 0;
}

	                 

/*
 * purpose : this program print all number in ascending and descening order
 * input  : 6
 *          1 7 3 9 2 54
 * output : 1 2 3 7 9 54
 * 	    54 9 7 3 2 1
 */
#include<iostream>

using namespace std;

//this function store all number in array
void read_number ( int array[] , int size )
{                            
	cout << "enter numbers " << endl;
	for ( int i = 0; i < size; ++i )
	{
		cin >> array[i];
	}

}

//this function arrange in ascending order 
void ascending ( int array[] , int size )
{
	for ( int i = 0; i < size; ++i )
	{
		for (int j = ( i+1 ); j < size; ++j )
		{
			if ( array[i] > array[j] ) //it checks every value which comes
				                   //after i if the value is less than i
						   //than it would store at i th place
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << " arrray in  ascending order " << endl;
                         
	for ( int i = 0; i < size; ++i )
	{
		cout << array[i] << " ";
	}

}

//this functon arrange in descending order
void descending ( int array[] , int size )
{
	for ( int i = 0; i < size; ++i )
	{
		for ( int j = ( i+1 ); j < size; ++j )
		{
			if ( array[i] < array[j] )   // if the value of j is greater than i than 
				                     //the value of j is store at the place of value of i
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << " array in descending order \n ";
	for ( int i = 0; i < size; ++i )
	{
		cout << array[i] << " " ;
	}
}


int main()
{                    
	int size;         
	cout << " enter size ";
	cin >> size;

	int number[size];
        read_number ( number , size );

        ascending ( number , size );

        cout << " \n ";

	descending ( number , size );


}	

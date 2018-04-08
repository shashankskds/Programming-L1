#include<iostream>

using namespace std;

void scan_number ( int array[] , int size )
{                            
	cout << "enter numbers " << endl;
	for ( int i = 0; i < size; ++i )
	{
		cin >> array[i];
	}

}

void ascending ( int array[] , int size )
{
	for ( int i = 0; i < size; ++i )
	{
		for (int j = ( i+1 ); j < size; ++j )
		{
			if ( array[i] > array[j] )
			{
				int x = array[i];
				array[i] = array[j];
				array[j] = x;
			}
		}
	}

	cout << " arrray in  ascending order " << endl;
                         
	for ( int i = 0; i < size; ++i )
	{
		cout << array[i] << " ";
	}

}

void descending ( int array[] , int size )
{
	for ( int i = 0; i < size; ++i )
	{
		for ( int j = ( i+1 ); j < size; ++j )
		{
			if ( array[i] < array[j] )
			{
				int x = array[i];
				array[i] = array[j];
				array[j] = x;
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
	int n;         
	cout << " enter size ";
	cin >> n;

	int number[n];
        scan_number ( number , n );

        ascending ( number , n );

        cout << " \n ";

	descending ( number , n );


}	

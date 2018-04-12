/* purpose : this program print matrix NxN with all 0
 * and print matrix lower half triangle as 1
 * input : 3
 * output : 0 0 0 
 *          0 0 0 
 *          0 0 0
 *
 *          1 0 0
 *          1 1 0
 *          1 1 1
 */

#include<iostream>

using namespace std;

//this is function declartion
void zero ( int matrix[10][10] , int n );
void lower_matrix ( int matrix[10][10] , int n );

int main()
{
	int n;
	cout << " enter a number \n ";
	cin >> n;
        
	//array intilization 
	int matrix[10][10];
       
        cout << " first program matrix with all element 0 \n ";
        zero ( matrix , n );
        
	cout << endl;
        cout << " second program print matrix lower haif triangle as 1 \n";
        lower_matrix ( matrix , n );
}

//this function print NxN with all 0
void zero ( int matrix[10][10] , int n )
{
	for ( int i = 0; i < n; ++i )
	{
		for( int j = 0; j < n; ++j )
		{	
	      		 matrix[i][j] = 0;
			 cout << matrix[i][j] << " ";

	 	}
		cout << endl;
	}
}

//this function print half triangle as 1 
void lower_matrix ( int matrix[10][10] , int n )
{
	for ( int i = 0; i < n; ++i )
	{
		for ( int j = 0; j < n; ++j )
		{
			if ( i > j || i == j )
			{
				matrix[i][j] = 1;
			}
			
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

/*
 * purposem : this program calculate how many days have passed from 01-01-YYYY
 * input  : 10-2-2000
 * output : 31 + 10 = 41
 */

#include<iostream>
using namespace std;

// this the structure of date
struct date
{
	int day , month , year;
};

//to store number of dates 
const int month_days[12] = { 31 , 28 , 31 , 30 , 31 , 30 ,
	31 , 30 , 31 , 30 , 31 , 30};

//this function count leap year if year is leap it adds 1 day extra
int is_leap ( date d )
{
	int years = d.year;
	
	// this line check year is leap or not 
	if ( ( years%4 == 0 && years%100 != 0 ) || ( years%400 == 0 ) )
	{
		return 1;
	}
	return 0;
}

//this function calculate total days have passed from 01-01-YYYY
int total_date ( date d1 )
{
	int total = d1.day;
	
	//add days for months in given date 
	for ( int i = 0; i < d1.month - 1; ++i )
	{
		total = total + month_days[i];
	}
        
	//check if current date need to be add 1 extra date or not 
	if ( d1.month > 2 )
	{
	total = total + is_leap( d1 );
	}
	

	return total;
}

//driver program
int main ()
{
	char underscore;
        string enter_date;

	date d1;

        cout << " enter dd-mm-yyyy \n ";
        cin >> enter_date;
	d1.day = stoi(enter_date.substr( 0 , 2) );//it convert string into integer
	d1.month = stoi ( enter_date.substr ( 3 , 2 ) );
	d1.year = stoi ( enter_date.substr (6) );
	
	cout << " days " << total_date ( d1 );

}

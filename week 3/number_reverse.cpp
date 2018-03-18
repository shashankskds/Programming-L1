/* porpuse : this program is reverse the  numbers 
 * input : 67 , 78 ,88 ,78            
 * output: 78 , 88 , 78 , 67
 */
#include<iostream>

using namespace std;

//this function is going to store numbers
void scan_array ( int the_array[] , int size )
{   
    	cout << " enter a number " << endl;
	for ( int i = 0; i < size; ++i )
	{
		cin >> the_array[i];
	}                                              
}

//this function is going to reverse numbers
int  revers_array ( int the_array[] , int start , int end )
{                             
	int x ;
	while( start < end )                                 
        {                            
              	x = the_array[start];             // this line assign x=67	
	       the_array[start] = the_array[end];//this line 67 = 78
               	the_array[end] = x;              //78=x it means 78 =67
                                                 // this loop swap the last 
              start = start+1;                  //value with the first value
       	      end = end - 1;
	}
}

//this function print reversed value
void print_array ( int array[] ,int  size )
{                               
	for ( int i = 0; i < size; ++i )
	{
		cout << array[i] << endl;
	}
}

// the main function 
int main ()
{       
	int n;                   
   	cout << " enter size ";
	cin >> n;                       
        int number[n];           //array intilization       	
  	scan_array ( number, n );                             
                                     	                           
	cout << " revers " << endl;
 	revers_array ( number , 0 , n-1 );
	print_array ( number , n );
}                                                                               
                                        

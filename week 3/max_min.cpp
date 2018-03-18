/* asn no : 2
 * purposr : this program finds highest and lowest marks
 * input = 99 , 65,44 ,33
 * output = 99 33
 */

#include<iostream>
using namespace std;
            
void  highest ();
void  lowest ();

int main()
{
	int marks;
	int no_of_element;

	int array_of_marks[100];

	cout << " enter how maney narks are : " << endl;
	cin >> no_of_element ;
	cout << endl;

	//this for loop is going to store the elements 
	for ( int i = 0; i < no_of_element; ++i )
	{
		cout << "Enter marks no " << 0 + i << " -> "; 
      		cin >> array_of_marks[i];
	}
                
	 highest ( array_of_marks );
	                                   
	 lowest ( array_of_marks );

}           
	//this function is going to store highest marks 
                    
void highest ( int array_of_marks[100] )
{
	for ( int i = 0; i < no_of_element; ++i )
	{
		if ( array_of_marks[0] < array_of_marks[i] ) //first elements if
			//less than second element is going to store at first 
			//position and than it compare again first element to 
			//to third and if third elemnt is less than first than it
			//store at first place again
		{
			array_of_marks[0] = array_of_marks[i];
		}
	}

	cout << "highest marks " << array_of_marks[0] << endl;

}

     // this function is going to store lowest marks 
                   
void lowest ( int array_of_marks[100] )
{                                                        
		for ( int i = 0; no_of_element; ++i )
                {                       
		         if ( array_of_marks[0] > array_of_marks[i] )
			{
				array_of_marks[0] = array_of_marks[i];
			}
		}
		
		cout << "lowest marks " << array_of_marks[0] << endl;
}


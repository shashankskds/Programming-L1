/*purpose : this program takes n followed by company , age , name . 
 * and provide a way to search using company parameter.
 *input : 2 , anil 23 tata 
 	tata 32 amazon
	name
	tata
  output : tata 32 amazon
 */
         
#include<iostream>
#include<string>
using namespace std;

struct employee
{
	string name;
	int age;
	string company;
};

//this function read followed by name age company          
void scan_info(struct employee array[] , int size )
{

	
	for ( int i = 0; i < size; ++i ){

		cout << " enter name ";
		cin >> array[i].name;
		cout << " enter age ";
		cin >> array[i].age;
		cout << " enter company ";
		cin >> array[i].company;
	}

}

//this function search wether number struct contain search or not if 
//search is succesful than it print information of employee
void search ( struct employee array[] , string first , string last , int number, int size )
{
	for ( int i = 0; i < size; ++i )
	{
		if ( ( array[i].company.compare(last) == 0 && first == "company" ) || ( array[i].name.compare(last)==0 && first == "name" ) || 
				array[i].age == number
		   )
		{
			cout << " name    " << array[i].name << endl;
			cout << " age     " << array[i].age << endl;
			cout << " company " << array[i].company << endl;;
		}
	}
}

// driver program
int main ()
{
	int size;
	string first , last;//first is going to take first string and last is takes last string 
	int number;// it takes number which is age 

	cout << " enter size ";
	cin >> size;
        employee array[size];

	scan_info (  array , size );
	
	cout << "  start search ( every character should be in lowercase ) \n  ";
        cin >> first;
	if ( first == "name" || first  == "company" )
	{	
		
		cin >> last;
	}else {
		
		cin >>number;
	}

	//this function use all parameter
	search (  array , first , last ,number, size );
}



	

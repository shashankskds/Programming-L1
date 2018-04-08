/*purpose : this program takes n followed by company , age , name . 
 * and provide a way to search using company parameter.
 *input : 3 , anil 23 google 
 	ram 32 amazon
	company 
	amazon
  output : ram 32 amazon
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

	
	for ( int i = 0; i < size; ++i )
	{
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
void search ( struct employee array[] , string a , int number, int size )
{
	for ( int i = 0; i < size; ++i )
	{
		if ( array[i].company.compare(a) == 0 || array[i].name.compare(a)==0 || 
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
	string a , n;// a takes input from user for search. n takes followed by company, name, age
	int number;

	cout << " enter size ";
	cin >> size;
        employee array[size];

	scan_info (  array , size );
	
	cout << "  start search ( every character should be in lowercase ) \n  ";
        cin >> n;
	if ( n == "name" || n == "company" )
	{	
		
		cin >> a;
	}else {
		
		cin >>number;
	}

	//this function use all parameter
	search (  array , a ,number, size );
}



	

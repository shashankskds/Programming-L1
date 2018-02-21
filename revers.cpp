#include<iostream>
using namespace std;

int main()
{                
	int x , ReversedNumber = 0 , lastdigit;
                                
	cout << " enter a number " << endl;
	cin >> x;
                       
	while ( 0 != x)
       	{                         
		                                                            
	           lastdigit = x % 10;                             
          	  ReversedNumber = ReversedNumber* 10 + lastdigit;
                           
		   x = x/10;
	}
          cout << " Reversed no... " << ReversedNumber << endl;
  return 0;
}




                                                                            


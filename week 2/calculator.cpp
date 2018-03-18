/** 
   Asn 1 , calculator.cpp       
   purpose : calculate the addition, subtraction,m
  ultiplication, division of two number
                                                                            

   
*/


#include <iostream>
using namespace std;

/**
    this fn takes two number and one opretation and applies the opretor to the number 
    input
    * 1 1 
    / 6 3
    - 8 5 

    output
    1
    2
    3

    @param number , opretor
    @return The add , sub , multi , divi of those two number

*/
int main ()                                                    
{  
	char opretor;            
	float number_one;
	float number_two;
                                                                
	cout << " enter an operator + or - or * or /:" << endl;
        cin >> opretor;

        cout << " enter a number " << endl;
	cin >> number_one;
                      
	cout << " enter next number " << endl;
	cin >> number_two;

               
      switch(opretor)
      {         
	      case '+':                         //if opretor is + it gives addition
	      	     cout << " RESULT "; 
        	      cout << number_one + number_two;
		      break;                  
	      case '-':                         //if opretor is - it gives substarction
		      cout << " RESULT ";
		      cout << number_one - number_two;
                      break;
	     case '/':                          //if opretor is / it gives division
		      cout << "RESULT";
		      cout << number_one / number_two;
	              break;
	     case '*':                           //if opretor is * it gives multiplication 
		      cout << " RESULT ";
		      cout << number_one * number_two;
		      break;
	     default:                      //if opretor does not match it shows error
		      cout << " ERROR! ";
		      break;
      }                                              
}	                                                                                

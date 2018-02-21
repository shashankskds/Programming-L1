#include <iostream>
using namespace std;

int main (){

	char o;
	float numb1 , numb2;

	cout << " enter an operator + or - or * or /:" << endl;

	cin >> o;                                            
        cout << " enter a number " << endl;
	cin >> numb1;

	cout << " enter next number " << endl;
	cin >> numb2;


      switch(o){
	      case '+':
		     cout << " RESULT "; 
		      cout << numb1 + numb2;
		      break;
	      case '-':
		      cout << " RESULT "; 
		      
		      cout << numb1 - numb2;
                      break;
	     case '/':
		      cout << "RESULT";
		      cout << numb1 / numb2;
	              break;
	     case '*':
		      cout << " RESULT ";
		      cout << numb1 * numb2;
		      break;
	     default:
		      cout << " ERROR! ";
		      break;
      }


                                               
}	                                  

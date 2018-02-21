#include<iostream>
using namespace std;

int main()
{
	char x;
	int lowercaseVowel , uppercaseVowel;

	cout << " Enter a number " ;
	cin >> x;

	lowercaseVowel = ( x=='a' || x=='e' || x=='i' || x=='o' || x=='u' );

	uppercaseVowel = ( x=='A' || x=='E' || x=='I' || x=='O' || x=='U' );

	if ( lowercaseVowel ||  uppercaseVowel ){
	                                          
		cout << x << " is a Vowel ";}
	else{cout << x << " is a consonant " << endl;
	}
	return 0;
}


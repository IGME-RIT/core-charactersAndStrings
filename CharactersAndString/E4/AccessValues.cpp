#include "Headers.h"

void AccessValues::TestAccessValues() {
	//-----------------------------------------------------------------------------------------------------
	// C++ strings really "clean" things up!
	string str("abcd");
	for (unsigned int i=0 ; i<str.length() ; i++)
		cout << str[i] << " ";
	cout << endl;
	cout << str.at(3) << endl;
	cout << str.substr(0,2) << endl;
	//-----------------------------------------------------------------------------------------------------
}
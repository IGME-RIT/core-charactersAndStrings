#include "Headers.h"

void CastingIntroduction::TestCastingIntroduction() {
	//-----------------------------------------------------------------------------------------------------
	// http://msdn.microsoft.com/en-us/library/x9wzb5es.aspx
	// http://www.cplusplus.com/doc/tutorial/typecasting
	//-----------------------------------------------------------------------------------------------------
	cout << "\nTesting casting: " << endl; //
	int a = 'a'+1;                        // we need a for below
	char b = (char)a;                    //
	char c = char(a);                    //
	char d = static_cast<char>(a);       //
	//char e = dynamic_cast<char>(a);      // fails: why? (hint: http://msdn.microsoft.com/en-us/library/c36yw7x9.aspx)
	cout << a << endl;                    //      
	cout << b << endl;                    // 
	cout << c << endl;                    // 
	cout << d << endl;                    // 
	//-----------------------------------------------------------------------------------------------------
}



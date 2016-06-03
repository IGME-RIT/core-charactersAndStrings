#include "Headers.h"

void StringsRevisited::TestStringsRevisited() {
	//-----------------------------------------------------------------------------------------------------
	// basic_string: http://msdn.microsoft.com/en-us/library/syxtdd4f.aspx
	// string is a specialization (templates later in course)
	//-----------------------------------------------------------------------------------------------------
	string z;                    //
	cout << z.length() << endl;  //
	string z1 = "";              //
	string z2 = "a";             //
	//char* z3 = {'a','\0'};       //
	string z4 ("abc");           //	
	string z5 = z4;              // see http://msdn.microsoft.com/en-us/library/3372cxcy.aspx
	const char* z6 = "abc";      //
	string z7=z6;                //
	char z8[3] = {'a','\0'};     // see string literal
	string z9 = z8;              //
	string z10;                  //
	z10.assign("abc");           // and others
	cout << z1 << endl;         //
	cout << z2 << endl;
	cout << z4 << endl;
	cout << z5 << endl;
	cout << z6 << endl;
	cout << z7 << endl;
	cout << z8 << endl;
	cout << z9 << endl;
	cout << z10 << endl;


	//-----------------------------------------------------------------------------------------------------
}

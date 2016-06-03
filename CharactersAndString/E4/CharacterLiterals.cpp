#include "Headers.h"

void CharacterLiterals::TestCharacterLiterals() {
	//-----------------------------------------------------------------------------------------------------
	// Info: http://msdn.microsoft.com/en-us/library/6aw8xdf2.aspx
	// 3 kinds of character constants (from MSDN):
	// - Normal character constants
	// - Multicharacter constants
	// - Wide-character constants
	//-----------------------------------------------------------------------------------------------------
	cout << "\nTesting normal char literals: " << endl;   //
	char a = 'x';                                        //
	cout << a << endl;                                   //
	//-----------------------------------------------------------------------------------------------------
	cout << "\nTesting escape sequences: " << endl;       //
	for (int i=0; i<20; i++)                              //
		cout << '\?' << endl;                            // replace the ? -- which char will output an "alert" (hint: bell--you might need headphones)? 
	// how do you output a backslash?                       //
	//-----------------------------------------------------------------------------------------------------
	cout << "\nTesting wide chars: " << endl;             //
	wchar_t b = L'\u263A';        // 
	cout << b << endl;            // if could see Unicode, would get smiley face
	cout << sizeof(b) << endl;    // 
	char b1 = L'x';                // what if "force" wide char into a normal char type?
	cout << sizeof(b1) << endl;    //
	char c = 'x';                 // for comparison of sizes
	cout << sizeof(c) << endl;    //
	//-----------------------------------------------------------------------------------------------------
	cout << "\nTesting multichars: " << endl; //
	int d = 'ab';                            //
	//what happens if you use 'abcde'?          //
	cout << d << endl;                       //
	cout << sizeof(d) << endl;               //
	char e = 'abc';                          //
	cout << e << endl;                       //
	//-----------------------------------------------------------------------------------------------------

}

#include "Headers.h"

void Sizes::TestSizes()
{
	//-----------------------------------------------------------------------------------------------------
	// Sizes:
	 cout << sizeof(char) << endl;    // explain output wrt to # of bytes 
	 cout << sizeof(bool) << endl;    //
	 cout << sizeof(int) << endl;     //
	 cout << sizeof(float) << endl;   //
	 cout << sizeof(double) << endl;  //
	//-----------------------------------------------------------------------------------------------------
	// are these legal? test with var declarations:
	// 157       // integer constant
	// 0xFE      // integer constant
	// 'c'       // character constant
	// 0.2       // floating constant
	// 0.2E-01   // floating constant
	// "dog"     // string literal
	//-----------------------------------------------------------------------------------------------------
}
#include "Headers.h"


void CStrings::TestCStrings() {
	//-----------------------------------------------------------------------------------------------------
	// LITERALS:
	// See http://www.cplusplus.com/doc/tutorial/ntcs/
	//char c1[] = "hello";                    // c-string?
	//cout << c1 << endl;                     //
	//cout << strlen(c1) << endl;             // http://www.cplusplus.com/reference/clibrary/cstring/strlen/
	//char c2[] = {'h','e','l','l','o'};      // c-string?
	//cout << c2 << endl;                     //
	//char c3[] = {'h','e','l','l','o','\0'}; // c-string?
	//cout << c3 << endl;                     //
	//char c4[6] = "hello";                   //
	//cout << c4 << endl;                     //
	//char c5[] = { "hello"};                 // does http://msdn.microsoft.com/en-us/library/f90052hd.aspx help?
	//  See http://publib.boulder.ibm.com/infocenter/comphelp/v8v101/index.jsp?topic=/com.ibm.xlcpp8a.doc/language/ref/aryin.htm
	//  (sometimes Boulder is more comprehensive than other guides/references!)
	//cout << c5 << endl;                     //
	//cout << c5[0] << endl;                  //
	//cout << *c5 << endl;                    //
	//char c6[] = { "hello" , "goodbye"};     // why fail?
	//-----------------------------------------------------------------------------------------------------
	// POINTERS:
	// danger in using char* c = "abc"?      
	// c[4] and *c BOTH refer to the string    
	//char* c7 = "hello";                      //
	//cout << c7 << endl;                      //
	//cout << sizeof(c7) << endl;              //
	//cout << sizeof(*c7) << endl;             //
	//cout << strlen(c7) << endl;              // 
	//-----------------------------------------------------------------------------------------------------
	// MIXING [] and * 
	// Can you interchange * and []?
	// first a reminder--int* and int[] both mean arrays:
	//int i1[] = {10, 20};                         //
	//int* i2 = i1;                                //
	//cout << i2[0] << "," << *(i2 + 1) << endl;   //
	//int* i3 = {30, 40};                          // fails! why? see http://www.cplusplus.com/doc/tutorial/arrays/
	//int* i3 = new int[2];                        //
	//i3[0] = 30; i3[1] = 40;                      //
	//cout << i3[0] << "," << *(i3 + 1) << endl;   //	
	//
	// "abc" is a literal, which means it's constant (not changing)!
	// So, can we do *(c+1) = 'd' (to replace 'b')?
	// NO: the language does NOT define that behavior...dangerous!
	//char* c8 = "hello";                          //
	//*c8 = 'j';                                   // replace 'h' with 'j'?
	//c8[0] = 'j';                                 // how about this version?
	// to "mix" types, use const char* c to prevent programmer from accidentally trying to change:
	//const char* c9 = "hello";                    // better version
	//c9[0] = 'j';                                 //
	// how to replace a character...? http://www.cplusplus.com/reference/string/string/replace/
	//-----------------------------------------------------------------------------------------------------
}

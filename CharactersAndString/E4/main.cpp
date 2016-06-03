#include "Headers.h"

int main() {

	Sizes sizes;
	CharacterLiterals characterLiterals;
	CastingIntroduction castingIntroduction;
	StringLiterals stringLiterals;
	CStrings cstrings;
	GetInput getInput;
	StringComparision stringComparision;
	StringsRevisited stringsRevisited;
	AccessValues accessValues;

	#pragma region Character Sets
	//-----------------------------------------------------------------------------------------------------
	// General information (no specific tasks):
	// MSDN: http://msdn.microsoft.com/en-us/library/06b9yaeb.aspx
	// ASCII: http://www.asciitable.com/
	// - physical character set:
	//   source file characters
	// - source character set (see http://msdn.microsoft.com/en-us/library/6aw8xdf2.aspx)
	//   o compile-time character set mapped from physical character set
	//   o implementation defined 
	//   o sp, htab, vtab, ff, nl, kb chars 
	// - execution character set:
	//   o runtime char set
	//   o might differ from source char set
	// - basic execution character set
	//   o http://msdn.microsoft.com/en-us/library/6aw8xdf2.aspx
	//   o source char set + alert, bs, cr, null
	//-----------------------------------------------------------------------------------------------------
	#pragma endregion

	#pragma region Values
	//-----------------------------------------------------------------------------------------------------
	// General Information on types:
	// Simple types:     http://msdn.microsoft.com/en-us/library/94c51wfd.aspx
	// Literals:         http://msdn.microsoft.com/en-us/library/c70dax92.aspx
	// NaN:              http://msdn.microsoft.com/en-us/library/w22adx1s.aspx
	// Numerical limits: http://msdn.microsoft.com/en-us/library/d4zh6te4.aspx
	// Integer:          http://msdn.microsoft.com/en-us/library/00a1awxf.aspx
	// Character:        http://msdn.microsoft.com/en-us/library/6aw8xdf2.aspx
	// Floating Point:   http://msdn.microsoft.com/en-us/library/tfh6f0w2.aspx
	// String:           http://msdn.microsoft.com/en-us/library/69ze775t.aspx
	// see also unions:  http://msdn.microsoft.com/en-us/library/5dxy4b7b%28v=VS.100%29.aspx
	//-----------------------------------------------------------------------------------------------------
	#pragma endregion

	#pragma region Sizes
	
	sizes.TestSizes();
	#pragma endregion

	#pragma region Character literals
	
	//characterLiterals.TestCharacterLiterals();
	#pragma endregion

	#pragma region Casting Introduction
	
	//castingIntroduction.TestCastingIntroduction();
	#pragma endregion

	#pragma region String literals
	//-----------------------------------------------------------------------------------------------------
	// From http://msdn.microsoft.com/en-us/library/69ze775t.aspx:
	/*
		A string literal consists of zero or more characters from the source character 
		set surrounded by double quotation marks ("). A string literal represents a 
		sequence of characters that, taken together, form a null-terminated string.
		String literals may contain any graphic character from the source character 
		set except the double quotation mark ("), backslash (\), or newline character. 
		They may contain the same escape sequences described in C++ Character Constants.
		C++ strings have these types:
		- Array of char[n], where n is the length of the string (in characters) plus 1 
		  for the terminating '\0' that marks the end of the string
		- Array of wchar_t, for wide-character strings
	*/

	
	//stringLiterals.TestStringLiterals();

	//-----------------------------------------------------------------------------------------------------
	//see also http://msdn.microsoft.com/en-us/library/h1x0y282.aspx and 
	//         http://www.cplusplus.com/reference/clibrary/cstring/strcat/ and
	//         http://msdn.microsoft.com/en-us/library/d45bbxx4.aspx and
	//         http://msdn.microsoft.com/en-us/library/tbyd7s1y.aspx
	//-----------------------------------------------------------------------------------------------------
	#pragma endregion

	#pragma region C-strings
	//-----------------------------------------------------------------------------------------------------
	// INFORMATION
	// help:
	// - MSDN: http://msdn.microsoft.com/en-us/library/69ze775t.aspx
	// - tutorial: http://www.cprogramming.com/tutorial/lesson9.html
	// libraries:
	// <cstring> (C): 
	//   http://msdn.microsoft.com/en-us/library/tk97t156.aspx
	//   http://www.cplusplus.com/reference/clibrary/cstring/
	// string.h (C++): 
	//   http://msdn.microsoft.com/en-us/library/hd5zecz6.aspx
	//   http://msdn.microsoft.com/en-us/library/xabz5s9c.aspx
	// In C: a string is an array of null-terminated characters
	// ex) {'a','b','c','\0'}
	//     the \0 does NOT print but adds 1 to length!
	//     all string literals are c-strings (http://msdn.microsoft.com/en-us/library/69ze775t.aspx)
	// ex) char s[4] = {'a','b','c','\0'};
	//     note how size (4) must be char count+1 (to include \0)
		
	//cstrings.TestCStrings();

	#pragma endregion

	#pragma region Converting between string types
	//-----------------------------------------------------------------------------------------------------
	// http://msdn.microsoft.com/en-us/library/ms235631.aspx
	// http://msdn.microsoft.com/en-us/library/3372cxcy.aspx
	// demonstrate converting between string and c-strings
	//-----------------------------------------------------------------------------------------------------
	#pragma endregion

	#pragma region Get Input	
	//getInput.TestGetInput();
	#pragma endregion

	#pragma region Data Conversion
	//-----------------------------------------------------------------------------------------------------
	// http://msdn.microsoft.com/en-us/library/0heszx3w.aspx
	// see also http://msdn.microsoft.com/en-us/library/ee404875.aspx
	// advice: http://www.parashift.com/c++-faq-lite/misc-technical-issues.html
	//-----------------------------------------------------------------------------------------------------
	// prompt the user for a C++ string and convert to int
	// prompt the user for a c-string and convert to int (http://msdn.microsoft.com/en-us/library/yd5xkb5c.aspx)
	//how do you convert a number to a string via stringstream (which is in sstream.h)?
	// (eg, http://www.parashift.com/c++-faq-lite/misc-technical-issues.html#faq-39.1)
	// One solution: see the "Advanced User Input" from Day 1 notes
	//-----------------------------------------------------------------------------------------------------
	#pragma endregion

	#pragma region String comparison	
	//stringComparision.TestStringComparision();
	#pragma endregion
	
	#pragma region More C-String functions
	//-----------------------------------------------------------------------------------------------------
	// see http://msdn.microsoft.com/en-us/library/tk97t156.aspx
    // and http://www.cplusplus.com/reference/clibrary/cstring/
	//demo each of these
	//strcpy
	//strcat
	//-----------------------------------------------------------------------------------------------------
	#pragma endregion

	#pragma region Creating C++ strings (revisited)	
	
	//stringsRevisited.TestStringsRevisited();

	#pragma endregion

	#pragma region C++ string access values
	
	
	//accessValues.TestAccessValues();

	#pragma endregion

	#pragma region More C++ string functions
	//-----------------------------------------------------------------------------------------------------
	// see http://msdn.microsoft.com/en-us/library/5zz6weyz.aspx (basic_string)
	// and http://msdn.microsoft.com/en-us/library/xabz5s9c.aspx (string)
	//-----------------------------------------------------------------------------------------------------
	//demo each of these:
	//size
	//capacity
	//find
	//what happens if you exceed the capacity on these?
	//insert
	//replace
	//append
	//-----------------------------------------------------------------------------------------------------
	#pragma endregion

getchar();
}
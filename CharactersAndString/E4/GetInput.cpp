#include "Headers.h"


void GetInput::TestGetInput() {
	//-----------------------------------------------------------------------------------------------------
	// See Table 7.1 (Liang)
	// See also "Advanced User Input" example on myCourses
	// iostream:    http://msdn.microsoft.com/en-us/library/zh80x809.aspx
	// programming: http://msdn.microsoft.com/en-us/library/22z6066f.aspx
	// conventions: http://msdn.microsoft.com/en-us/library/8e9dt98w.aspx
	//-----------------------------------------------------------------------------------------------------
	// get a c-string:
	 char t1[50];                          // store user response; what if exceed 50?
	 cout << "Enter your name: ";          //
	 cin.getline(t1,50,'\n');              //
	 cout << "You entered " << t1 << endl; //
	//-----------------------------------------------------------------------------------------------------
	// get a C++ string:
	 string t2;                            //
	 cout << "Enter your name: ";          //
	 cin >> t2;                            //
	 cout << "You entered " << t2 << endl; //
	//-----------------------------------------------------------------------------------------------------
	// another way to get a C++ string:
	 string t3;                            //
	 cout << "Enter your name: ";          //
	 getline(cin,t3);                      //
	 cout << "You entered " << t3 << endl; //
	//-----------------------------------------------------------------------------------------------------
}
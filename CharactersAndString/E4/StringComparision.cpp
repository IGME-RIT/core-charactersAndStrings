#include "Headers.h"

void StringComparision::TestStringComparision() {
	//-----------------------------------------------------------------------------------------------------
	// http://www.cplusplus.com/reference/string/string/compare/
	// http://msdn.microsoft.com/en-us/library/ec100fs2.aspx
	//-----------------------------------------------------------------------------------------------------
	string u = "abc";                  //
	char v[] = {'a','b','c','\0'};     //
	char w[] = {'a','b','c','\0'};     // 
	//cout << u==v << endl;              //
	//cout << v==w << endl;              //
	//cout << strcmp(u,v) << endl;       //
	cout << strcmp("abc",v) << endl;   //
	cout << strcmp(v,w) << endl;       //
	string x = "abc";                  //
	string y = "def";                  //
	//cout << x==y << endl;              //
	cout << x.compare(y) << endl;      //
	//-----------------------------------------------------------------------------------------------------
}
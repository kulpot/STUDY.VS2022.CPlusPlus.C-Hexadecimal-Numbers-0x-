#include <iostream>
using std::cout;
using std::endl;

// --------------------- C++ Hexadecimal Numbers (0x) ----------------------------------------
//ref link:https://www.youtube.com/watch?v=XcGIE3LOwLY&list=PLRwVmtr-pp043Ah3GxAqNyoMGyo3_LDNh

void main()
{
	//int value = 195;	// decimal - compiler does extrawork for binary convertion
	//cout << value << endl;
	//cout << std::hex << value << endl;		// output: C3
	
	int value = 0xC3;	// hexadecimal	- you can use hexadecimal value into code
	cout << value << endl;		//output: 195
	cout << std::hex << value << endl;		// output: C3
}
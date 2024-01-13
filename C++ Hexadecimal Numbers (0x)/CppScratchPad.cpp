#include <iostream>
using std::cout;
using std::endl;

// --------------------- C++ Hexadecimal Numbers (0x) ----------------------------------------
//ref link:https://www.youtube.com/watch?v=XcGIE3LOwLY&list=PLRwVmtr-pp043Ah3GxAqNyoMGyo3_LDNh

void main()
{
	int value = 195;
	cout << value << endl;
	cout << std::hex << value << endl;		// output: C3
}
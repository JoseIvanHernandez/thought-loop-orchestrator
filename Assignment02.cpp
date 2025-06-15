// IC02 Assignment Primitive Data Types
#include <iostream>
using namespace std;

int main() {
	cout << "bool:         " << sizeof(bool)        << " bytes.\n"
		 << "int:          " << sizeof(int)         << " bytes.\n"
		 << "double:       " << sizeof(double)      << " bytes.\n"
		 << "char:         " << sizeof(char)        << " bytes.\n"
		 << "short:        " << sizeof(short)       << " bytes.\n"
		 << "long:         " << sizeof(long)        << " bytes.\n"
		 << "long long:    " << sizeof(long long)   << " bytes.\n"
		 << "float:        " << sizeof(float)       << " bytes.\n"
	     << "long double:  " << sizeof(long double) << " bytes.\n";
	return 0;
}
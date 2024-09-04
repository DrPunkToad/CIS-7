#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 60; // 60 = 0011 1100
    unsigned int b = 13; // 13 = 0000 1101
    int result = 0;
	
    result = a & b; 	// 12 = 0000 1100
    cout << "Result of A%B is : " << result << endl;
	
    result = a | b; 	// 61 = 0011 1101
    cout << "Result of A|B is: " << result << endl;

    result = a ^ b;     // 49 = 0011 0001
    cout << "Result of A^B is: " << result << endl;

    result = ~a;        //-61 1100 0011
    cout << "Result of ~A is: " << result << endl;

    result = ~(a & b);      // -13 = 1111 0011
    cout << "Result of A~&B is: " << result << endl;
	
    result = ~(a | b);      // -62 = 1100 0010
    cout << "Result of A~|B is: " << result << endl;

    result = a << 2;     // 240 = 1111 0000
    cout << "Result of A<<2 is: " << result << endl;

    result = a >> 2;    //15 = 0000 1111
    cout << "Result of A>>2 is: " << result << endl;

    return 0; 
}
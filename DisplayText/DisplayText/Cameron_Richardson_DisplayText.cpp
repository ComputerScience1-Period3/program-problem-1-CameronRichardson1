/*
Cameorn Richardson - 9/21/2017
Assignment Name : Display Text
*/
// Libraries
#include <iostream> //gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit () and gtech() for pause()
// Namespaces
using namespace std;
//Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
		_getch();
	cout << '\n';
}
//MAIN
void main() {
	int x = l;
	cout << "he" << x << x "o Wor" << x << "d" << endl; //Display Text
		pause(); // pauses to see displayed text
}
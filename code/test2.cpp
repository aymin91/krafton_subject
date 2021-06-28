#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	while (true) 
		if (_kbhit)
			cout << "Pressed Key :: " << (char)_getch() << endl;
}
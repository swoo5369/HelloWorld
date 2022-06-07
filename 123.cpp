#include <iostream>

using namespace std;

int main()

{
	int a = { 0 };

	cin >> a;

	switch (a)
	{
		case 1:
		case 2:
		case 3:
			cout << "x" << endl;
			break;
		default:
			cout << "o" << endl;
			break;
	}
}
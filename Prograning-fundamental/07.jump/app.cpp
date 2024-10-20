// C++ program to demonstrate the
// continue statement
#include <iostream>
using namespace std;

// Driver code
int main()
{
	for (int i = 1; i < 10; i++) {

		if (i == 5)
			continue;
		cout << i << " ";
	}
	return 0;
}

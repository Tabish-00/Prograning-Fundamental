// C++ program to illustrate the 3d array 
#include <iostream> 
using namespace std; 

int main() 
{ 

	int count = 0; 
	// declaring 3d array 
	int x[2][2][3]; 

	// initializing the array 
	for (int i = 0; i < 2; i++) { 
		for (int j = 0; j < 2; j++) { 
			for (int k = 0; k < 3; k++) { 
				x[i][j][k] = count; 
				count++; 
			} 
		} 
	} 

	// printing the array 
	for (int i = 0; i < 2; i++) { 
		for (int j = 0; j < 2; j++) { 
			for (int k = 0; k < 3; k++) { 
				printf("x[%d][%d][%d] = %d \n", i, j, k, 
					x[i][j][k]); 
				count++; 
			} 
		} 
	} 

	return 0; 
}

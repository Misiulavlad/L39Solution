#include <iostream>
using namespace std;
void init_random(int* arr, int size);
string convert(int* arr, int size);
#define SIZE 10
int main() {
	                                                                                                            
	int arr[SIZE];
	init_random(arr, SIZE);
	cout << convert(arr, SIZE);

	return 0;
} 
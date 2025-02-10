#include <iostream>
#include <string>
using namespace std;
void init_random(int* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}
}

string convert(int* arr, int size) {
	string s = "";
	init_random(arr, size);
	for (int i = 0; i < size; i++) {
		s += to_string(arr[i])+" ";
	}
	return s;
}
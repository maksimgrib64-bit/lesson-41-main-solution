#include <iostream>
#include "logic.h"
using namespace std;
int main() {
	int sequence_number;
	cout << "Input sequence_number:";
	cin >> sequence_number;
	int result = find_number(sequence_number);
	cout << result << endl;

	return 0;
}
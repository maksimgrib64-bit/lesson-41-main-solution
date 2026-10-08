#include "test.h"
void test(int x, int n, int expected, string test_name) {
	int actual = find_amount( x,  n);
	string msg = test_name + "-->";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;
}




void run_all_tests() {
	test(10,10,);
}
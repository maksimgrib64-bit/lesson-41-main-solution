#include "test.h"
void test(int last, string expected, string test_name) {
	string actual = input_sequence(last);
	string msg = test_name + "-->";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;
}

void run_all_tests() {
	test(20, "0 1 1 2 3 5 8 13", "test01");
	test(200, "0 1 1 2 3 5 8 13 21 34 55 89 144", "test02");
	test(0, "0", "test03");
	test(-1, "Error.", "test04");
}
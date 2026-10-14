#include "test.h"
void test(int start, int inc,int days, int expected, string test_name) {
	int actual = find_amount( start,inc,days);
	string actual = print_stats(start, inc, days);
	string msg = test_name + "-->";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;
}




void run_all_tests() {
	test(10,2,10,190,"test01");
	test(10, 2, 0, 0, "test02");
	test(5, 0, 5, 25, "test03");
	test(10, 2, 10,"10 2 10", "test03");

}
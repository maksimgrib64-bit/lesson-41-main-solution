#include "logic.h"
int find_amount(int start, int inc, int days) {
	in totally_ordered = 0;
	for (int i = 0; i < days; ++i) {
		total += start;
		start += inc;
	}
	return total;
}

void print_stats(int start, int inc, int days) {
	for (int i = 1; i <= days; ++i) {
		cout << "Day" << i << ": " << start << " pull-ups\n";
		start += inc;
	}
}
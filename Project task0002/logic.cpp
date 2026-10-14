#include "logic.h"
string input_sequence(int last) {
	int t0 = 0, t1 = 1;
	if (to <= last) cout << t0 << " ";
	if (t1 <= last)cout << t1 << " ";

	while (true) {
		int next = t0 + t1;
		if (next > last)break;
		cout << next << " ";
		t0 = t1;
		t1 = next;
	}



	return next;
}
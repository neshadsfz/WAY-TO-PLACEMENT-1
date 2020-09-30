#include <bits/stdc++.h>
using namespace std;
int countdigits(int num) {
	int count = 0;
	while (num > 0) {
		count += 1;
		num /= 10;
	}
	return count;
}
int count(int n) {
	int count1 = 0, x = n, i = 0;
	for (i = 2; i * i <= x; i++) {
		int count = 0;
		while (n > 0 and n % i == 0) {
			count += 1;
			n /= i;
		}
		if (count > 0) {
			count1 += countdigits(i);
			if (count > 1) {
				count1 += countdigits(count);
			}
		}
		if (n <= 0) break;
	}
	return count1;
}
int main() {
	int num;
	cin >> num;
	cout << count(num) << endl;
	if (countdigits(num) > count(num))
		cout << "yes\n";
	else
		cout << "no\n";
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	long int totalSum = 0;
	while (true) {
		getline(cin, s);
		if (s.empty()) break;
		char firstDigit, lastDigit;
		bool first = false;
		bool last = false;
		for (int i = 0; i < s.size(); ++i) {
			if (first == false && isdigit(s[i])) {
				first = true;
				firstDigit = s[i];
			}
			else if (isdigit(s[i])) {
				last = true;
				lastDigit = s[i];
			}
		}
		if (last == false) lastDigit = firstDigit;
		string fLDigit;
		fLDigit += firstDigit;
		fLDigit += lastDigit;
		totalSum += stoi(fLDigit);
	}
	cout << totalSum << endl;
	return 0;
}
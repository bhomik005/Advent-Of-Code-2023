#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int total = 0;
    while(true){
        getline(cin, input);
        if(input.empty()) break;
        char firstDigit = ' ';
        bool firstDigitFlag = false;
        bool lastDigitFlag = false;
        char lastDigit = ' ';
        // process the input
        for(int i = 0; i < input.length(); ++i) {
            if(isdigit(input[i])) {
                if(firstDigitFlag == false) {
                    firstDigit = input[i];
                    firstDigitFlag = true;
                }
                else {
                    lastDigit = input[i];
                    lastDigitFlag = true;
                }
            }
            if(lastDigitFlag == false) lastDigit = firstDigit;
        }
        string num = "";
        num += firstDigit;
        num += lastDigit;
        int val = stoi(num);
        total += val;
    }
    cout << total << "\n";
    return 0;
}

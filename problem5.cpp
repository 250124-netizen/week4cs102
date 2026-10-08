#include <iostream>
using namespace std;

int main() {
    char h1, h2, colon, m1, m2;
    cin >> h1 >> h2 >> colon >> m1 >> m2;

    int hours = 0;

    if (h1 == '?' && h2 == '?') {
        hours = 24;
    } else if (h1 == '?') {
        if (h2 <= '3') {
            hours = 3;
        } else {
            hours = 2;
        }
    } else if (h2 == '?') {
        if (h1 == '0' || h1 == '1') {
            hours = 10;
        } else if (h1 == '2') {
            hours = 4;
        }
    } else {
        int hour = (h1 - '0') * 10 + (h2 - '0');
        if (hour < 24) {
            hours = 1;
        }
    }

    int minutes = 0;

    if (m1 == '?') {
        minutes = 6;
    } else if (m1 <= '5') {
        minutes = 1;
    }

    if (m2 == '?') {
        minutes *= 10;
    }

    cout << hours * minutes << '\n';
    return 0;
}
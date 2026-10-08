#include <iostream>
using namespace std;

int main() {
  int num;
    cin >> num;
    if (num == 0) {
        cout << 0 << endl;
   }
    else if (num % 9 == 0) {
        cout << 9 << endl;
    }
    else {
      cout << num % 9 << endl;
    }
    return 0;
}
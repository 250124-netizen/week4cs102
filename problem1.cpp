#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool perfect = (a==6)||(a==28)||(a==496)||(a==8128)||(a==33550336);
    if (perfect) {
        cout << ("True");
    }
    else {
        cout<<("False");
    }
    return 0;
}

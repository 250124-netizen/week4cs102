#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b>c or b>a && b<c) {
        cout<<b;
    }
    else if(a>c && c>b or c<a && b>c) {
        cout<<c;
    }
    else if(b>a && a>c or a>b && c>a) {
        cout<<a;
    }
    else {
        cout<<"Error";
    }
    return 0;
}

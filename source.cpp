#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a+b>c && a+c>b && b+c>a) {
        cout << 0;
        return 0;
    }

    if (a>=b && a>=c)
        cout << abs(a+1-b-c);
    else if (b>=a && b>=c)
        cout << abs(b+1-a-c);
    else if(c>=a && c>=b)
        cout << abs(c+1-a-b);
    return 0;
}
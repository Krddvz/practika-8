#include <iostream>
using namespace std;

long long f(long long b, long long e) {
    long long r = 1;
    while (e > 0) {
        if (e % 2 == 1) r = r * b;
        b = b * b;
        e = e / 2;
    }
    return r;
}

int main() {
    long long a, n;

    cin >> a >> n;
    cout << f(a, n) << endl;
    cout<<"Георгян Даниэль"<<endl;

    return 0;
}
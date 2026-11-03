#include <iostream>
using namespace std;

void h(int n, int f, int t, int v) {
    if (n == 0) {
        return;
    }
    h(n - 1, f, v, t);
    cout << "ингредиент " << n << " перейти от " << f << " k " << t <<endl;
    h(n - 1, v, t, f);
}

int main() {
    int n;
    cin >> n;
    h(n, 1, 3, 2);
    cout<<"Георгян Даниэль"<<endl;
    return 0;
}
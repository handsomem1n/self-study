#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long prod = 1;
        cin >> n;

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            if (x<10) {
                prod*= x;
                }
            else if(x>=10) {
                int digit = x % 10;
                prod *= digit;
            } 
    }
            cout << prod % 10 << endl;
            }
            return 0;
}

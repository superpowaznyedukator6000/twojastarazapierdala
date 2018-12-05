#include <iostream>

using namespace std;

int a(0), x;

int main()
{
    cin >> x;
    for(int i=2; i<=x+2; i++) {
        bool lp = true;
        for(int j=2; j<=i/2; j++) {
            if(i%j==0) {
                lp = false;
                break;
            }
        }
        if(lp==true) {
            if(a==0) {
                a = i;
            } else {
                if(i-a==2) {
                    cout << "(" << a << ", " << i << ")" << endl;
                } else {
                    a = i;
                }
            }
        }
    }
    return 0;
}

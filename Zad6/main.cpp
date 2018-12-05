#include <iostream>

using namespace std;

int a(0), x, s(0), b(0);

int main()
{
    cout << "Podaj liczbe: ";
    cin >> x;
    for(int i=2; i<=x; i++) {
        bool lp = true;
        for(int j=2; j<=i/2; j++) {
            if(i%j==0) {
                lp = false;
                break;
            }
        }
        if(lp==true) {
            s=s+i;
            if(s>x) {
                cout << b;
                break;
            } else {
                b++;
            }
        }
    }
    return 0;
}

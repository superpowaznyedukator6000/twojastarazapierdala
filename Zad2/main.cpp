#include <iostream>

using namespace std;

const int n = 15;
int tab[n];
int i = 0;
int x;


int main()
{

    cin >> x;

    while(x>0) {
        if(x%2==0) {
            tab[i]=0;
            i++;
            x = x/2;
        } else {
            tab[i]=1;
            i++;
            x = x/2;
        }
    }

    cout << "binarna reprezentacja liczby posiada " << i;
    if(i>5) {
        cout << " cyfr" << endl;
    } else {
        cout << " cyfry" << endl;
    }

    return 0;
}

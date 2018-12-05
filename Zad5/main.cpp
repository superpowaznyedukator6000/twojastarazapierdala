#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int n = 10;
    int tab[n];
    int b=0;
    srand(time(NULL));
    for(int i=0; i<n; i++) {
        tab[i]=rand() % 99 + 1;
        //cout << i+1 << ": " << tab[i] << endl;
    }

    for(int j=n-1; j>0; j--) {
        for(int i=0; i<j; i++) {
            if(tab[i]%2==0) {
                swap(tab[i], tab[j]);
            }
        }
    }

    for(int i=0; i<n; i++) {
        if(tab[i]%2==0) {
            b = i-1;
            break;
        }
    }

    for(int j=b; j>0; j--) {
        for(int i=0; i<j; i++)  {
            if(tab[i]>tab[i+1]) {
                swap(tab[i], tab[i+1]);
            }
        }
    }
    for(int j=n-1; j>0; j--) {
        for(int i=b+1; i<j; i++)  {
            if(tab[i]<tab[i+1]) {
                swap(tab[i], tab[i+1]);
            }
        }
    }


    for(int i=0; i<n; i++) {
    //    tab[i]=rand() % 99 + 1;
        cout << i << ": " << tab[i] << endl;
    }

    return 0;
}

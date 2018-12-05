#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int n = 100;
    int tab[n];
    srand(time(NULL));
    for(int i=0; i<n; i++) {
        tab[i]=rand() % 99 + 1;
        //cout << i+1 << ": " << tab[i] << endl;
    }

    for(int j=n-1; j>0; j--) {
        for(int i=0; i<j; i++)  {
            if(tab[i]>tab[i+1]) {
                swap(tab[i], tab[i+1]);
            }
        }
    }

    /*for(int i=0; i<n; i++) {
        cout << i+1 << ": " << tab[i] << endl;
    }*/

    for(int i=0; i<n; i++) {
        if(tab[i]!=tab[i-1]){
            cout << i+1 << ": " << tab[i] << endl;
        }
    }


    return 0;
}

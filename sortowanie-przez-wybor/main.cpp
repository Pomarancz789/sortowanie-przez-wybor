#include <iostream>
using namespace std;

void zamiana(int &x, int &y)
{
    int temp=0;
    
    temp=x;
    x=y;
    y=temp;
}

void wypisywanie_tablicy(int tab[], int n)
{
    for (int z=0; z<n; z++)
    {
        cout << tab[z] <<endl;
    }
}

int main() {
    int tab[7]={6,4,7,8,2,0,1};
    
    for (int i=0; i<7; i++) {
        int min=99999999;
        int indexmin=0;
        for (int j=i; j<7; j++) {
            if (tab[j]<min) {
                min=tab[j];
                indexmin=j;
            }
        }
        zamiana(tab[i], tab[indexmin]);
    }
    
    wypisywanie_tablicy(tab, 7);
    
    return 0;
}

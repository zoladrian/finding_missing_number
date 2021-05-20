/*Podana jest tablica A składająca się z N różnych liczb całkowitych. Tablica zawiera liczby całkowite z zakresu [1 .. (N + 1)], co oznacza, że brakuje dokładnie jednego elementu. 
Napisać funkcję znajdującą ten element. 
*/

#include <iostream>
using namespace std;
const int N = 6;

int main()
{
    int x = 0;
    int A[N];
    A[0] = 1; A[1] = 2; A[2] = 3; A[3] = 4; A[4] = 5; A[5] = 6; A[6] = 8; //ustalenie tablicy z brakiem elementu o wartosci 7

    for (int i = 0; i <= N; i++)
    {
        x++;
        if (A[i] != x) {
            cout << "nie zgodnosc znajduje sie pomiedzy " << i << " a " << i - 1 << " indeksem i wynosi " << x;
        }

    }
}

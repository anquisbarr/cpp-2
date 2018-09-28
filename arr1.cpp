#include <iostream>
#include <ctime>

using namespace std;
void llenaValoresAleatorios(int a[], int n);

int main() {
    int n;
    cout << "ingrese n:";
    cin >> n;
    int arrInt[n];
    llenaValoresAleatorios(arrInt, n);
    return 0;
}

void llenaValoresAleatorios(int a[], int n) {
    srand(time(nullptr));
    for (int i=0; i<n;i++)
        a[i] = rand()%100;
}

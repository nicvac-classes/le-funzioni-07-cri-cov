#include <iostream>
using namespace std;

void ordinavettore(int n, int v[]);

void visualizzaconpos(int n, int v[]);

void visualizzavettore(int n, int v[]);

int main() {
    int n;

    cout << "quanti numeri generare?" << endl;
    cin >> n;
    int v[n], w[n];

    riempivettore(n, v);
    riempivettore(n, w);
    cout << "ricerca del valore maggiore del vettore v..." << endl;
    trovamax(n, v);
    cout << "ricerca del valore maggiore del vettore w..." << endl;
    trovamax(n, w);
    cout << "contenuto del vettore v" << endl;
    visualizzavettore(n, v);
    cout << "contenuto del vettore w" << endl;
    visualizaconpos(n, w);
    cout << "contenuto del vettore v in ordine crescente" << endl;
    ordinavettore(n, v);
    visualizzavettore(n, v);
    cout << "contenuto del vettore w in ordine crescente" << endl;
    ordinavettore(n, w);
    visualizzaconpos(n, w);
    return 0;
}

void ordinavettore(int n, int v[]) {
    int i, j, t;
    bool scambio;

    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - 1) {
            if (v[j] > v[j + 1]) {
                scambio = true;
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
}

void visualizzaconpos(int n, int v[]) {
    int i;

    i = 0;
    while (i < n) {
        cout << "posizione " << i << ":" << v[i] << endl;
        i = i + 1;
    }
}

void visualizzavettore(int n, int v[]) {
    int i;

    i = 0;
    while (i < n) {
        cout << v[i] << endl;
        i = i + 1;
    }
}


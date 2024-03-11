#include<iostream>
#include<fstream>
#include<string>

#define col 20

using namespace std;

void creaFicheroMatriz(string fichero, double A[][col], int m) {
    ofstream archivo(fichero.c_str());
    archivo << "Matriz" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            archivo << "\t" << A[i][j];
        }
        archivo << endl;
    }
    archivo.close();
}

int leeFicheroMatriz(string fichero, double A[][col]) {
    ifstream archivo(fichero.c_str());
    if (!archivo.is_open()) {
        return -1; // si no hay archivo
    }
    int m;
    archivo >> m;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            archivo >> A[i][j];
        }
    }
    archivo.close();
    return m;
}

int main() {
    double A[2][col] = {{1, 2}, {4, 5}};
    int m = 2;
    creaFicheroMatriz("matA.txt", A, m);
    
    return 0;
}

#include<iostream>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int indMax;

void impArreglo(double A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << ",";
    }
    cout << endl;

}

void leaArreglo(double A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "d_" << i << " ";
        cin >> A[i];
    }
}

double maximo(double A[], int n) {
    indMax = 0;
    double maximo = A[0];
    int i=1;
    while(i<n){
        if(A[i]>=maximo){
            maximo = A[i]; indMax=i;
        }
        i++;
    }
    return maximo;
}

int main() {
    int n;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    double B[n];
    leaArreglo(B, n);
    double s = 0;
    for (int i = 0; i < n; i++)
        s += B[i];
    impArreglo(B, n);
    cout << "Resultado: " << s << endl;

    cout<<"el max es d[" <<indMax <<"] = "<<maximo(B,n)<<endl;
    return 0;


    //ejer
    double C[6] = {3.5, 5, 8, 2, 0, -3};
    double S = 0;
    for (int i = 0; i < 6; i++)
      S += C[i];

    if (S < 10) {
      cout << "bajo" << endl;
    } else if (S >= 10 && S < 12) {
      cout << "medio" << endl;
    } else {
      cout << "alto" << endl;
}
    //ejerfin


} //i want to get free...

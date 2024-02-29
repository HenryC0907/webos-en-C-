#include<iostream>
#include<cstring>
#include<math.h>

#define col 30

using namespace std;

void impArreglo(int A[],int n) {
    for (int i = 0; i < n; i++)
        cout << A[i] << " , ";
    cout << endl;
}

void leerMat(int A[][col], int m, int n){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
            cout<<endl;
        }
    }
}

void impMat(int A[][col], int m, int n){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int eras(int P[],int n){
    int A[n+1];
    for (int i = 0; i < n; i++)
        A[i] = i;
    for (int p = 2; p <= (n / 2); p++)
        for (int k = 2; k <= (n / p); k++)
            A[p * k] = 0;
    int t = 0;
    for (int i = 2; i < n; i++)
        if (A[i] != 0) {
            P[t] = A[i];
            t++;
        }
    return t;
}

int main() {
    int n=1000;
    int m; //dimensión
    cout<<"Dimensión: ";cin>>m; 
    int P[n];
    int A[m][col];
    int t=eras(P,n);
    //cout<<t<<endl;
    //impArreglo(P,t);
    int k=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<m;j++){
            A[i][j] =P[k];k++;
        }
    impMat(A,m,m);
}

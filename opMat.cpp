#include<iostream>
#include<cstring>
#include<math.h>

#define col 30

using namespace std;

void impArreglo(int A[],int n) {
    for (int i = 0; i < n; i++)
        cout << A[i] << "\t";
    cout << endl;
    cout <<"-----------------------";
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

void sumMat(int A[][col], int B[][col], int n, int m, int C[][col]) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}


void mulMat(int A[][col], int B[][col], int n, int m, int w, int C[][col]) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < w; k++) {
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += A[i][j] * B[j][k];
            }
            C[i][k] = sum;
        }
    }
}

void trMat(int A[][col], int n, int m){
  if (n==m){
    int tr=0;
    for (int i=0;i<n;i++)
      tr += A[i][i];
    cout<<A<<endl;
  }
}


int main() {
  int n, m, w, a;
  int a1,a2,b1,b2;

  cout<<"a1=";cin>>a1;
  cout<<"a2=";cin>>a2;
  cout<<"b1=";cin>>b1;
  cout<<"b2=";cin>>b2;

  int A[a1][col];
  int B[b1][col];
  int C[a1][col];
  
  leerMat(A,a1,a2);
  impMat(A,a1,a2);
  leerMat(B,b1,b2);
  impMat(B,b1,b2);

  cout<<endl;
  
  //sumMat(A,B,a1,a2,C);
  mulMat(A,B,a1,a2,b2,C);
  impMat(C,a1,b2);
  
  return 0;
}

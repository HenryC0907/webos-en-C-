#include<iostream>
#include<iomanip>
#include<locale.h>
using namespace std;

int fibIterado(int N){
  int a = 0;
  int b = 1;
  int i = 0;
  int t; 
  while (i<N){
    t = b;
    b = a+b;
    a = t;
    i++;
  }
  return a;
}

int fibRecursivo(int N){
  switch(N)
  {
    case  0:  
      return  0;
    case  1:  
      return  1;
    default:  
      return fibRecursivo(N-1) + fibRecursivo(N-2);
  }
}

int main(){
  int N;

  cout<< "Hallar Fib(N)"<<endl;
  cout<< "Ingrese N: ";
  cin >> N;

  cout<<"De forma Iterativa: "<< fibIterado(N) << endl;
  cout<<"De forma Recursiva: "<< fibRecursivo(N) << endl;
}

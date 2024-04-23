#include<iostream>
#include<cstring>
#include<math.h>

#define col 30

using namespace std;


double f(double x){
  return exp(x)+x; //f(x) = e^{x}+x
}

double df(double x){
  return exp(x)+1; // f'(x)
}

void biseccion(double a, double b, double p){
  double tol=0.01;
  cout.precision(10);
  int i=1, tope=1000;

  if (f(a)*f(b)<0){
    while (i<=tope){
      p = (a+b)/2;
      cout<<i<<"\t"<<p<<endl;
      if (abs(a-p)<tol){
	cout<<endl;
	cout<<"Raiz de f: "<<p<<endl;
	break;
      }
      else{
	if (f(a)*f(p)<0)
	  b=p;
	else
	  a=p;
      }
      i++;
    }
  }
}


void newton(double x0,double p){
  double tol=0.01;
  cout.precision(10);
  int i=1, tope=1000;

  while (i<=tope){
    if (df(x0) != 0){
      p= x0 - (f(x0)/df(x0));
      if (fabs(p-x0)< tol){
        cout<<"Raiz de f: "<<p<<endl;
        x0=p;  
        break;
      }else
        x0=p;  
    }
    else
      cout<<"Paila mano"<<endl;
  }
}


int main(){
  double a=-1;
  double b= 0;
  double r;
  biseccion(a,b,r);
  newton(0,r);
}

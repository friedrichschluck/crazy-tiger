#include <iostream>
#include "Timer.hxx"

using namespace std;

int main(){

  cout << "boom2222" << endl;  
  Timer T;
  cout << "ich will auch mitarbeiten!!" << endl;
  const int N=16384*512;
  
  double* a=new double[N];
  double* b=new double[N];
  double* c=new double[N];
  double* A=new double[3*N];
  double* B=new double[6*N];
  
  T.start();
  
  for(int i=0;i<N; i++)
  {
    a[i] = b[i] * c[i];    
  }
  
  T.stop();
  cout << "T1 = " << T.getTime() << endl;
  
  
  T.reset();
  T.start();
  
  for(int i=0; i<3*N; i+=3){
    A[i+2] = A[i+1]*A[i];
  }
  T.stop();
  cout << "T2 = " << T.getTime() << endl;


 return 0;
}

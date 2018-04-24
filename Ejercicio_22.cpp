#include <iostream>
#include <cmath>

//inicializa la funcion

double value(float x);

double value(float x){
  double u = 1.0, c = 0.1;
  if(x==0 || x==2){
    return 0;}
    
  else { return exp(-0.5*(pow (x-u,2))/pow (c,2));}}


int main(){
    
    float x = 0, dx = 0.001; int N = (2.0+dx)/dx;
    for(int i = 0; i < N; i++){
        
        std::cout  << x << "    " << value(x) << std::endl;
        x = x + dx;}}


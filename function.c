#include <stdio.h>
float f(float x) {
  return 1/(25*x*x + 1);
}
void main(void){
  int a, b, n;
  a = -1;
  b = 1;
  n = 5;
  float x[5];
  float y[5];
  x[0] = a;
  y[0] = f(x[0]);
  float h = (b - a)/(n - 1);
  h = 0.25;
  for (int i = 1; i < n - 1; i++)
  {
    x[i] = x[i - 1] + h;
    y[i] = f(x[i]);
  }
  x[n-1] = b;
  y[n-1] = f(x[n-1]);
  
  for(int i = 0; i < 5; i++)
  {
    printf("%f %f", x[i], y[i]);
  }
}

#include <stdio.h>
void calculate(int a, int b, int c, int *sum, float *average);

void calculate(int a, int b, int c, int *sum, float *average)
{
   *sum = a + b + c;
   *average = (a + b + c) / 3.0;
}

int main()
{
   int a = 3;
   int b = 5;
   int c = 7;
   int sum;
   float average;

   calculate(a, b, c, &sum, &average);

   printf("find the sum no=%d\n", sum);
   printf("find the average no=%f\n", average);

   return 0;
}

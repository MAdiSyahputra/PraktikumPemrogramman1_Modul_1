#include <stdio.h>
#include <math.h>
int main ()
{
    float a=5;
    float t=12;
    float A=a;
    float B=sqrt(a*a+t*t);
    float C=t;
    float keliling=A+B+C;
    float luas=A*C/2;
    printf("Alas=%.0f cm\n", a);
    printf("Tinggi=%.0f cm\n", t);
    printf("Sisi A=%.0f cm\n", A);
    printf("Sisi B=%.0f cm\n", B);
    printf("Sisi C=%.0f cm\n", C);
    printf("Keliing=%.0f cm\n", keliling);
    printf("Luas=%.0f cm", luas);
}
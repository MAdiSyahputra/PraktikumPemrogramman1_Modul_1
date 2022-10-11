#include <stdio.h>
int main()
{
    float p,km,k,phi,r;
    p=5;
    km=14;
    k=km/p;
    phi=3.14;
    r=k/(2*phi);
    printf("Diketahui :\n");
    printf("Pak dengklek mengelilingi taman = %.0f putaran\n",p);
    printf("Jarak tempuh pak dengklek = %.0f kilometer\n",km);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi oleh pak dengklek adalah %.2f kilometer\n",r);
}
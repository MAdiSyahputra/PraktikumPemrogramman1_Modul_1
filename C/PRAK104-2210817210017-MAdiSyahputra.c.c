#include <stdio.h>
int main()
{
    int a,b,c,d;
    a=400000;
    b=350000;
    c= a-(0.13*a);
    d= b-(0.21*b);
printf("Harga sepatu A adalaah %d\n",a);
printf("Harga sepatu B adalaah %d\n",b);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",c);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n",d);
}
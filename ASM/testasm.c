#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void kiemtrasonguyen(){
    int x, i;
    int z;
    printf("Nhap so can kiem tra: \n");
    scanf("%f", &x);
    if((int)x == x){
        printf("%.f la so nguyen.\n",x);
    }
    for(i=2; i<x/2; i++){
        if(x%i == 0){
            z++;
            }
        }
        if(z==0){
            printf("%.f la so nguyen to.", x);
            }
    for(i=1; i*i < x; i++){
        if(i*i == x){
            z++;
            break;
            }

        }
        if(z == 1)
            printf("%.f la so chinh phuong.", x);
    else{
        printf("%.f khong phai so nguyen.", x);
    }
}


#include <stdio.h>
int main() {
    // mang mot chieu
    // int a[4];
    // for(int i=0;i<4;i++){
    // printf(" Nhap mang a[%d]: ",i);
    // scanf("%d", &a[i]);
    // }
    // for(int i=0;i<4;i++){
    //     printf("\n%d ",a[i]);
        // hoac printf(" Mang a bao gom %d \n, a[i]);
    // }
    // return 0;
    // mang 2 chieu
int b[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Nhap b[%d][%d]: ", i, j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMang 2 chieu hinh chu nhat:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d", b[i][j]);
        }
            printf("\n");
    }
    return 0;
}
#include <stdio.h>// Thư viện
int main(){
    int a,b;

    printf("\nNhap vao a va b: ");
    scanf("%d%d", &a, &b);
   
    int tong = a + b;
    int hieu = a - b;
 
    printf("tong cua 2 so: %d",tong);
    printf("hieu cua 2 so: %d",hieu);
    return 0;
}


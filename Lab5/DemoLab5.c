#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void Timgiatrimaxmin() {
    int a, b, c;
        printf("Nhap 3 so a, b, c: ");
        scanf("%d %d %d", &a, &b, &c);
        sqrt(a);
        printf("Can bac hai cua %d la %.2f\n",a, sqrt(a)) ;       
        double max, min;
        max = a;
        if(b>max) max = b;
        if(c>max) max = c;
            printf("So lon nhat trong 3 so la: %2.f\n", max);
        min = a;
        if(b<min) min = b;
        if(c<min) min = c;
            printf("So nho nhat trong 3 so la: %2.f\n", min);
}
void Tinhnamnhuan() {
    int sonam;
    printf("Nhap nam can kiem tra:");
    scanf("%d", &sonam);
    if (sonam %400 == 0 || (sonam%4 == 0 && sonam%100 != 0)){
        printf("%d la nam nhuan\n",sonam);
    }else{
        printf("%d khong la nam nhuan\n",sonam);
    }
}
void swap(){
int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);
    int temp;
        temp=a;
        a = b;
        b=temp;
        printf("a sau khi hoan vi la :%d\nb sau khi hoan vi la :%d\n",a,b);
}
int main() {
    int luachon;
    do {
        printf("________________________________________\n");
        printf("| WELCOME TO NGUYENQUOCVIET BAITAPLAB5 |\n");
        printf("----------------- Menu -----------------\n");
        printf("1. Tim gia tri max va min trong 3 so \n");
        printf("2. Xay dung ham tinh nam nhuan \n");
        printf("3. Xay dung ham hoan vi \n");
        printf("0. Thoat chuong trinh \n");
        printf(" Nhap lua chon cua ban: ");
        scanf("%d", &luachon);

        switch (luachon) {
        case 1: Timgiatrimaxmin();
            break;
        case 2: Tinhnamnhuan();
            break;
        case 3: swap();
            break;
        case 0: 
            printf("Thoat chuong trinh\n");
            exit(0);
        default:
            printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (luachon != 0);
    return 0;
}
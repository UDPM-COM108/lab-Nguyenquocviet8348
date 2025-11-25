#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    void tinhtbsochan () {
            int min, max;
            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);
            int i = min;
            float S = 0, a = 0, trungBinh = 0;
            while ( i <=max) {
                if ( i%2 == 0) {
                    S += i;
                    a++;
                }
                i++;
            } 
            if (a > 0) {
                        trungBinh = S / a;
                printf("Tong cac so chan = %.2f\n", S);
                printf("Co %.0f so chan\n", a);
                printf("Trung binh = %.2f\n", trungBinh);
            }
        }
    void kiemtrasnt () {
            int n, i, a=0;
            printf("Nhap n: ");
            scanf("%d", &n);
            for(i=2; i<n; i++){
            if (n%i==0)
                a++;
            }
            if (a==0){
                printf("%d la so nguyen to\n", n);
            }
            else {
                printf("%d khong phai la so nguyen to\n", n);
            }
        }
    void kiemtrascp () {
            int n, i;
            int a = 0;
            printf("Nhap n: ");
            scanf("%d", &n);
            for(i = 1;i*i <= n;i++){
                if (i*i == n) {
                    a = 1;
                    break;
                }    
            }
                if(a == 1) {
                    printf("%d la so chinh phuong\n", n);
                }
                else {
                    printf("%d khong phai la so chinh phuong\n", n);
            }
        }
    void chuyenstpsangnp() {
            int n, i = 0;
            int binary[32];
            printf("Nhap so thap phan: ");
            scanf("%d", &n);
                if (n == 0) {
                     printf("0");
                }
                while (n > 0) {
                    binary[i] = n % 2;
                    n = n / 2;
                    i++;
                }
                    printf("So nhi phan: ");
                for (int j = i - 1; j >= 0; j--) {
                    printf("%d ", binary[j]);
                }
                    printf("\n");
                
    }           

int main() {
    int luachon;
    do {
        printf("________________________________________\n");
        printf("| WELCOME TO NGUYENQUOCVIET BAITAPLAB4 |\n");
        printf("----------------- Menu -----------------\n");
        printf("1. Tinh trung binh tong cac so tu nhien chia het cho 2 \n");
        printf("2. Xac dinh so nguyen to \n");
        printf("3. xac dinh so chinh phuong \n");
        printf("4. Chuyen so thap phan sang nhi phan \n");
        printf("0. Thoat chuong trinh \n");
        printf(" Nhap lua chon cua ban: ");
        scanf("%d", &luachon);

        switch (luachon) {
        case 1: tinhtbsochan();
            break;
        case 2: kiemtrasnt();
            break;
        case 3: kiemtrascp();
            break;
        case 4: chuyenstpsangnp();
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

            
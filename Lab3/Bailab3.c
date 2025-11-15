#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int luachon;

    do {
        system("cls");
        printf("________________________________________\n");
        printf("| WELCOME TO NGUYENQUOCVIET BAITAPLAB3 |\n");
        printf("----------- Menu -----------\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac 1\n");
        printf("3. Giai phuong trinh bac 2\n");
        printf("4. Tinh tien dien\n");
        printf("0. Exit\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);

        switch (luachon) {
        case 1: {
            printf("Chuong trinh tinh hoc luc:\n");
            double dtb;
            printf("Nhap diem trung binh: ");
            scanf("%lf", &dtb);

            if (dtb >= 9)
                printf("Xuat sac\n");
            else if (dtb >= 8)
                printf("Gioi\n");
            else if (dtb >= 7)
                printf("Kha\n");
            else if (dtb >= 5)
                printf("Trung binh\n");
            else
                printf("Yeu\n");
            break;
        }

        case 2: {
            printf("Giai phuong trinh bac 1: ax + b = 0\n");
            float a, b;
            printf("Nhap a: "); scanf("%f", &a);
            printf("Nhap b: "); scanf("%f", &b);

            if (a == 0) {
                if (b == 0)
                    printf("Phuong trinh vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            } 
            else {
                float x = -b / a;
                printf("Nghiem x = %.2f\n", x);
            }
            break;
        }

        case 3: {
            printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0\n");
            float a, b, c;
            printf("Nhap a: "); scanf("%f", &a);
            printf("Nhap b: "); scanf("%f", &b);
            printf("Nhap c: "); scanf("%f", &c);

            float delta = b*b - 4*a*c;

            if (delta < 0)
                printf("Phuong trinh vo nghiem\n");
            else if (delta == 0) {
                float x = -b / (2*a);
                printf("Nghiem kep: x1 = x2 = %.2f\n", x);
            }
            else {
                float x1 = (-b + sqrt(delta)) / (2*a);
                float x2 = (-b - sqrt(delta)) / (2*a);
                printf("2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
            }
            break;
        }

        case 4: {
            printf("Chuong trinh tinh tien dien:\n");
            int sodien;
            printf("Nhap so dien: ");
            scanf("%d", &sodien);

            int tienthue;
            if (sodien <= 50)
                tienthue = sodien * 1000;
            else
                tienthue = 50 * 1000 + (sodien - 50) * 1200;

            printf("Tien dien: %d VND\n", tienthue);
            break;
        }

        case 0:
            printf("Thoat chuong trinh...\n");
            exit(0);

        default:
            printf("Lua chon khong hop le! Moi nhap lai\n");
            break;
        }

        system("pause");

    } while (luachon != 0);

    return 0;
}

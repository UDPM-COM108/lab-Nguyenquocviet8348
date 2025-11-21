#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int luachon;
    do {
        printf("________________________________________\n");
        printf("| WELCOME TO NGUYENQUOCVIET Assignment |\n");
        printf("----------- Menu -----------\n");
        printf("1. Chuc nang so 1: Kiem tra so nguyen \n");
        printf("2. Chuc nang so 2: Tim uoc chung va boi chung cua 2 so \n");
        printf("3. Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke \n");
        printf("4. Chuc nang so 4: Tinh tien dien \n");
        printf("5. Chuc nang so 5: Chuc nang doi tien \n");
        printf("6. Chuc nang so 6: Chuc nang tinh lai suat vay ngan hang vay tra gop \n");
        printf("7. Chuc nang so 7: Chuong trinh vay tien mua xe \n");
        printf("8. Chuc nang so 8: Sap xep thong tin sinh vien \n");
        printf("9. Chuc nang so 9: Xay dung game FPOLY-LOTT \n");
        printf("10. Chuc nang so 10: Chuong trinh tinh toan phan so \n");
        printf("0. Exit\n");
        printf(" Nhap lua chon cua ban: ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1:
                printf("Chuc nang so 1: Kiem tra so nguyen");
                printf("\nNhap vao so nguyen: ");
                break;
            case 2:
            printf("Chuc nang so 2: Tim uoc chung va boi chung cua 2 so");
                printf("\nnhap vao 2 so nguyen: ");
                break;
            case 3:
                printf("Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke"); 
                printf("\nNhap vao so gio hat: ");
                break;
            case 4: 
                printf("Chuc nang so 4: Tinh tien dien");
                printf("\nNhap vao so dien tieu thu: ");
                break;
            case 5:
                printf("Chuc nang so 5: Chuc nang doi tien"); 
                printf("\nNhap vao so tien can doi: ");
                break;
            case 6: 
                printf("Chuc nang so 6: Chuc nang tinh lai suat vay ngan hang vay tra gop");
                printf("\nNhap vao so tien can vay: ");
                break;
            case 7:
                printf("Chuc nang so 7: Chuong trinh vay tien mua xe"); 
                printf("\nNhap vao so tien can mua xe: ");
                break;
            case 8:
                printf("Chuc nang so 8: Sap xep thong tin sinh vien"); 
                printf("\nNhap vao ten sinh vien: ");
                break;
            case 9:
                printf("Chuc nang so 9: Xay dung game FPOLY-LOTT");     
                printf("\nWelcome to game FPOLY-LOTT!");
                break;
            case 10:
                printf("Chuc nang so 10: Chuong trinh tinh toan phan so"); 
                printf("\nNhap vao phan so: ");
                break;
            case 0: {
                printf("Thoat chuong trinh...\n");
                exit(0);
            default:
                printf("Lua chon khong hop le! Moi nhap lai\n");
                break;
            }
            
        }
    } while (luachon != 0);
    return 0;
}

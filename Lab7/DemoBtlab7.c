#include <stdio.h>
#include <string.h>

int main(){
    /*int tuoi;
    char str1[20], str2[20];
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    getchar(); //Xoá khoảng \n
    printf("Nhap chuoi 1: ");
    gets(str1);//bằng với scanf
    printf("Do dai chuoi 1: %d ", strlen(str1));// strlen(str1): độ dài chuỗi 1
    printf("\nNhap chuoi 2: ");
    gets(str2);
    printf("Do dai chuoi 2: %d \n",strlen(str2));
    /*
    if (stricmp(str1, str2) == 0){
        printf("Chuoi 1 bang chuoi 2");
    }
    else if (stricmp(str1, str2) > 0){
        printf("Chuoi 1 lon hon chuoi 2");
    }
    else{
        printf("Chuoi 1 nho hon chuoi 2");
    } * /
    // char str[20];
    // printf("Nhap chuoi: ");
    // gets(str);
    // printf("Chuoi da nhap : %s", str1);
    // printf("\nChuoi dao nguoc : %s", strrev(str1)); //hàm strrev để đảo ngược chuỗi
    // printf("\nChuoi chu thuong : %s", strlwr(str1));// hàm strlwr in chữ chữ thường
    // printf("\nChuoi chu hoa la: %s", strupr(str1));// hàm strupr in chữ hoa
    if(strstr(str1,str2) != NULL)// strstr tìm str2 trong str1
        printf("Tim thay");
    else{
        printf("Khong tim thay");
    }*/
   //Bài 1 lab 7
   void demnguyenamphuam(){
   char s[100];
   printf("Xin moi nhap chuoi:");
   gets(s);
   int i=0, n=0, p=0;
        while(s[i++] != '\0'){
            if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u'){
                n++;
            }else{
                p++;
            }
        }
        printf("Chuoi '%s' co chua : %d nguyen am va %d phu am.", s, n, p);  
   }
   void dangnhap(){
    char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;
    print("Ten dang nhap: ");
    gets(user);
    printf("Nhap mat khau :");
    scanf("%d", &pass);
    
   }
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// struct sinhvien{
//     int MaSV;
//     char hoten[50];
//     float diem;
// };
// void Sinhvien(){
//     struct sinhvien sv1,sv2;
//     printf("Nhap MSSV: ");
//     scanf("%d", &sv1.MaSV);
//     getchar();
//     printf("Nhap ho ten: ");
//     gets(sv1.hoten);
//     printf("Nhap diem: ");
//     scanf("%f", &sv1.diem);
//     printf("\nMaSV: %d - Ho ten: %s - Diem: %.2f", sv1.MaSV, sv1.hoten, sv1.diem);
// }
// struct nhanvien{
//     int MaNV;
//     char hoten[50];
//     int ngaycong;
// };
// void Nhanvien(){
//     struct nhanvien nv1, nv2;
//     printf("Nhap ma NV: ");
//     scanf("%d", &nv1.MaNV);
//     getchar();
//     printf("Nhap ho ten NV: ");
//     gets(nv1.hoten);
//     printf("Nhap ngay cong: ");
//     scanf("%d", &nv1.ngaycong);
//     printf("\nMaNV: %d - Ho ten: %s - Ngay cong: %d", nv1.MaNV, nv1.hoten, nv1.ngaycong);
// }

// int main() {
//     Nhanvien();
//     return 0;
// }

// struct SINHVIEN{
//     int MaSV;
//     char hoten[50];
//     float diem;
// };
// int main(){
// struct SINHVIEN sv1;
// struct SINHVIEN sv2={47790, "Viet", 10};
// struct SINHVIEN dssv[4]={
//     {49320, "Nguyen", 9},
//     {48537, "Thang", 9.5},
//     {49300, "Thangc",8},
//     {49023,"Vinh",7.5}
// };
// struct SINHVIEN SD21303[31];
// printf("MaSV: %d", sv2.MaSV);
// printf("\nHo ten: %s", sv2.hoten);
// printf("\nDiem: %.2f", sv2.diem);
// return 0;
// }
struct SINHVIEN{
    int MaSV;
    char hoten[50];
    float dtb;
}
int main(){
    struct Sinhvien sv1, sv2;
    printf("Nhap ma sv: ");
    scanf("%d", &sv1.MaSV);
    getchar();
    printf("Nhap ho ten: ");
    gets(sv1.hoten);
    printf("Nhap diem tb: ");
    scanf("%f", &sv1.dtb);
    printf("\nMaSV: %d - Ho ten: %s - Diem tb: %.2f", sv1.MaSV, sv1.hoten, sv1.dtb);
void diemtb(){
    float dtb;
    if(dtb >= 8){
        printf("Gioi");
    }
    else if(dtb >= 6.5){
        printf("Kha");
    }
    else if(dtb >= 5){
        printf("Trung binh");
    }
    else{
        printf("Yeu");
}
}
#iclude <stdio.h>
int main(){
    float chieu dai;
    float chieu rong;
    float chu vi;
    printf("Nhap chieu dai: ";
    printf("Nhap chieu rong: ");
    scanf("%f%f",&chieu dai,&chieu rong);
    chu vi = (chieu dai + chieu rong) * 2;
    printf("chu vi hinh chu nhat la: %f", chu vi);
    return 0;
}
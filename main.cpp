#include <stdio.h>
#include <stdlib.h>

void ThongTinCaNhan(){
	printf("------ Thong tin ca nhan -----------\n");
	// Khhai bao bien
	char hoTen[30];
	char diaChi[20];
	char hocKi[20];
	char chuyenNganh[25];
	int tuoi;

	printf("\nMoi ban nhap ho ten: ");
    scanf("%s", &hoTen);  
    printf("Moi ban nhap tuoi: ");
    scanf("%d", &tuoi);  
    printf("Moi ban nhap dia chi: ");
    scanf("%s", &diaChi);  
    printf("Moi ban nhap hoc ki: ");
    scanf("%s", &hocKi); 
	printf("Moi ban nhap chuyen nghanh: ");
    scanf("%s", &chuyenNganh);  
    
    printf("\n---- Thong tin ca nhan cua ban---------\n");
    printf("Ho ten cua ban la: %s\n",&hoTen);
    printf("Tuoi cua ban la: %d\n",tuoi);
    printf("Dia chi cua ban la: %s\n", diaChi);
    printf("Hoc ki cua ban la: %s\n",&hocKi);
    printf("Chuyen nganh cua ban la: %s\n",&chuyenNganh);
    printf("\n");
}
// ham tinh tong S(n)
int TinhTong(){
	printf("\nDay la chuc nang tinh tong S(n):\n");
	int n;
  	long S;
  	S = 0;
  	printf("\nNhap vao so n: ");
  	scanf("%d", &n);
  	
  	for(int i = 1; i <= n; i++)
    {
        S = S + i;
    }
  	printf("\nTong S =(1 + 2 + ... + %d) là: %ld\n", n, S);
}
void StudentInfo(){
	printf("------- Thong tin sin sinh vien cac lop ----------\n");
	
}

int main()
{
	int chon;
	do{
		printf("----------- Menu -----------------\n");
		printf("1. Nhap thong tin ca nhan\n");
		printf("2. Tinh tong\n");
		printf("3. Thong tin sinh vien cac lop\n");
		printf("0. Thoat\n");
		printf("----------------------------------\n");
		
		printf("Moi ban chon chuc nang: ");
		scanf("%d", &chon);
		
		switch(chon) {
			case 0:
				exit(0);
			case 1:
				ThongTinCaNhan();
				break;
       		case 2:
				TinhTong();
				break;
			case 3:
				StudentInfo();
				break;
			default:
				printf("Ban chon sai, moi ban chon lai tu 0 -3.\n");
		}
	}
	while (chon != 0);
    return 0;
}

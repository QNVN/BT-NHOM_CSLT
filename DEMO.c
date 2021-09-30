#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  char hoTen[30];
  int tuoi;
  float diemTB;
} SinhVien;

int main(){
  int n, i, search;
  char sv[30];
  SinhVien *SV;

  do{
    printf("\nMoi ban nhap so luong sinh vien: ");
    scanf("%d",&n);
  }while(n<=0);
  //Cấp phát vùng nhớ cho n sinh viên
  SV=(SinhVien*)malloc(n*sizeof(SinhVien));

  //Nhập liệu cho n sinh viên
  for(i=0; i<n; i++){
    printf("\nNhap thong tin cho sinh vien %d",i+1);
    printf("\nHo va ten: ");
    fflush(stdin);
    gets(SV[i].hoTen);
    gets(SV[i].hoTen);
    do{
      printf("Nhap tuoi: ");
      scanf("%d",&SV[i].tuoi);
    }while(SV[i].tuoi<18);
    do{
      printf("Diem trung binh: ");
      scanf("%f",&SV[i].diemTB);
    }while(!(SV[i].diemTB>=0 && SV[i].diemTB<=10));
  }

  //Tìm kiếm theo tên sinh viên
  printf("\nMoi ban nhap ho ten cua sinh vien can tim: ");
  gets(sv);
  gets(sv);
  search=0;
  for(i=0; i<n; i++){
    if(strcmp(SV[i].hoTen,sv)==0){
      printf("\nTim thay!");
      search=1;
      break;
    }
  }
  if(search==0)
    printf("\nKhong tim thay!");
  
  //giải phóng vùng nhớ
  free(SV);

  return 0;
}
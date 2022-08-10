#include<stdio.h>
int main(){

  float n;
  printf("Nhap n= ");
  scanf("%f",&n);
  if(n==int(n)){
    printf("%.0f la so nguyen",n);
  }else{
    printf("%.2f khong phai la so nguyen",n);
  }

}

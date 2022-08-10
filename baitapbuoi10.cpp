#include<stdio.h>
int main(){

  int n;
  printf("Nhap n=");
  scanf("%d",&n);
  if(n==int(n)){
    printf("%d la so nguyen",n);
  }else{
    printf("%d khong phai la so nguyen",n);
  }

}

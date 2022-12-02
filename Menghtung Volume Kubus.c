#include <stdio.h>

int main(){

  int s, v;
  printf("\n");
  printf("=== Adistira Garin Nugraha - Tugas 2 ===\n");
  printf("===============================\n");
  printf("Program Menghitung Volume Kubus\n");
  printf("===============================\n\n");
  
  printf("Masukkan panjang rusuk (cm): ");
  scanf("%d", &s);

 if (s<=10&&s>=1){
  v = s*s*s;
  printf("Volume kubus adalah %d cm3 (sentimeter kubik)\n", v);
 } else { printf(" tidak sesuai ");}
  
  return 0;

}

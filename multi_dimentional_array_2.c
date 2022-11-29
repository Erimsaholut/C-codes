#include <stdio.h>
#include <stdlib.h>

int main() {
  // 3 BOYUTLU MATRİSLER RUBİK KÜBÜ TANIMLIYORUZ GİBİ

  int rubik[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
                        {{19, 20, 21},
                         {22, 23, 24},
                         {25, 26, 27}}}; // eşşek gibi yazdım çok pişmanım

  int x, y = 0, z = 0;
  for (x = 0; x < 3; x++) {
      
      
      for (y = 0; y < 3; y++) {
      for (z = 0; z < 3; z++) {
        printf("%d\n",rubik[x][y][z]);
      }
      }
      } 

  return 0;
}

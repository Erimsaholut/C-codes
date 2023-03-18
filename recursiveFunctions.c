#include <stdio.h>
#include <stdlib.h>

//             4*4*4
int usAlma(taban,us){
	if (us==0)
		return 1;
	if (us==1)
		return taban;
	
	int ilk = taban;
	int ikinci = usAlma(taban,us-1);
	
	return ilk*ikinci;
}

int main(void) {
  printf("4 üssü 3 eşittir = %d",usAlma(4,3));
  return 0;
}
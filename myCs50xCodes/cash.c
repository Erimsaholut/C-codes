#include <stdio.h>

int main(void) {
  float change;
  int intChange;
  int quarter = 25;
  int dime = 10;
  int nickle = 5;
  int penny = 1;

  do {
    printf("Enter change amount\n");
    scanf("%f", &change);
  } while (change <= 0);
  intChange = change * 100;
printf("%d\n", intChange);

	
if (intChange > quarter) {
    printf("%d quarter\n", (intChange / quarter));
	intChange %= 25;
}if (intChange > dime) {
    printf("%d dime\n", (intChange / dime));
	intChange %= 10;
}if (intChange > nickle) {
    printf("%d nickle\n", (intChange / nickle));
	intChange %= 5;
}if (intChange != 0) {
    printf("%d penny\n",intChange);
}


}
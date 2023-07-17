#include <stdio.h>

int main() {
  long long cardNumber, tempCardNumber;
  int digitCount;
  int firstDigitsSum = 0;
  int secondsDigitsSum = 0;
  int total = 0;
  int digit[16];

  do {
    digitCount = 0;
    printf("Please enter your card number:\n");
    scanf("%lld", &cardNumber);
    tempCardNumber = cardNumber;

    while (tempCardNumber != 0) {
      tempCardNumber /= 10;
      digitCount += 1;
    }

  } while (digitCount != 16);

  for (int i = 0; i < 16; i++) {
    digit[i] = cardNumber % 10;
    cardNumber /= 10;
  }

  for (int i = 0; i < 16; i += 2) {
    firstDigitsSum += digit[i];
  }

  for (int i = 1; i < 16; i += 2) {
    digit[i] *= 2;
    if (digit[i] >= 10) {
      secondsDigitsSum += digit[i] / 10;

      secondsDigitsSum += digit[i] - 10;

    } else {
      secondsDigitsSum += digit[i];
    }
  }

  total = firstDigitsSum + secondsDigitsSum;

  if (total % 10 == 0) {
    printf("This card is real");
  } else {
    printf("This card is fake");
  }

  return 0;
}

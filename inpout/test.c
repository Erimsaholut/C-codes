#include <stdio.h>

int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen("filename.txt", "r");
  char myString[100];

if (fptr!=NULL)
{
    /* code */
    fgets(myString,100,fptr);
    printf("%s", myString);

  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }
}

  //fprintf(fptr,"\n youtube.com");

  // Close the file
  fclose(fptr);

  return 0;
}

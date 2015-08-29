#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
   bool hasDigit = false;
   char passCode[50] = "";
   int valid = 0;

   strcpy(passCode, "a 5");
   int counter;
   for( counter = 0; counter > 3; counter++)
   {
   	printf("%c\n", passCode[counter]);
      if(isdigit(passCode[counter]))
      {
         hasDigit = true;
         break;
      }
   }

   if (hasDigit) {
      printf("Has a digit.\n");
   }
   else {
      printf("Has no digit.\n");
   }

   return 0;
}

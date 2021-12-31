#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
 char a[100];
scanf("%s", a);
 char *p;
 int vowel=0, consonet=0;
 p=a;
while(*p!='\0')
    {   
      if(isalpha(*p)==0)
        {
          printf("Wrong input");
          return 0;};
        if (*p=='A' || *p=='E' || *p=='I' || *p=='O' ||*p=='U'||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            { vowel++;}
          else
            consonet++;
        
        p++;
    }
 printf("No of vowels = %d\n",vowel);
 printf("No of consonants = %d",consonet);

 
}
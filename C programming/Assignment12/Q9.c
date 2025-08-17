#include <stdio.h>
/*Q9 WAP to Take in Two Strings and Display the Larger String without Using Built-in
Functions*/
void main (){
    char str1 [100];
    char str2[100];
    int i , len1 = 0, len2 = 0;

    //user input 2 string
    printf("enter first string");
    gets(str1);

    printf("Enter the second string ");
    gets(str2);


    for (i = 0; str1[i] !='\0'; i++ )
    {
        len1++;
    }

 for (i = 0; str2[i] !='\0'; i++ )
    {
        len2++;
    }

      if (len1 > len2)
      {
          printf("Larger string is: %s\n", str1);
      }else  if ( len2 >len1)
      {
         printf("Larger string is: %s\n", str2);
      }else{
         printf("string is equal");
      }
      
      

}
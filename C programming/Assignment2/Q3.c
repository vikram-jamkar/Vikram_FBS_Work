#include <stdio.h>
//3. Write a program to find greatest of three numbers using nested if-else.
void main (){
    int a,b,c;


printf("Enter three number ");
scanf("%d%d%d",&a,&b,&c);

if ( a > b)
// agar a b se bada hai, toh ab a aur c me check karo
{
    if (a > c)
    {
      printf("%d is greatest\n", a);
    }else{
         printf("%d is greatest\n", c);
    }
    
//agar b bada nikla (ya equal hua), toh b aur c me check kar
}else{
    if (b > c )
    { 
        printf("%d is greatest\n", b);
    }else{
        printf("%d is greatest\n", c);
    }
    
}}





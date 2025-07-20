#include <stdio.h>

//Q2 write a program to cheak given 3 digit number is palindrom or palimdorme 
void main (){
int no =  121;
int fd,ld;

     fd= no % 10;
     ld = no / 100;

     if (fd == ld){
        printf("Nummber is palindrome ");
}else {printf("is number not palindrome");}

}

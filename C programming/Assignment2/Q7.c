#include <stdio.h>
/*7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/
void main (){
    int age ;

    printf("Enter the age");
    scanf("%d", &age);

    if (age < 12){
        printf("child");
    }else if(age >=12 && age <=19){
        printf("Teenager ");

    }else if (age >=20 && age <=59){
        printf("senior");
    }else if(age >=59 && age <=60){
        printf("avobe 60");
    }



}
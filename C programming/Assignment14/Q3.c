#include <stdio.h>

//Admin (id, name, salary, allowance)


    struct  Admin
{
    int id;
    char name [20];
    float salary;
    float allowance;

};


void main (){
    struct Admin s1;

    printf("Enter id := ");
    scanf("%d",&s1.id);

    printf("Enter name := ");
    scanf("%s",&s1.name);

    printf("Enter salary:=");
    scanf("%f",&s1.salary);

    printf("Enter allowance");
    scanf("%f",&s1.allowance);

    //output
     printf("\n Addmin Ditail");

     printf("\nid:=%d\nname:=%s\nsalary%2f\nallowance=%2f",s1.id,s1.name,s1.salary,s1.allowance);

}
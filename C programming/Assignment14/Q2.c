#include <stdio.h>
//Employee ( int id, string name,  float salary)

struct Emoloyee
{
     int id;
     char name[10];
     float salary;
};
      void main (){
        struct Emoloyee emp;

        printf("Enter:id:=");
        scanf("%d",&emp.id);

        printf("Ennter name:= ");
        scanf("%s",&emp.name);

        printf("Enter salary:=");
        scanf("%f",&emp.salary);
        


        //output
        printf("\nEmployee Details:\n");
        printf("id := %d\nname:=%s\nsalary:=%2f\n",emp.id,emp.name,emp.salary );
      }
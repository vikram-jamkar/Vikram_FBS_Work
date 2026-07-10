//2. Employee (id, name, salary)
struct Employee{
    int id;
    char name[10];
    float salary;

};

#include<stdio.h>
void main(){
    struct Employee e1;
    
 printf("Enter the id :");
 scanf("%d",&e1.id);

 printf("Enter the name:");
 scanf("%s",e1.name);

printf("Enter the salary:");
scanf("%f",&e1.salary);

printf("\nemployee is :%d",e1.id);
printf("\nEmpoloye name:%s",e1.name);
printf("\nEmploy salary:%f",e1.salary);
    
}
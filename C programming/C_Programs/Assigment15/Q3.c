//3. Admin (id, name, salary, allowas
struct Admin
{
     int id;
     char name[20];
     double salary;
     float allowas;

};
#include<stdio.h>
void main(){

    struct Admin a1;

    printf("Enter the id:");
    scanf("%d",&a1.id);

    printf("Enter the name:");
    scanf("%s",a1.name);

    printf("Enter the salary:");
    scanf("%lf",&a1.salary);

    printf("Enter the allowance:");
    scanf("%f",&a1.allowas);


    printf("\nAdmin id %d",a1.id);
    printf("\nAdmin name %s",a1.name);
    printf("\nAdmin salary:%lf",a1.salary);
    printf("\nAdmin allowance:%f",a1.allowas);



}
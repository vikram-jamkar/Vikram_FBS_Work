//4. HR (id, name, salary, commission)

struct  HR {
    int id;
    char name[20];
    double salary;
    float commission;

};
#include<stdio.h>
void main(){

    struct HR h1 ;

    printf("Enter the  id:");
    scanf("%d",&h1.id);
     
    
    printf("Enter the  name:");
    scanf("%s",h1.name);

    printf("Enter the salary : ");
    scanf("%lf",&h1.salary);
    
    printf("Enter the commission:");
    scanf("%f",&h1.commission);


    printf("\nhr id :%d",h1.id);
    printf("\nhr name :%s",h1.name);
    printf("\nhr salary:%lf",h1.salary);
    printf("\nhr commission:%f",h1.commission);
}
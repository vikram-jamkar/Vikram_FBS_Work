//1. Student (rollNo, name, marks)
struct Student{
    int rollno;
    char name[50];
    double mark;


};
#include<stdio.h>
void main(){
    struct Student s1;
printf("Enter the roll no:");
scanf("%d",&s1.rollno);

printf("Enter the name : ");
scanf("%s",s1.name);

printf("Entert the marks :");
scanf("%lf",&s1.mark);

printf("\nroll no:%d ",s1.rollno); 
printf("\nStudent name:%s ",s1.name); 
printf("\nMark %.2f ",s1.mark); 
    

}

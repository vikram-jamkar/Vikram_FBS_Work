#include <stdio.h>
struct  student 
{
    int Rollno;
    char name [50];
    float mark;

};
int main (){
    struct student s1 ;

    // data input 
    printf("Enter roll no");
    scanf("%d",&s1.Rollno);

    printf("Enter name");
    scanf("%s",&s1.name);

    printf("Enter mark");
    scanf("%f",&s1.mark);


    //output 
    printf("\n---- student details ---\n");
    printf("Roll no : %d\n",s1.Rollno);
    printf("name : %s\n",s1.name);
    printf("mark : %2f\n",s1.mark);

    
}

#include <stdio.h>

   struct
    student {
        int rollno;
        char name[20];
        int mark;

    };


    void main (){
        struct student s1 ,s2;

        printf("Enter rollno name and mark");
        scanf("%d",&s1.rollno);
        scanf("%s",&s1.name);
        scanf("%d",&s1.mark);




        //output
        printf("rollno:= %d, name:=%s,mark=%d",s1.rollno, s1.name,s1.mark);
        
    }
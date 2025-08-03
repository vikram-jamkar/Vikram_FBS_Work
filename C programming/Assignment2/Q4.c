#include <stdio.h>
/*4. Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 → show "Distinction"
If marks are more than 65 → show "First Class"
If marks are more than 55 → show "Second Class"
If marks are 40 or more → show "Pass Class"
If marks are less than 40 → show "Fail"*/
void main (){
    int mark ;


    printf("Please Enter the mark ");
    scanf("%d",&mark);

    if(mark > 75){
        printf("Distinction");
    }else if (mark >65 )
    {
        printf("First Class");
    }else if (mark >= 55)
    {
         printf("Second Class");
    }else if (mark >= 40)
    {
        printf("pass");
    }else{
            printf("f");
    }
    
    
    
}

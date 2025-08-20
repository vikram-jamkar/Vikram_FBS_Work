#include <stdio.h>
 
  typedef struct  student {
 int Rollno;
 char name[10];
 int mark;

  } student;
void storestudent(student* sarry,int size);
void displaystudent( student* sarry,int size);
int searchstudent (student* arry, int size ,int rn);
void  deleterollnostudent(student* sarry,int*size ,int rn);

  void main (){
    int n;
    printf("how many student want ");
    scanf("%d",&n);
    student sarry[n];

    storestudent(sarry,n);// fuction call
    displaystudent(sarry,n);// fuction call

    int rn;
    printf("you want to search rollno");
    scanf("%d",&rn);
      int index = searchstudent (sarry,n,rn);//function call
      if (index==-1)
      {
        printf("student not found");
      }else{
        printf("studant  is rollno %d\n name:=%s\n mark :=%d",sarry[index].Rollno,sarry[index].name,sarry[index].mark);
      }
      int rn1;
      printf("you want to delete roll no");
      scanf("%d",&rn1);
      deleterollnostudent(sarry,&n,rn1);// funtion call
      displaystudent(sarry,n);


  }// main end

void storestudent(student* sarry,int size){
    for (int  i = 0; i < size; i++)
    {
        printf("Enter rollno name and mark");
        scanf("%d",&sarry[i].Rollno);
        scanf("%s",sarry[i].name);
        scanf("%d",&sarry[i].mark);
    }
    

 }//funtion end
  void displaystudent( student* sarry,int size){
    for(int i = 0; i < size; i++){

        printf("Rollno:=%d",sarry[i].Rollno);
        printf("name:=%s",sarry[i].name);
        printf("mark:=%d",sarry[i].mark);

    }

 }//function end 

int searchstudent (student* arry, int size ,int rn){

    for ( int  i = 0; i < size ; i++)
    {
       if (arry[i].Rollno==rn)
       {
          return i;
       }
       
    }return-1;
    

 }//function end 
void  deleterollnostudent(student* sarry,int*size ,int rn){
    int index = searchstudent (sarry,*size,rn);
         if (index==-1)
      {
        printf("student not found");
      }else{
        for(int i = index; i<*size-1;i++){

            sarry[i] = sarry[i+1];

        }(*size)--;
      
    }
        
    }
 



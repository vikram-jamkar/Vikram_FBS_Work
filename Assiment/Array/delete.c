#include <stdio.h>
// 1 display
// 2search
//3 delete
       //function deleretion
void displayarr(int*,int);//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<||
int searcharry(int*,int ,int );//  function decleretion                ||                      
void deleteelement(int*,int*,int );//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<||

   // create arry
void main (){//
int arr []= {1,2,3,4,5,6,7,8,9,10};
int size = sizeof(arr)/4; // count size 
while (1)
{



printf(" 1. to display\n 2.search\n 3.to delete");
int choice;
scanf("%d",&choice);

if(choice==1){
     displayarr(arr,size);//call display[ 1 call]
}else if (choice==2){
    
    printf("\nyou want search number");
    int no;
    scanf("%d",&no);
    int  res = searcharry(arr,size ,no);//call search [2]
    displayarr(arr,size);//call display [3]
   if(res ==-1){
    printf("Not number");
   }
   else{
    printf("number is found%d",res);
   }
}else if(choice==3){
     printf("\nyour number is delete");

    int no1 ;
    scanf("%d",&no1);
    deleteelement(arr,&size,no1);//call function delete[4]
    
    displayarr(arr,size);//end [5]

}else {
    printf("invalid ");
} printf("do you want countiou 0, no 1 for yes");
   int exit;
   scanf("%d",&exit);
   if(exit==0)
   break;
   

}


   
   


}
// end main
   
  void displayarr(int*ptr,int size){// 1 definetion display <<
    for(int i = 0; i < size; i++ ){
        printf("%d",ptr[i]);
    }
}

 int searcharry(int*ptr,int size,int no){ //2  definetion search<<<
    for(int i= 0; i < size ; i++)
    if(ptr[i]==no){
        return i;
    } return -1;
}//end

 void deleteelement(int*ptr,int* size,int no){//3funtion delete definetion << 
    int  res = searcharry(ptr,*size ,no);
    if(res == -1){
        printf("not found");
    } else{
        for(int i = res;i < *size;i++)
                     ptr[i] = ptr[i+1];
                    (*size)--;
                     
    } 



}
#include <stdio.h>

//Q2 Search  givan number in arry .

void main (){
    int arry [5] = { 40, 10,30,50,20};
    int i;
    int key = 30;//muje 30 dhudhna he
    int found = 0;
    for (i = 0;i < 5;i++){
        if(arry[i] == key){
            found = 1;
            break;
        }
    }
        if (found == 1){
            printf("milgaya:=%d",key);
        }else{
            printf("nahi mila:=%d",key);
        }
    
    


}
#include <stdio.h> 
/*Q5.Delete an element from a specific position.
Input: {10, 20, 30, 40, 50}, Position: 3
Output: {10, 20, 40, 50}*/

void main (){
    int arry [] = {10,20,30,40,50};
    int i ,j;
    int key = 30;
    int index = 4;


    for(i = 0; i <= index;i++){
        if(arry[i]==key){

        for (j= i + 1; j<= index; j++){
              arry[j-1]  =  arry[j];

             
        }index--;
    }
       
            
        } for ( i = 0; i <=index; i++)
        {
            printf("%d",arry[i]);
        }
        
        
    
    
    }

        
        
    








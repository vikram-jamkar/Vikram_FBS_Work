#include <stdio.h>
#include <string.h>
//create arry 5 employ id name
struct Employ
{
    int id;
    char name[50];
};

int main (){
     struct Employ emp[5];

for(int i = 0;i < 5; i++){
printf("Enter details for Employee ");
printf(" Enter Id");
scanf("%d",&emp[i].id);
printf("Enter name");
scanf("%s",emp[i].name);
}  for (int i = 0; i < 5; i++) {
        strcpy(emp[i].name, "");  // name ko empty string bana diya
    }
     printf("\nEmployee Details (Name Deleted) \n");

///output 
for(int i =0; i < 5 ; i++){
    printf("Employ\n id = %d\nname:=%s\n ", emp[i].id,emp[i].name);
}

}
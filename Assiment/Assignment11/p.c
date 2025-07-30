#include <stdio.h>
 /*int  mystrcasecmp( char *str1,char *str2);
 char flip  (char );
// funtion name  p. mystrcasecmp
// paramaiter 2 
// data type char char  const 
//retrun string
void main (){
    char s1 [] = {"appLE"};
    char s2 [] = {"aPPLe"};

   
   
  int  res = mystrcasecmp(s1,s2);//function call

  if(res == 0)
  {
    printf("string is same");
  }else {
    printf("string not same");
  }
} 


 int mystrcasecmp( char *str1, char *str2){// function defination)
   
        
while ( *str1 && *str2)
{
    if ( *str1 != *str2 && *str1 != flip[*str2]+32 )
    {
        return 1;
    
       
    } 
        str1++;
        str2++;
    
}
  char flip  (char ch){
    if ( ch >='A'&& ch <= 'Z')
    {
       return ch -32;
    }
    
}else{
    return-32;
}

}*/
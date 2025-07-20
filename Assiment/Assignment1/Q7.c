#include <stdio.h>
//Q7 calculating total salary beasd on basic if  <=5000 da ta and hra  will be 10% 20% 25%
//repactivly other ovther wise da ta  hra will 15% 20% %25 respestivly 

void main (){
    double basic = 4000;
    double da,ta,hra,ts;
    if (basic < 5000){
        da = basic * 0.10;
        ta = basic *0.20;
        hra = basic * 0.25;
    }else {
         da = basic * 0.15;
        ta = basic *0.20;
        hra = basic * 0.30;
    } ts = da+ta+hra;
    printf("%lf",ts);
}
class PStudent{
              String cname;
              int dis;
              String des;
              

         void setcname(String cn){
         this.cname=cn;}
         void setdis(int dis){
         this.dis=dis;}
         void setdes(String des){
         this.des=des;}


 void display(){
 System.out.println("cname: "+cname);
 System.out.println("dis:"+dis);
 System.out.println("des:"+des);}

}//end here class class memebr 


class test{
           public static void main(String [] args){

               PStudent p1;
               p1 =new PStudent();
               p1.setcname("tcs");
               p1.setdis(50);
               p1.setdes("java full stack");

               p1.display();


}//end main





}
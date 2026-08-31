class Sm{
          int id;
          String name;
          double salary;
          int target;



void setid(int id){this.id=id;}
void setname(String name){this.name=name;}
void setsalary(double salary){this.salary=salary;}
void settarget(int t){this.target=t;}

int getid(){return this.id;}
String getname(){return this.name;}
double getsalary(){return this.salary;}
int gettarget(){return this.target;}
          
void dispaly(){
   System.out.println("id:"+id);
   System.out.println("name: "+ name);
   System.out.println("salary: "+salary);
   System.out.println("target: "+target);}

}//end here 



class test{
             public static void main(String [] args){
              Sm s1;
                s1=new Sm();
                s1.setid(1);
                s1.setname("vikram");              
                s1.setsalary(50000);
                s1.settarget(500);
                s1.dispaly();




}//end main


}//end here test
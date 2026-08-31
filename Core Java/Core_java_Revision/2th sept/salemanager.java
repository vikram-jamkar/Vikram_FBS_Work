class SaleManager{
                  int id;
                  String name;
                  double salary;
                 double incentive;
                  int target;
                  

                     void setid(int id){
                     this.id=id;}
                     void setname(String n){
                     this.name=n;}
                     void setsalary(int s){
                     this.salary=s;}
                     void setincentive(double i){                 this.incentive=i;}

                   void settarget(int t){
                    this.target=t;}


}//end salemanager
 class test{
            public static void main(String [] args){
                    SaleManager s1;
                    s1 = new SaleManager();
                    s1.setid(1);
                    s1.setname("v");
                    s1.setincentive(400.0);
                    s1.settarget(50);
System.out.println(s1.id+""+ s1.name +""+s1.incentive+""+s1.target);

}//end main
}
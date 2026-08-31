class ElectricityBill{
                      int b_id;
                      String name;
                      int unit;
                      static double RatePerUnit;

                     static{//sept1
                           RatePerUnit=10;
                            }
                    
                      static void setRatePerUnit(double rpu)//step2
                       {
                        RatePerUnit=rpu;
                      }
                    
                      //defult contructer/step3
                       ElectricityBill(){
                       this.b_id=1;
                       this.name="vikram";
                       this.unit=445;
                       }            

                    //parameter countructer
                     ElectricityBill(int b_id ,String name ,int unit)//step 4
                     {
                      this.b_id=b_id;
                      this.name=name;
                      this.unit=unit;
                                           
                     }

                     //seter geter
                      void setb_id(int b_id){
                      this.b_id=b_id;}

                      void setname(String name){
                      this.name=name;}

                      void setunit(int unit){
                      this.unit=unit;}
                       
                      //geter
                      int getb_id(){
                      return this.b_id;}
                      String getname(){
                      return this.name;}

                      int getunit(){
                      return this.unit;}
                    


                     void display(){
                         System.out.println("b_id :"+ this.b_id);
                         System.out.println("name :"+ this.name);
                         System.out.println("unit :"+ this.unit);
                         System.out.println("RatePerunit :"+RatePerUnit );}
                      
                     void CalculateElectricityBill(){
                     System.out.println("bill for"+this.b_id+"is :"+(RatePerUnit * this.unit));
                         }
                       



} //class name
class TestElectricity{

                       public static void main(String [] args){

                    ElectricityBill e1;
                    e1 = new ElectricityBill(101,"jamkar",88);
                    ElectricityBill e2;
                    e2 = new ElectricityBill(103,"vikram",55); 
                    ElectricityBill e3;
                    e3 = new ElectricityBill();
                  

                   e1.display();
                   e2.display();
                   e3.display();

                   e1.CalculateElectricityBill();
                   e2.CalculateElectricityBill();
                   e3.CalculateElectricityBill();
 
                  ElectricityBill.setRatePerUnit(5.5);//steps 6
           
                   e1.display();
                   e2.display();
                   e3.display();

}}


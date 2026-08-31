class Product{
               int id;
               String name;
               int quantity;
               double price;

               void  setid(int id){
               this.id=id;}
               void setname(String name){
               this.name=name;}
               void setquantity(int q){
               this.quantity=q;}
               void setprice(double price){
               this.price=price; }
               void display(){
               System.out.println("id :"+ id);
               System.out.println("name : "+ name);
               System.out.println("quantity :"+ quantity);
               System.out.println("price : "+ price);}
}//end product here and class member 


class test {
             public static void main(String [] args){
                 Product p1;
              p1=new Product();             
              p1.setid(1);
              p1.setname("vikram");
              p1.setquantity(500);
              p1.setprice(45000.00);
              p1.display();

}//end main here 
 


}//end test 
class Admin{
            int id;
            String name;
            int quantity;
            int price;
           
 
            
          Admin(){
                  this.id = 1;
                  this.name = "unkow";
                  this.quantity = 0;
                  this.price = 0;
                  System.out.println("In default contractor");    
}//end here 
                  
             
                 Admin(int id,String name,int quantity,int price){
                        this.id = id;
                        this.name = name;
                        this.quantity = quantity;
                        this.price = price;
                        System.out.println("in parameter countructor");}


                       void display(){
                                System.out.println("Id"+this.id);
                                System.out.println("Name"+this.name);
                                System.out.println("Quantity"+this.quantity);
                                System.out.println("Price"+this.price);
                                 }


} //end class here 
 


class Test {
            public static void main(String[] arrgs){

            Admin d1 = new Admin();
            d1.display();

            Admin d2= new Admin(101,"addmin",20,500);
            d2.display();

}
}//end here 
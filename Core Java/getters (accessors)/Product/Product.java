class Product{
              int id;
              String name;
              int quntity;
              double price;

              void setId(int id){
                   this.id=id;}
              void setName(String name){
                   this.name=name;}
              void setQuntity(int quntity){
                   this.quntity=quntity;}
              void setPrice(double price){
                    this.price=price;}
        
                    //using get

               int getId(){
                   return this.id;}
                   
               String getName(){
                      return this.name;}
             
               int getQuntity(){
                   return this.quntity; }
          
               double getPrice(){
                      return this.price;}


               void display(){
                    System.out.println("Id:"+ this.id);
                    System.out.println("Name:"+this.name);
                    System.out.println("Quntity:"+ this.quntity);
                    System.out.println("Price:"+ this.price);}
  
  
       
}//end class here 


class Test {
            public static void main(String[] args){
            Product d1 = new Product();
            d1.setId(1);
            d1.setName("apple");
            d1.setQuntity(15);
            d1.setPrice(50000);


            d1.display();

}
}//end main here
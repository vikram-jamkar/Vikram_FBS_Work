class Shape{
            void calculateArea(Triangle t){
             double area =0.5 *t.getbase()*t.getheight();
             System.out.println("Triangle Area = " + area);

            }

            void calculateArea(Circle c){
             double area;
             area =3.14 *c.Redius*c.Redius;
             System.out.println("Circle Area = " + area);

            }
           
            void calculateArea(Rectangle r){
            double area;
             area = r.length * r.breath;
             System.out.println("Rectangle"+area);

            }



}//class end here 
class Triangle{ 
              double base;
              double height;
              //default constructer
              Triangle(){
                       this.base=1;
                       this.height=1;
              }
              Triangle(double base, double height){
                       this.base=base;
                       this.height=height;
              }

              void setbase(double b){
              this.base=b;
              }
              void setheight(double h){
              this.height=h;
              }

              double getbase(){
              return this.base;
              }
              double getheight(){
              return this.height;   
              }
              void display(){
              System.out.println("base"+base);
              System.out.println("height"+height);
             }

}//end here class Tringel

class Circle {
                double Redius;

                Circle(){
                this.Redius=3;
                }
              
               Circle(double r){ 
               this.Redius=r;
               }
              
              void setRedius(double r){
                this.Redius=r;
                   }   
               double getRedius(){
                
                return this.Redius;                 
               }  


               void display(){
               System.out.println("redius"+Redius);}       




}//end here class circule

class Rectangle{
                  double length;
                  double breath;
                  Rectangle(){
                             this.length=2;
                             this.breath =3;
                             }


                 Rectangle(double length,double breath){
                 this.length=length;
                 this.breath=breath;
                             }
                        
                  void setLength(double l){
                  this.length=l;
                  }
                  void setBreath(double b){
                  this.breath=b;}

                  double getLenght(){
                  return this.length;}

                  double getBreath(){
                  return this.breath;}

                 
                 void display(){
                 System.out.println("length"+length);
                 System.out.println("breath"+breath);}
}//end here all class

class test{
           public static void main(String [] args){

            Shape s1 = new Shape();


            Triangle t1 = new Triangle(5,3);
            s1.calculateArea(t1);
            t1.display();
            Circle c1 = new Circle(5);
            s1.calculateArea(c1);
            c1.display();
            Rectangle r1 = new Rectangle(5,3);
            s1.calculateArea(r1);
            r1.display();



          







}

}//class test end here

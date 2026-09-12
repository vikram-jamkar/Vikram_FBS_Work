package com.phonex.demo;

public class MainApp {

    public static void main(String[] args) {

        // Approach 1: Implement in a class
        ArithmetiOps add = new Arithmatic();

        System.out.println(add.calculate(10, 20));


        // Approach 2: Anonymous inner class
        //ArithmetiOps sub = new ArithmetiOps() {

          //  @Override
         //   public int calculate(int op1, int op2) {
          //return op1 - op2;
       //     }
      //  }//;

       // System.out.println(sub.calculate(20, 10));


        // Approach 3: Lambda expression
        ArithmetiOps multi = (op1, op2) ->
        {     System.out.println("inside lambda");  
        return op1 * op2;
        };
        System.out.println(multi.calculate(20, 10));
    }
}
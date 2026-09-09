package p1;

class Worker implements Runnable {

    public void run() {

        String alphabate = "123456878977";

        for (int i = 0; i < alphabate.length(); i++) {
            System.out.print(alphabate.charAt(i));
        

        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }}
    }
}

public class TestThread {

    public static void main(String[] args) {

        String alphabate = "abcdifgdssnnkn";

        Worker w1 = new Worker();
        Thread t1 = new Thread(w1);

        t1.start();

        // w1.run();

        for (int i = 0; i < alphabate.length(); i++) {
            System.out.print(alphabate.charAt(i));
        

        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }}
    }
}
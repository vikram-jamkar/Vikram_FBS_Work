
package p1;
class VoterAgeException extends Exception {

    @Override
    public String toString() {
        return "Invalid Age";
    }
}

public class Voter {

    int age;

    public Voter(int age) {
        this.age = age;
    }

    public void validate() {
        try {
            if (this.age < 18) {
                throw new VoterAgeException();
            } else {
                System.out.println("You can vote");
            }

        } catch (VoterAgeException ve) {
            System.out.println(ve);
        }
    }
}

class TestException {
    public static void main(String[] args) {

        Voter v1 = new Voter(17);
        v1.validate();
    }
}
// Program 5: User Defined Exception for Negative Amount
class NegativeAmountException extends Exception {
    public NegativeAmountException(String message) {
        super(message);
    }
}

public class ExceptionDemo {
    public static void main(String[] args) {
        try {
            double amount = -500; // Example input
            if (amount < 0) {
                throw new NegativeAmountException("Amount cannot be negative!");
            }
            System.out.println("Amount entered: " + amount);
        } 
        catch (NegativeAmountException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
}
public class TestOperator {
    public void main(String[] args) {
        int x = 10, y = 5;
        System.out.println("Numbers are: " + x + " and " + y);
        System.out.println("Addition: " + add(x, y));
        System.out.println("Subtraction: " + sub(x, y));
        System.out.println("Multiplication: " + mul(x, y));
        System.out.println("Division: " + div(x, y));
        System.out.println("Modulus: " + mod(x, y));
        System.out.println("Greator? " + lar(x, y));
    }

    public int add(int a, int b) {
        return a+b;
    }

    public int sub(int a, int b) {
        return a-b;
    }

    public int mul(int a, int b) {
        return a*b;
    }

    public int div(int a, int b) {
        return a/b;
    }

    public int mod(int a, int b) {
        return a%b;
    }

    public boolean lar(int a, int b) {
        return a>b;
    }
}
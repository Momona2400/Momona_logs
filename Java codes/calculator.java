public class calculator {
    public void add(int a, int b) {
        System.out.println("Sum: " + (a + b));
    }
    public void add(int a, int b, int c) {
        System.out.println("Sum: " + (a + b + c));
    }
    public void add(double a, double b, double c) {
        System.out.println("Sum: " + (a + b));
    }
    public void add(float a, float b) {
        System.out.println("Sum: " + (a + b));
    }
    public static void main(String[] args) {
        calculator calc = new calculator();
        calc.add(5, 10);
        calc.add(5, 10, 15);
        calc.add(5.5, 10.5, 15.5);
        calc.add(5.5f, 10.5f);
    }
}
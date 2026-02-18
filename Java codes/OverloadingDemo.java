// Program 1: Demonstrate Compile-time Polymorphism (Method Overloading)
class Calculator {
    // Addition of two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Addition of two floating values
    public float add(float a, float b) {
        return a + b;
    }

    // Addition of three integers
    public int add(int a, int b, int c) {
        return a + b + c;
    }
}

public class OverloadingDemo {
    public static void main(String[] args) {
        Calculator calc = new Calculator();

        System.out.println("Sum of 2 integers: " + calc.add(10, 20));
        System.out.println("Sum of 2 floats: " + calc.add(5.5f, 4.5f));
        System.out.println("Sum of 3 integers: " + calc.add(1, 2, 3));
    }
}
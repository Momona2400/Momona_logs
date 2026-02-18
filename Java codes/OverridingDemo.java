// Program 3: Demonstrate Runtime Polymorphism (Method Overriding)
class Shape {
    public void area() {
        System.out.println("Area of shape is undefined.");
    }
}

class Circle extends Shape {
    double radius;

    Circle(double r) {
        radius = r;
    }

    @Override
    public void area() {
        System.out.println("Area of Circle: " + (Math.PI * radius * radius));
    }
}

class Rectangle extends Shape {
    double length, breadth;

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    @Override
    public void area() {
        System.out.println("Area of Rectangle: " + (length * breadth));
    }
}

public class OverridingDemo {
    public static void main(String[] args) {
        Shape s1 = new Circle(5);
        Shape s2 = new Rectangle(4, 6);

        s1.area();
        s2.area();
    }
}
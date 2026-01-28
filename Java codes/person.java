public class person {
    String name;
    int age;

    public person (String n, int a) {
        name = n;
        age = a;
    }
    
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main() {
        person p1 = new person("Anamika", 18);
        person p2 = new person("Ananya", 19);

        p1.display();
        p2.display();
    }
}
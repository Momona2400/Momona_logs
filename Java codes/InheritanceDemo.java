// Program 2: Demonstrate Single Inheritance
class Person {
    String name;
    int age;

    public void setPerson(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void displayPerson() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Student extends Person {
    int rollNo;

    public void setStudent(String name, int age, int rollNo) {
        setPerson(name, age);
        this.rollNo = rollNo;
    }

    public void displayStudent() {
        displayPerson();
        System.out.println("Roll No: " + rollNo);
    }
}

public class InheritanceDemo {
    public static void main(String[] args) {
        Student s = new Student();
        s.setStudent("Alice", 20, 101);
        s.displayStudent();
    }
}
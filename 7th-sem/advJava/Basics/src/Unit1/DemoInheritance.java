package Unit1;

class Person {
    private String name;
    private String gender;
    private String phone;

    public Person(String name, String phone, String gender) {
        this.name = name;
        this.phone = phone;
        this.gender = gender;
    }

    public void displayPerson(){
        System.out.println("NAME: "+this.name);
        System.out.println("PHONE: "+this.phone);
        System.out.println("GENDER: "+this.gender);
    }
}

class Student extends Person {
    private int rollNo;
    private String faculty;
    private String section;

    // use "super" keyword to call parent constructor
    public Student(int rollNo, String faculty, String section, String name, String phone, String gender){
        // call parent constructor
        super(name, phone, gender);
        this.rollNo = rollNo;
        this.faculty = faculty;
        this.section = section;
    }

    public void  displayStudent(){
        System.out.println("ROLL NO: "+this.rollNo);
        System.out.println("FACULTY: "+this.faculty);
        System.out.println("SECTION: "+this.section);
    }
}
public class DemoInheritance {
    public static void main(String[] args) {

        Student s = new Student(69,"CSIT","B","Hisagi", "9876543210","M");
        s.displayStudent();
        s.displayPerson();
    }
}

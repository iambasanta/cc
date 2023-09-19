package Unit1;

/*
    - It is like a abstract class but difference is that it only consist list of abstract method
    - It doesn't have constructor and normal methods
    - If instance variable is declared it will be final (constant) by default
    - It is declared using interface keyword and cannot be instantiated
    - Interface is accessed using implements keyword
*/

interface Animal {
    void makeSound();
    int calculateBMI(int height, int weight);
}

class Dog implements Animal {
    @Override
    public void makeSound() {
        System.out.println("I'm a dog. BHAW BHAW !");
    }
    @Override
    public int calculateBMI(int height, int weight) {
        return (weight/ (height * height));
    }
}

public class DemoInterface {
    public static void main(String[] args) {
        Dog bhunte = new Dog();
        bhunte.makeSound();
        int bmi = bhunte.calculateBMI(1, 20);
        System.out.println("BMI of bhunte : " + bmi);

        // using interface reference
        Animal mimi;
        // dynamic dispatch
        mimi = bhunte;
        mimi.makeSound();
        int newBMI = mimi.calculateBMI(2, 50);
        System.out.println("NEW BMI : " + newBMI);

    }
}

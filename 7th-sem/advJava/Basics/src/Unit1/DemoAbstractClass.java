package Unit1;

abstract  class Calcs {
    private int x;
    private int y;

    public Calcs(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void add() {
        System.out.println("ADDITION : " + (this.x + this.y));
    }

    public abstract void subtract (int x1, int y1);

    public abstract int multiplication (int x1, int y1);
}

class Sols extends  Calcs {
    private int x2;
    private int y2;

    public Sols (int x2, int y2, int x, int y) {
        super(x, y);
        this.x2 = x2;
        this.y2 = y2;
    }

    // normal method
    public void division() {
        System.out.println("DIVISION : "+ (this.x2 / this.y2));
    }

    // defining abstract methods
    @Override
    public void subtract( int x1, int y1) {
        System.out.println("SUBTRACTION : " + (x1 - y1));
    }
    @Override
    public int multiplication(int x1, int y1) {
        return (x1 * y1);
    }
}

public class DemoAbstractClass {
    public static void main(String[] args) {
        // Calcs c1 = new Calcs();
        // Calcs is abstract class

        Sols s1 = new Sols(5  , 10, 6, 9);
        s1.add();
        s1.subtract(10,5);
        s1.division();
        int mul = s1.multiplication(10,20);
        System.out.println("MULTIPLICATION : " + mul);

        // using reference of abstract class
        Calcs c1;
        // dynamic method dispatch
        c1 = s1;
        c1.add();
        int mul2 = c1.multiplication(5, 3);
        System.out.println("MULTIPLICATION : " + mul2);
        c1.subtract(100,50);

    }
}

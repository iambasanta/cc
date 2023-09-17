package Unit1;
class Box {
    private int length;
    private int breadth;
    private int height;

    public Box(int length, int breadth, int height){
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    public void displayBox(){
        System.out.println("LENGTH : "+this.length);
        System.out.println("BREADTH : "+this.breadth);
        System.out.println("HEIGHT : "+this.height);
    }

    public int calcVolume() {
        return (this.length * this.breadth * this.height);
    }
}
public class TestDemoClass {
    public static void main(String[] args) {
        Box b = new Box(50, 20, 20);
        b.displayBox();
        int volume = b.calcVolume();
        System.out.println("VOLUME: "+volume);
    }

}

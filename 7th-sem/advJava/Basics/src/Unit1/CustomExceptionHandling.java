package Unit1;
// to create own error (exception) we have to use superclass Exception
// step1: Create error class by extending superclass Exception
// step2: use override method toString() to return error message
// step3: use throw to explicitly throw own error
// step4: use throws if error is generated from method
// step5: use try catch to handle error thrown from method

import org.w3c.dom.css.Rect;

class NegativeAreaException extends  Exception {
    @Override
    public String toString() {
        return "Area can not be negative.";
    }
}

class Rectangle {
    private int length;
    private int breadth;

    public Rectangle( int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public void  calcArea() throws NegativeAreaException {
        if(length < 0 || breadth < 0) {
            throw new NegativeAreaException();
        } else {
            System.out.println("AREA : " + (this.length * this.breadth));
        }
    }
}
public class CustomExceptionHandling {
    public static void main(String[] args) {
        Rectangle r = new Rectangle(-1, 5);
        Rectangle r2 = new Rectangle(5, 5);
        try {
            r2.calcArea();
            r.calcArea();
        } catch (NegativeAreaException nae) {
            System.out.println("ERROR: " + nae);
        }

    }
}

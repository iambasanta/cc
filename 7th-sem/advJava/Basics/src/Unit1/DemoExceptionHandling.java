package Unit1;
import java.util.*;
// it is a mechanism to handle runtime error, it uses following keywords
// try: used to surround the code that might cause error
// catch: used to handle error that is caught on try
// throw: to explicitly throw an error i.e. to throw error from any place
// finally: to always make the code run
// throws: to handle error that might generate from method

public class DemoExceptionHandling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number : ");
        int num1 = sc.nextInt();

        System.out.println("Enter second number : ");
        int num2 = sc.nextInt();

        try {
            // division example
             int div = num1 / num2;
             System.out.println("RESULT : " + div);

        } catch (ArithmeticException ae) {
            System.out.println("ERROR : DENOMINATOR CAN NOT BE 0. \n" + ae);
        } finally {
            System.out.println("FINALLY: always runs.");
        }
        System.out.println("Out of catch block.");
    }
}

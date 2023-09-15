package Unit1;

import java.util.Scanner;

public class ClassDemo {
    public static void main(String[] args) {
        System.out.println("YOYOYO, I'm learning Java.");
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number: ");
        int num1 = sc.nextInt();

        System.out.println("Enter second number: ");
        int num2 = sc.nextInt();

        int sum = num1 + num2;
        int diff = num1 - num2;
        int mul = num1 * num2;
        int div = num1 / num2;

        System.out.println("SUM: " + sum);
        System.out.println("DIFFERENCE: " + diff);
        System.out.println("MULTIPLICATION: " + mul);
        System.out.println("DIVISION: " + div);
    }
}

package Unit1;
// in inheritance if super class and sub class have method with same name
// and same signature (return type and params)
// to call overriden method of superclass, super keyword and @Override should be used

import java.util.SortedMap;

class Calculation {
   public void calc1() {
       System.out.println("This is calc1 of super class.");
   }
   public void calc2(int x, int y) {
       System.out.println("SUM: " + (x + y));
   }
}

class Solution extends Calculation {
    @Override
    public void calc1() {
        super.calc1();
        System.out.println("This is calc1 of subclass.");
    }
    @Override

    public void calc2(int x, int y) {
        super.calc2(x, y);
        System.out.println("DIFFERENCE: "+ (x - y));
    }
}
public class DemoMethodOverriding {
    public static void main(String[] args) {
        Solution s = new Solution();
        s.calc1();
        s.calc2(15,5);
    }
}

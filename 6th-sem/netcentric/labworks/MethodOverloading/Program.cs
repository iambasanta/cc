using System;

namespace MethodOverloading
{

    class Calculation
    {
        public void calc()
        {
           Console.WriteLine("mitakshya");
        }        

        public void calc(int x, int y)
        {
            Console.WriteLine(x + y);
        }        

        public void calc(double x, double y)
        {
           Console.WriteLine(x * y);
        }        

        public void calc(int x, int y, int z)
        {
           Console.WriteLine((x * y) + z);
        }        

    }

    class Program
    {
        static void Main(string[] args)
        {
            Calculation c1 = new Calculation();

            // calls calc with no parameters
            c1.calc();

            // calls calc with two int parameters
            c1.calc(33, 36);

            // calls calc with two double parameters
            c1.calc(3.3, 3.6);

            // calls calc with three parameters
            c1.calc(10, 10, 10);

        }
    }
}


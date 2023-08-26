using System;

namespace AbstractClass
{
    public abstract class Rectangle
    {
        public abstract void CalculateArea();
    }

    public class Square : Rectangle
    {
        public int Side { get; set; }

        public override void CalculateArea()
        {
            Console.WriteLine("Area: " + (Side * Side));
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Square s = new Square();
            s.Side = 10;
            Console.WriteLine("Side: " + s.Side);
            s.CalculateArea();
        }
    }
}

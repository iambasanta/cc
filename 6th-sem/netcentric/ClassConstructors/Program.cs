using System;

namespace ClassConstructors
{
    class Rectangle
    {
        // instance variables
        private int length;
        private int breadth;
        
        // default constructor
        public Rectangle()
        {
           Console.WriteLine("default constructor");
        }

        // parameterized constructor
        public Rectangle(int length, int breadth)
        {
           this.length = length; 
           this.breadth = breadth; 
        }

        // methods
        public int calculateArea()
        {
           return this.length * this.breadth; 
        }

        public void calculatePerimeter()
        {
           Console.WriteLine("PERIMETER : "+(2*(this.length + this.breadth)));
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            // calling default constructor
            Rectangle r1 = new Rectangle();

            // calling parameterized constructor
            Rectangle r2 = new Rectangle(20,30);

            // calling methods
            r2.calculatePerimeter();

            int area = r2.calculateArea();
            Console.WriteLine("AREA : "+ area);
        }
    }
}

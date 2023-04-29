using System;

namespace ClassAndObjects
{
    class Rectangle
    {
        // instance variables /class data/ class attributes
        public int length;        
        public int breadth;        

        // Method without parameters and without return values
        public void displayRectangle()
        {
            Console.WriteLine("This is Rectangle.");
        }

        // Method with parameters and without return values
        public void setValues(int length, int breadth)
        {
            this.length = length; 
            this.breadth = breadth; 
        }

        // Method without parameters and with return values
        public int calculatePerimeter() 
        {
            int perimeter = 2 * (this.length + this.breadth);
            return perimeter;
        }

        // Method with parameters and with return values
        public int calculateArea(int length, int breadth)
        {
            this.length = length; 
            this.breadth = breadth; 

            int area = this.length * this.breadth;
            return area;
        }

    }

    class Program
    {
        static void Main(string[] args)
        {
            Rectangle r1 = new Rectangle();
            r1.length = 10;
            r1.breadth = 20;

            Rectangle r2 = new Rectangle();
            r2.length = 12;
            r2.breadth = 30;

            int are1 = r1.length * r1.breadth;
            int are2 = r2.length * r2.breadth;

            Console.WriteLine("area of r1 is: "+are1);
            Console.WriteLine("area of r2 is: "+are2);

            Console.WriteLine("---METHODS IN ACTION---");

            Rectangle r3 = new Rectangle();
            r3.displayRectangle();
            r3.setValues(200,300);
            int perimeter = r3.calculatePerimeter();
            Console.WriteLine("perimeter of rectangle is: "+perimeter);
            int area = r3.calculateArea(12,15);
            Console.WriteLine("area of rectangle is: "+area);
        }
    }
}

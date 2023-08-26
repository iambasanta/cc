using System;

namespace LanguageProperties
{
    class Rectangle
    {
        public int length;        
        public int breadth;        

        public Rectangle(int length, int breadth)
        {
           this.length = length; 
           this.breadth = breadth; 
        }

        public int Length
        {
            get { return length; }
            set { length = value; }
        }

        public int Breadth
        {
            get { return breadth; }
            set { breadth = value; }
        }

        public void calculateArea()
        {
           Console.WriteLine("AREA : "+(this.length * this.breadth));
        }

    }

    class Program
    {
        static void Main(string[] args)
        {
            // create object using constructor
            Rectangle r1 = new Rectangle(20,30);

            // call method
            Console.WriteLine("Length: "+ r1.length);
            Console.WriteLine("Breadth: "+ r1.breadth);
            r1.calculateArea();

            // use properties
            r1.length = 10;
            r1.breadth = 50;
            Console.WriteLine("USING PROPERTIES");
            Console.WriteLine("Length: "+ r1.length);
            Console.WriteLine("Breadth: "+ r1.breadth);
            r1.calculateArea();
        }
    }
}

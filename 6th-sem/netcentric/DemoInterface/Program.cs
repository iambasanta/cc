using System;

namespace DemoInterface
{
    public interface IDrawable
    {
        void draw();        
    }

    public class Rectangle : IDrawable
    {
       public void draw()
       {
           Console.WriteLine("Drawing rectangle...");
       } 
    }

    public class Circle : IDrawable
    {
       public void draw()
       {
           Console.WriteLine("Drawing circle...");
       } 
    }

    class Program
    {
        static void Main(string[] args)
        {
            IDrawable d;
            d = new Rectangle();
            d.draw();

            d = new Circle();
            d.draw();
        }
    }
}

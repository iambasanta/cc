using System;

namespace BoxDemoClass
{
    class Box
    {
        private int length;
        private int breadth;
        private int height;

        public Box(int length, int breadth, int height)
        {
            this.length = length;
            this.breadth = breadth;
            this.height = height;
        }

        public void getVolume()
        {
           int volume = this.length * this.breadth * this.height; 
           Console.WriteLine("Volume: " + volume);
        }
        
    }

    class BoxWeight: Box
    {
        private double weight;

        public BoxWeight(int length, int breadth, int height, double weight):base (length, breadth, height)
        {
           this.weight = weight;
        }

        public void getWeight()
        {
           Console.WriteLine("Weight: " + this.weight);
        }
        
    }

    class Program
    {
        static void Main(string[] args)
        {
            BoxWeight b1 = new BoxWeight(10, 20, 30, 69.69);
            b1.getVolume();
            b1.getWeight();

            BoxWeight b2 = new BoxWeight(5, 5, 5, 69.69);
            b2.getVolume();
            b2.getWeight();
        }
    }
}

using System;

namespace InheritanceConstructorDemo
{
    class TwoWheeler
    {
        private int reg_no;        
        private string name;
        private string brand;

        public TwoWheeler()
        {
           Console.WriteLine("default constructor : SUPER CLASS");
        }

        public TwoWheeler(int reg_no, string name, string brand)
        {
            this.reg_no = reg_no;
            this.name = name;
            this.brand = brand;
        }

        public void displayTwoWheel()
        {
           Console.WriteLine("REG NO: " + this.reg_no);
           Console.WriteLine("NAME: " + this.name);
           Console.WriteLine("BRAND: " + this.brand);
        }
    }

    class Bike:TwoWheeler
    {
        private string category;
        private int speed;
        
        public Bike()
        {
           Console.WriteLine("default constructor : BIKE CLASS");
        }

        public Bike(int speed, string category)
        {
            this.speed = speed;
            this.category = category;
        }

        public Bike(int reg_no, string name, string brand, int speed, string category): base (reg_no, name, brand)
        {
            this.speed = speed;
            this.category = category;
        }

        public void displayBike()
        {
            Console.WriteLine("SPEED: " + this.speed);
            Console.WriteLine("CATEGORY: " + this.category);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            // first calls parent's default constructor
            // and calls parent's default constructor
            Bike b1 = new Bike();

            //calls parapeterized constructor
            Bike b2 = new Bike(174, "Breakout", "Harley-Davidson", 6969, "Electric");
            b2.displayTwoWheel();
            b2.displayBike();
        }
    }
}

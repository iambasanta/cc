using System;

namespace DemoInheritance
{
    class TwoWheeler
    {
        private int reg_no;        
        private string name;
        private string brand;

        public void setTwoWhell(int reg_no, string name, string brand)
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
        
        public void setBike(int speed, string category)
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
            Bike b1 = new Bike();

            // calling TwoWheeler Method
            b1.setTwoWhell(117, "Breakout", "Harley-Davidson");
            b1.displayTwoWheel();

            // own property
            b1.setBike(6969, "Electric");
            b1.displayBike();
        }
    }
}

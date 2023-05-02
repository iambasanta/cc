using System;

namespace MethodOverriding
{
    class Animal
    {
        public virtual void eat()
        {
           Console.WriteLine("Eating...");
        }        
    }

    class Dog: Animal
    {
       public override void eat()
       {
           Console.WriteLine("Eating bone...");
       } 
    }

    class Cat: Animal
    {
       public override void eat()
       {
           Console.WriteLine("Eating milk...");
       } 
    }

    class Program
    {
        static void Main(string[] args)
        {
            Animal a = new Animal();
            a.eat();

            Dog d = new Dog();
            d.eat();

            Cat c = new Cat();
            c.eat();
        }
    }
}

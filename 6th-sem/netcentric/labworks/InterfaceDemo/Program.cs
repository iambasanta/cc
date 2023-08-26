using System;

namespace DemoInterface
{
    public interface IAnimal
    {
        void MakeSound();        
    }

    public class Dog : IAnimal
    {
       public void MakeSound()
       {
           Console.WriteLine("I'm a dog. bhaw bhaw");
       } 
    }

    public class Cat : IAnimal
    {
       public void MakeSound()
       {
           Console.WriteLine("I'm a cat. meow meow");
       } 
    }

    class Program
    {
        static void Main(string[] args)
        {
            IAnimal a;
            a = new Dog();
            a.MakeSound();

            a = new Cat();
            a.MakeSound();
        }
    }
}

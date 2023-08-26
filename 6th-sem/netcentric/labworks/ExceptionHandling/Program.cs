using System;

namespace DemoExceptionHandling
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int a = 10;
                int b = 0;
                int x = a/b;
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }

            finally {
                Console.WriteLine("Finally this code is executing...");
            }

            Console.WriteLine("Rest of the code...");
        }
    }
}


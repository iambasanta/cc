using System;

namespace ClassProperties
{
    class Student
    {
        private string name;
        private int rollNo;

        // property
        public string Name 
        {
            get { return name; }   // get method
            set { name = value; }  // set method
        }

        public int RollNo
        {
            get { return rollNo; }   // get method
            set { rollNo = value; }  // set method
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student();

            // calls set
            s1.Name = "Hisagi";
            s1.RollNo = 69;

            // calls get
            Console.WriteLine("NAME : " + s1.Name);
            Console.WriteLine("ROLLNO : " + s1.RollNo);
        }
    }
}

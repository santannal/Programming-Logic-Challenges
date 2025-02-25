using System;

public class Mean
{
    public static void Main(string[] args)
    {
        Console.ForegroundColor = ConsoleColor.Green;
        Console.BackgroundColor = ConsoleColor.Black;
        Console.Clear(); 

        Console.Title = "=== Arithmetic Mean ==\n\n";

        Console.Write("Enter the first number: ");
        double n1 = double.Parse(Console.ReadLine());
        
        Console.Write("Enter the second number: ");
        double n2 = double.Parse(Console.ReadLine());
        
        Console.Write("Enter the third number: ");
        double n3 = double.Parse(Console.ReadLine());
        
        double mean = (n1 + n2 + n3) / 3;
        
        Console.WriteLine($"The Arithmetic Mean is: {mean:F2}");
    }
}

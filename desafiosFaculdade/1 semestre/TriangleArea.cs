using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        
        Console.ForegroundColor = ConsoleColor.Green;
        Console.BackgroundColor = ConsoleColor.Black;
        
        Console.Title = "=== Triangle's Area ==\n";
        
        Console.Write("Enter the base value: ");
        double width = double.Parse(Console.ReadLine());

        Console.Write("Enter the height value: ");
        double height = double.Parse(Console.ReadLine());
        
        double triangle = (width * height) / 2;
        
        Console.WriteLine($"The triangle's area is: {triangle:F2} cm2");
    }
}
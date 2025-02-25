using System;

public class Hypotenuse
{
    public static void Main(string[] args)
    {
        Console.ForegroundColor = ConsoleColor.Green;
        Console.BackgroundColor = ConsoleColor.Black;

        Console.Title = "=== Hypotenuse Value ==\n\n";

        Console.Write("Enter the first cateto value: ");
        double c1 = double.Parse(Console.ReadLine());
        
        Console.Write("Enter the second cateto value: ");
        double c2 = double.Parse(Console.ReadLine());
        
        double hypotenusa = Math.Sqrt(Math.Pow(c1, 2) + Math.Pow(c2, 2));
        
        Console.WriteLine($"The hypotenusa value is: {hypotenusa:F2} cm");
    }
}

using System;

public class Circle
{
    public static void Main(string[] args)
    {
        Console.ForegroundColor = ConsoleColor.Green;
        Console.BackgroundColor = ConsoleColor.Black;

        Console.Title = "=== area of the circle ==\n\n";

        Console.Write("Enter the ray value: ");
        double ray = double.Parse(Console.ReadLine());
        
        double circleArea = 3.14159 * Math.Pow(ray, 2);
        double perimeter = 2 * 3.14159 * ray;
        
        Console.WriteLine($"The area of the circle is: {circleArea:F2} cm2\nThe perimeter of the circle is: {perimeter:F2} cm");
    }
}

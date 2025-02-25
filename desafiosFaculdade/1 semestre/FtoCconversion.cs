using System;

public class FahrenheitConversion
{
    public static void Main(string[] args)
    {

        Console.ForegroundColor = ConsoleColor.White;
        Console.BackgroundColor = ConsoleColor.Black;

        Console.Title = "=== Fahrenheit Conversion ==\n";

        Console.Write("Enter the Fahrenheit value: ");
        double fahrenheit = double.Parse(Console.ReadLine());

        double celsius = (fahrenheit - 32) / 1.8;

        Console.WriteLine($"The temperature {fahrenheit:F1} F (Fahrenheit) is {celsius:F1} oC (Celsius)");
    }
}

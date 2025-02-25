using System;

public class ProcuctDiscount
{
    public static void Main(string[] args)
    {
        Console.ForegroundColor = ConsoleColor.Green;
        Console.BackgroundColor = ConsoleColor.Black;
        Console.Clear(); 

        Console.Title = "=== SantAnna's Shop ==\n";

        Console.Write("Enter the product's price: ");
        double price = double.Parse(Console.ReadLine());
        
        Console.Write("Enter the discount (in percent %): ");
        double discount = double.Parse(Console.ReadLine());

        double finalValue = price - (price * (discount/100));
        
        Console.WriteLine($"The new product's price is: $ {finalValue:F2}");
    }
}

using System;

public class Pascoa
{
    public static void Main(string[] args)
    {
        int a,b,c,d,e,f,g,h,i,k,l,m,mes,dia;
        string z;
        
        Console.WriteLine("Digite o ano: ");
        int ano = int.Parse(Console.ReadLine());
        a = ano % 19;
        b = ano / 100;
        c = ano % 100;
        d = b/4;
        e = b%4;
        f = (b+8) / 25;
        g = (b - f + 1) / 3;
        h = (19 * a + b - d - g + 15) % 30;
        i = c / 4;
        k = c % 4;
        l = (32 + 2 * e + 2 * i - h - k) % 7;
        m = (a + 11 * h + 22 * l)/ 451;
        mes = (h + l - 7 * m + 114)/31;
        dia = 1 + (h  + l - 7 * m + 114) % 31;
        
        if(mes == 3){
            z = "Março";
        } else{
            z = "Abril";
        }
        
        Console.WriteLine($"A data da Pascoa sera: {dia} de {z} de {ano}");
    }
}
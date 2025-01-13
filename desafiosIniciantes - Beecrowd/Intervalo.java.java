/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.io.IOException;
 
import java.util.Scanner;
public class Main
{

		public static void main(String[] args) throws IOException {
 
        Scanner scanner = new Scanner(System.in);

        double num = scanner.nextDouble();

        if(num < 0 || num > 100)
            System.out.println("Fora de intervalo");
        else if(num <= 25)
            System.out.println("Intervalo [0,25]");
        else if(num <= 50)
            System.out.println("Intervalo (25,50]");
        else if(num <= 75)
            System.out.println("Intervalo (50,75]");
        else
            System.out.println("Intervalo (75,100]");
    }
}
 

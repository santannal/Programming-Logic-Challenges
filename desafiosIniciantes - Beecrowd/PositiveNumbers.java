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
        double[] numbers = new double[6];
        int pos=0;

        for(int i = 0; i < 6; ++i){
           numbers[i] = scanner.nextDouble();
           if(numbers[i] >= 0){
               ++pos;
           }
        }
        
        System.out.println(pos + " valores positivos");
    }
}
 

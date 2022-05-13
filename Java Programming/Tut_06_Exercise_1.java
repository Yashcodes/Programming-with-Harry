import java.util.Scanner;

public class Tut_06_Exercise_1 {
    public static void main(String[] args) {
        System.out.println("Enter your subject marks:-");

        Scanner sc = new Scanner(System.in);

        System.out.print("For Subject 1 out of 100: ");
        float a = sc.nextFloat();

        System.out.print("For Subject 2 out of 100: ");
        float b = sc.nextFloat();

        System.out.print("For Subject 3 out of 100: ");
        float c = sc.nextFloat();

        System.out.print("For Subject 4 out of 100: ");
        float d = sc.nextFloat();

        System.out.print("For Subject 5 out of 100: ");
        float e = sc.nextFloat();


        float sum = a+b+c+d+e;
        System.out.println("Your total obtained marks out of 500 are: " + sum);

        float percent;
        percent = (sum/500)*100;
        
        System.out.println("Your total precentage are " + percent);
    }
}

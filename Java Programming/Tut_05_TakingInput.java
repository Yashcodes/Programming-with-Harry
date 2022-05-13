import java.util.Scanner;

public class Tut_05_TakingInput {
    public static void main(String[] args) {
        System.out.println("Taking Input from User");
        Scanner sc = new Scanner(System.in);

        // System.out.println("Enter number 1:");
        // int a = sc.nextInt();

        // System.out.println("Enter number 2:");
        // int b = sc.nextInt();

        // int sum = a+b;
        // System.out.println("The sum of the given numbers is:");
        // System.out.println(sum);

        // // or we can also use concat operator (+) to print the result inthe same line with text: like the syntax below:

        // System.out.println("The sum of the given numbers is: " + sum);

        // boolean b1 = sc.hasNextInt();
        // System.out.println(b1);

        // String str = sc.next();
        // System.out.println(str);

        // here by next() method, we can scan the given string in the Variable......for scanning the complete line, we can use nextLine() method.

        String str = sc.nextLine();
        System.out.println(str);
    }
}
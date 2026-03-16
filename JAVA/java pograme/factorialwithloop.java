import java.util.Scanner;

public class factorialwithloop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int factorial = 1;
        for (int i = x;i>=1;i--) {
            factorial = factorial * i;
        }
            System.out.println(factorial);
        }

    }

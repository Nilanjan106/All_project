import java.util.Random;
import java.util.Scanner;

public class rock_paper_01_october {
    public static void main(String[] args) {
        System.out.println("enter 0 for rock,enter 1 for paper,enter 2 for scissors");
        Scanner sc = new Scanner(System.in);
        Random random = new Random();
        int userinput = sc.nextInt();
        int computerinput = random.nextInt(0,2);
        System.out.println(computerinput);
        if (userinput>2||userinput<0 ) {
            System.out.println("invalid");

        } else if (userinput == computerinput) {
            System.out.println("draw");

        } else if (userinput == 0 && computerinput == 1 || userinput == 1 && computerinput == 2 || userinput == 2 && computerinput == 0) {
            System.out.println("computer wins");

        } else {
            System.out.println("user win");
        }

    }
}

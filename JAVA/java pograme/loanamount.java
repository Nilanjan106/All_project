import java.util.Scanner; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class loanamount {
    public static void main (String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER AMOUNT OF GOLD ");
        int A = sc.nextInt();
        System.out.println("ENTER AMOUNT OF SILVER");
        int B = sc.nextInt();
        System.out.println("ENTER PRICE OF GOLD");
        int X = sc.nextInt();
        System.out.println("ENTER PRICE OF SILVER");
        int Y = sc.nextInt();
        System.out.println("ENTER THE LOAN AMOUNT");
        int K = sc.nextInt();




        // gold price
        int gold = A*X;
        //silver price
        int silver = B*Y;
        //sum of silver and gold price
        int total =  A*X + B*Y;
        if (K==gold || K<gold) {
            System.out.println("YES");
        } else if (K==silver || K<silver) {
            System.out.println("YES");
        } else if (K==total || K<total) {
            System.out.println("YES");
        } else  {
            System.out.println("NO");

        }
    }
}


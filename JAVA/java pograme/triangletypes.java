import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class triangletypes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if (a + b >= c) {
            System.out.println("YOU INPUT RIGHT DATA");
            if (a == b & b == c & a == c) {
                System.out.println("THIS IS AN EQUILATERAL TRIANGLE");
            } else if (a == b || a == c || c == b) {
                System.out.println("THIS IS AN ISOSCALES TRIANGLE");
            } else if (a != b & b != c & a != c) {
                System.out.println("THIS IS AN SCALENE TRIANGLE");
            }

        } else {
            System.out.println("THIS IS NOT RIGHT DATA");
        }
    }
}
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class primeno {
    public static void main (String[] args) {
        int count = 0;
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        for (int i = 1;i<=a;i++) {
            if (a % i == 0) {
                count++;
            }
        }
            if (count == 2) {
                System.out.println("This is a Prime Number");
            } else {
                System.out.println("This is Not a Prime Number");
            }
        }

    }


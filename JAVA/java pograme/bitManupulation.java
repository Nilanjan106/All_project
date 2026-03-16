import java.util.Scanner;

public class bitManupulation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


//        Get Bit
//        int n = 5;
//        int pos = 2;
//        int bitMask = 1<<pos;
//        if ((bitMask & n) == 0) {
//            System.out.println("Bit was 0");
//        } else {
//            System.out.println("Bit was 1");
//        }

//        Set Bit


//        int n = 5;
//        int pos = 1;
//        int bitmask = 1<<pos;
//        int newnumber = (bitmask | n);
//        System.out.println(newnumber);

//        Clear bit

//        int n = 5;
//        int pos = 2;
//        int bitmask = 1<<pos;
//        int notBitMask = ~(bitmask);
//        int newNumber = (notBitMask & n);
//        System.out.println(newNumber);

//        Update Bit

        int n = 5;
        int pos = 2;
        int oper = sc.nextInt();
        if (oper == 1) {
            int bitMask = 1<<pos;
            int newBItMask = (bitMask | n);
            System.out.println(newBItMask);
        } else {
            int bitMask = 1<<pos;
            int notBitMask = ~(bitMask);
            int newBitMask = (notBitMask & n);
            System.out.println(newBitMask);
        }


    }
}

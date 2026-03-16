import java.util.Scanner;


public class functionPractise {
//    public static void printMyName (String st) {
//        System.out.println(st);
//        return;
//
//    }
//    public static int calculateSum (int a, int b) {
//        int sum = a+b;
//        System.out.println(sum);
//        return sum;
//    }
//    public static int multiplyNum (int a, int b) {
//        int mul = a*b;
//        return mul;
//    }

//    public static int factorial (int a) {
//        int factorial1 = 1;
//        for (int i = a; i>=1; i--) {
//            factorial1 *= i;
//
//        }
//        return factorial1;
//    }
// Java Practise set 1

//question no. 1

//    public static int average (int a,int b, int c) {
//        int averagen = (a+b+c)/3;
//        return averagen;
//    }
//    question no. 2
//    public  static int sumOddNumber (int a) {
//        int sum = 0;
//        for (int i = 1;i <= a;i++) {
//            if (i%2 != 0) {
//                sum += i;
//            }
//        }
//        return sum;
//    }
//    Question no 3
//    public static void greaterNumber (int a,int b) {
//        if (a>b) {
//            System.out.println("greater is " + a);
//        } else if (b>a){
//            System.out.println("greater is " + b);
//
//        } else {
//            System.out.println("Two Numbers are Equal");
//        }
//        return;
//    }
//    Question no 4

//    public static double circumference (double a) {
//        double cir = 2*3.14*a;
//        return cir;
//    }

//    Question no 5

//    public static void voterAvailable (int a) {
//        if (a>=18) {
//            System.out.println("You are eligible for vote");
//        } else {
//            System.out.println("You are not eligible for vote");
//        }
//        return;
//    }
//    question no 6
//    public static void infiniteLoop () {
//        int i = 1;
//        do {
//
//            System.out.print("*");
//            i--;
//        }
//        while (i<=5);
//        return;
//    }

//    Question no. 7


    //    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int positive = 0;
//        int negative = 0;
//        int zero = 0;
//        System.out.println("numbers of element you want to store");
//        int n = sc.nextInt();
//        int[] array = new int[n];
//        System.out.println("Enter your numbers");
//        for (int i = 0;i<n;i++) {
//            array[i] = sc.nextInt();
//        }
//        for (int i = 0; i < n; i++) {
//            if (array[i] > 0) {
//                positive++;
//            } else if (array[i] < 0) {
//                negative++;
//            } else {
//                zero++;
//            }
//        }
//        System.out.println("Positive Numbers are " + positive);
//        System.out.println("Negative Numbers are " + negative);
//        System.out.println("zeros are " + zero );
//
//
//    }
//}
//    Question no. 8
    
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        double x = sc.nextInt();
        double n = sc.nextInt();
        System.out.println(Math.pow(x,n));

        }

    }

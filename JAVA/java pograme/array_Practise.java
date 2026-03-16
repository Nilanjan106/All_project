//import java.util.Scanner;
//
//public class array_Practise {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Number of elements you want to store ");
//        int size = sc.nextInt();
//
//        System.out.println("Enter Your Numbers ");
//        int arr[] = new int[size];
//
//        for (int i = 0; i < size; i++) {
//            arr[i] = sc.nextInt();
//        }
//        System.out.println("Number You want to Find ");
//        int x = sc.nextInt();
//        for (int i = 0; i < arr.length; i++) {
//            if (arr[i] == x) {
//                System.out.println("Your Number is at index of " + i);
//            }
//            }
//        Enter Your Number of Rows and Columns
//           int row = sc.nextInt();
//           int col = sc.nextInt();
//           int arr [][] = new int[row][col];
//        System.out.println("Enter YOur Number");
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < col; j++) {
//                arr[i][j] = sc.nextInt();
//            }
//        }
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < col; j++) {
//                System.out.print(arr[i][j] + " ");
//            }
//            System.out.println();
//        }


//        int size = sc.nextInt();
//        String [] arr = new String[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = sc.next();
//        }
//        for (int i = 0; i < size;i++) {
//            System.out.println("name " + (i+1) + " " + arr[i]);
//        }
//        int size = sc.nextInt();
//        int arr [] = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = sc.nextInt();
//        }
//        int max = Integer.MAX_VALUE;
//        int min = Integer.MIN_VALUE;
//        for (int i = 0; i < arr.length; i++) {
//            if (arr[i] < min) {
//                min = arr[i];
//            }
//            if(arr[i] > max) {
//                max = arr[i];
//            }
//            System.out.println("Maximum value is " + max);
//            System.out.println("Minimum value is " + min);
//        }
//        Sorting an array
//        System.out.println("Enter how many number you want  to sort");
//        int size = sc.nextInt();
//        int arr [] = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = sc.nextInt();
//        }
//        int temp = 0;
//        for (int i = 0; i < arr.length; i++) {
//            for (int j = i + 1; j < arr.length; j++) {
//                if (arr[j] < arr[i]) {
//                    temp = arr[i];
//                    arr[i] = arr[j];
//                    arr[j] = temp;
//
//                }
//            }
//        }
//        for (int i = 0; i < arr.length; i++) {
//            System.out.print(arr[i] + " ");
//        }
//        Maximum or Minimum


//        System.out.println("Enter how many number you want  to ");
//        int size = sc.nextInt();
//        int arr[] = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = sc.nextInt();
//        }
//        int max = arr[0];
//        for (int i = 1; i < arr.length; i++) {
//            if (arr[i] > max) {
//                max = arr[i];
//            }
//        }
//        System.out.println("Maximum Value is " + max);
//    }
//}

//        Hcf calculate
//        System.out.println("Among How many number you want HCF");
//        int size = sc.nextInt();
//        int[] arr = new int[10];
//        System.out.println("Enter numbers");
//        int a = sc.nextInt();
//        int b = sc.nextInt();
//        int c = sc.nextInt();
//        if (a < b || b < a ) {
//            for (int i = 1; i <= a; i++) {
//                if (a % i == 0 && b % i == 0 && c % i == 0) {
//                    arr[i] = i;
//                }
//            }
//        }
//        int max = arr[0];
//        for ( int i = 1; i < arr.length; i++) {
//            if (arr[i] > max) {
//                max = arr[i];
//
//            }
//        }
//        System.out.println("HCF is " + max);
//    }

//        Fibonachhi series


//        System.out.println("How many number of terms in Fibonacchi Series");
//        int n = sc.nextInt();
//        int arr [] = new int[n];
//        arr[0] = 0;
//        arr[1] = 1;
//        for (int i = 2; i < arr.length; i++) {
//            arr[i] = arr[i-2] + arr[i-1];
//            System.out.print(arr[i] + " ");
//        }


//        StringBuilder sb = new StringBuilder("NILANJAN");
//        for (int i = 0; i < sb.length()/2;i++) {
//            int back = sb.length() - 1 - i;
//            int first = i;
//            char frontchar = sb.charAt(first);
//            char backchar = sb.charAt(back);
//            sb.setCharAt(first,backchar);
//            sb.setCharAt(back,frontchar);
//        }
//        System.out.println(sb);
//
//        max value

//        int[] arr = {7,8,3,1,2};
//        int max = arr[0];
//        for (int i = 0; i < arr.length-1; i++) {
//            if (arr[i+1] > max) {
//                max = arr[i+1];
//            }
//        }
//        System.out.println(max);

//bubble sorting ascending order
//time complexity =  (n^2);

import java.util.Scanner;
//
public class array_Practise {
    public static void printAraay(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    public static void main(String[] args) {

        int[] arr = {7, 3, 1, 8, 9, 6};
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printAraay(arr);
    }
}

//Bubble sorting decending order

//public class array_Practise {
//    public static void printAraay(int arr []) {
//        for (int i = 0; i < arr.length; i++) {
//            System.out.print(arr[i] + " ");
//        }
//    }
//    public static void main(String[] args) {
//
//        int [] arr = {7,3,1,8,9,6};
//        for (int i = 0; i <arr.length-1;i++) {
//            for (int j = 0; j < arr.length-i-1;j++) {
//                if (arr[j] < arr[j+1]) {
//                    int temp = arr[j];
//                    arr[j] = arr[j+1];
//                    arr[j+1] = temp;
//                }
//            }
//        }
//        printAraay(arr);

//selection sorting
//time complexity =  (n^2);

//public class array_Practise {
//    public static void printAraay(int arr []) {
//        for (int i = 0; i < arr.length; i++) {
//            System.out.print(arr[i] + " ");
//        }
//    }
//    public static void main(String[] args) {
//        int [] arr = {7,3,1,8,9,6};
//        for (int i = 0; i <arr.length-1;i++) {
//            int smallest = i;
//            for (int j = i+1; j < arr.length;j++) {
//                if ( arr[smallest] > arr[j]) {
//                    smallest = j;
//                }
//            }
//            int temp = arr[smallest];
//            arr[smallest] = arr[i];
//            arr[i] = temp;
//        }
//        printAraay(arr);

//Insertion Sort
//
//
//public class array_Practise {
//    public static void printAraay(int arr []) {
//        for (int i = 0; i < arr.length; i++) {
//            System.out.print(arr[i] + " ");
//        }
//    }
//    public static void main(String[] args) {
//        int [] arr = {7,3,1,8,9,6};
//        for (int i = 1; i <arr.length;i++) {
//            int current = arr[i];
//            int j = i-1;
//            while (j >= 0 && current < arr[j]) {
//                arr[j+1] = arr[j];
//                j--;
//
//            }
//            arr[j+1] = current;
//        }
//        printAraay(arr);
//    }
//}



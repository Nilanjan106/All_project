//Solid Rectangle
//public class practise {
//    public static void main(String[] args) {
//        int n = 4;
//        int m = 5;
//        for (int i = 1; i <= n;i++) {
//            for (int j = 1; j <= m; j++) {
//                System.out.print("*");
//            }
//            System.out.println();
//        }
//    }
//}


// Hollow Rectangle


//public class practise {
//    public static void main(String[] args) {
//        int n = 4;
//        int m = 5;
//        for (int i = 1; i <= n;i++) {
//            for (int j = 1; j <= m; j++)
//                if (j == 1 || j == m || i == 1 || i == n) {
//                System.out.print("* ");
//            } else {
//                    System.out.print("  ");
//                }
//            System.out.println();
//        }
//    }
//}


// Inverted Half Pyramid
//
//public class practise {
//    public static void main(String[] args) {
//        int n = 5;
//        int m = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = n-i; j >=1; j--) {
//                System.out.print("*");
//            }
//            System.out.println(" ");
//        }
//    }
//}


// Half Pyramid

//public class practise {
//    public static void main(String[] args) {
//        int n = 5;
//        int m = 5;
//        for (int i = 1; i <= n; i++) {
//           for (int j = 1; j <= i ; j++) {
//                System.out.print("*");
//            }
//            System.out.println();
//
//            }
//        }
//    }

//180 degree rotated inverted half pyramid

//public class practise {
//    public static void main(String[] args) {
//        int n = 4;
//        int m = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n-i; j++) {
//                System.out.print(" ");}
//                for (int j = 1; j <= i;  j++) {
//                    System.out.print("*");
//            }
//            System.out.println();
//
//        }
//    }
//}


//Half Pyramid with Numbers

//public class practise {
//    public static void main(String[] args) {
//        int n = 5;
//        int m = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= i ; j++) {
//                System.out.print(j);
//            }
//            System.out.println();
//        }
//    }
//}


// Inverted Half Pyramid with numbers

//public class practise {
//    public static void main(String[] args) {
//        int n = 5;
//        int m = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n-i+1; j++) {
//                System.out.print(j);
//            }
//            System.out.println();
//        }
//    }
//}

//Floids Triangle

//public class practise {
//    public static void main(String[] args) {
//        int n = 5;
//        int number = 1;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= i; j++) {
//                System.out.print(number + " ");
//                number++;
//            }
//            System.out.println();
//        }
//    }
//}

//0-1 Traingle

//public class Pattern_printing {
//    public static void main(String[] args) {
//        int n = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= i; j++) {
//                if ((i+j) % 2 == 0) {
//                    System.out.print("0 ");
//                } else {
//                    System.out.print("1 ");
//                }
//            }
//            System.out.println();
//        }
//    }
//}

//Butterfly Pattern

//public class Pattern_printing {
//    public static void main(String[] args) {
//        int n = 4;
//
//
//        for (int i = 1; i <= n; i++) {
//                for (int j = 1; j<= i; j++) {
//                    System.out.print("* ");
//                }
//                for (int j = 2*n - 2*i; j >= 1; j--) {
//                    System.out.print("  ");
//                }
//                for (int j = 1; j <= i; j++) {
//                    System.out.print("* ");
//                }
//                System.out.println();
//                }
//        for (int i = n; i >= 1; i--) {
//            for (int j = i; j >= 1; j--) {
//                System.out.print("* ");
//                }
//            for (int j = 2*n - 2*i; j >= 1; j--) {
//                System.out.print("  ");
//                }
//            for (int j = i; j >= 1; j--) {
//                System.out.print("* ");
//                }
//            System.out.println();
//        }
//
//    }
//}


//Solid Rhombos


//public class Pattern_printing {
//    public static void main(String[] args) {
//        int n = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = n - i; j >= 1; j--) {
//                System.out.print(" ");
//            }
//            for (int j = 1; j <= n; j++){
//                System.out.print("*");
//            }
//
//            System.out.println();
//        }
//  }
//}

//Number Pyramid


//public class Pattern_printing {
//    public static void main(String[] args) {
//        int n = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = n-i; j >= 1; j--){
//                System.out.print(" ");
//            }
//            for (int j = 1; j <= i; j++) {
//                System.out.print(i + " ");
//            }
//            System.out.println();
//        }
//    }
//}


//Plaindrome


//public class Pattern_printing {
//    public static void main(String[] args) {
//        int n = 5;
//        for (int i = 1; i <= n; i++) {
//            for (int j = n-i; j >=1; j--){
//                System.out.print(" ");
//            }
//
//            for (int j = i; j >= 1;j--){
//                System.out.print(j);
//            }
//            for (int j = 2; j<=i;j++){
//                System.out.print(j);
//            }
//            System.out.println();
//
//        }
//    }
//}

//Daimond Pattern


public class Pattern_printing {
    public static void main(String[] args) {
        int n = 5;
        for (int i = 1; i <= n; i++) {
            for (int j = n - i; j >= 1; j--) {
                System.out.print("  ");
            }

            for (int j = i; j >= 1; j--) {
                System.out.print("* ");
            }
            for (int j = 2; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }
        for (int i = n; i >= 1; i--) {
            for (int j = n - i; j >= 1; j--) {
                System.out.print("  ");
            }

            for (int j = i; j >= 1; j--) {
                System.out.print("* ");
            }
            for (int j = 2; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }
    }
}





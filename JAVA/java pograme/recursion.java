import java.util.HashSet;

public class recursion {
//    public static void printNumber (int a, int n, int sum) {
//        if (n == a) {
//            sum += a;
//            System.out.println(sum);
//            return;
//        }
//        sum += a;
//        printNumber(a+1,n,sum);
//    }

//    factorial calculate

//    public static int factorial (int n) {
//        if (n == 0 || n == 1) {
//            return 1;
//        }
//        int fact_nm1 = factorial(n+1);
//        int fact = n*fact_nm1;
//        return fact;
//    }
//    another method -----
//public static void printNumber (int n,int sum ) {
//    if (n == 0) {
//        System.out.println(sum);
//        return ;
//    }
//    sum *= n;
//    printNumber(n-1,sum);
//}
//    public static void main(String[] args) {
//        printNumber(6,1);


//    fibonnachhi seris

//    public static void fibonacchi (int a, int b, int n) {
//        if (n == 0){
//            return;
//        }
//        int c = a + b;
//        System.out.print(c + " ");
//        fibonacchi(b,c,n-1);
//    }
//    public static void main (String [] args) {
//        int a = 0;
//        int b  = 1;
//        System.out.print(a + " ");
//        System.out.print(b + " ");
//        int n = 10;
//        fibonacchi(a,b, n-2);

//    power calculate(stack height = n)


//    public static int power (int x, int n) {
//        if (x == 0) {
//            return 0;
//        }
//        if (n == 0) {
//            return 1;
//        }
//        int pow_nm1 = power(x,n-1);
//        int pow = x*pow_nm1;
//        return pow;
//    }
//        public static void main (String [] args) {
//        int result = power(2,3);
//            System.out.println(result);
//

//        power calculate(stack height = logn)

//

//    public static int calcPower (int a, int b) {
//        if (a == 0){
//            return 0;
//        }
//        if (b == 0){
//            return 1;
//        }
//        if (b % 2 == 0){
//            return calcPower(a,b/2) * calcPower(a,b/2);
//        } else {
//            return calcPower(a,b/2) * calcPower(a,b/2) * a;
//        }
//    }
//            public static void main (String [] args) {
//        int result = calcPower(2,10);
//                System.out.println(result);

//    tower of hanoi(time complexity = 2^n;


//    public static void towerOfHanoi (int n, String src, String helper, String desti) {
//        if (n == 1) {
//            System.out.println("transfer disk " + n + " from " + src + " to " + desti);
//            return;
//        }
//        towerOfHanoi(n-1,src,desti,helper);
//        System.out.println("transfer disk " + n + " from " + src + " to " + desti);
//        towerOfHanoi(n-1,helper,src,desti);
//
//    }
//    public static void main (String [] args) {
//        int n = 3;
//        towerOfHanoi(n,"S","H","D");
//
//    reverse of a string(time complexity = o(n = string.length)


//    public static void reverse (String st,int index) {
//        if (index == 0) {
//            System.out.print(st.charAt(index));
//            return;
//        }
//        System.out.print(st.charAt(index));
//        reverse(st,index-1);
//    }
//   public static void main (String [] args) {
//        String st = " nilanjan";
//        reverse(st,st.length()-1);

//    if array is sort

//    public static boolean sorting (int arr[],int idx) {
//        if (idx == arr.length-1) {
//            return true;
//        }
//        if (arr[idx] < arr[idx+1]) {
//            return sorting(arr,idx+1);
//        } else {
//            return false;
//        }
//    }
//
//    public static void main (String [] args) {
//        int arr [] = {5,6,7,8,9,10};
//       boolean isSorted =  sorting(arr,0);
//        System.out.println(isSorted);

//     move a letter to end in string(tc = 0(n)

//    public static void movele (String st, int idx,int count, String newString) {
////        if (idx == st.length()-1) {
//            for (int i = 0; i <= count; i++) {
//                newString += 'x';
//            }
//            System.out.println(newString);
//            return;
//        }

//        char currChat = st.charAt(idx);
//        if (currChat == 'x' ) {
//            count++;
//            movele(st,idx+1,count,newString);
//        } else {
//            newString += currChat;
//            movele(st,idx+1,count,newString);
//        }
//    }
//    public static void main (String [] args) {
//        String st = "nkxhxjksxxfdgxxxhjkxhx";
//        movele(st,0,0,"");

//     remove duplicate from a string(tc == 0(n)

//    public static boolean map [] = new boolean[26];
//
//    public static void remove (String st, int idx,String newString) {
//        if (idx == st.length()) {
//            System.out.println(newString);
//            return;
//        }
//        char currch = st.charAt(idx);
//        if (map[currch-'a']) {
//            remove(st,idx+1,newString);
//        } else {
//            newString += currch;
//            map[currch-'a'] = true;
//            remove(st,idx+1,newString);
//        }
//    }
//        public static void main (String [] args) {
//        String st = "abbccghhjlliuu";
//        remove(st,0,"");

//    subscequence of a String tc= 0(2^n);

//    public static void subSquence (String st,int idx, String newString,HashSet<String> set) {
//        if (idx == st.length()) {
//            if (set.contains(newString)) {
//                return;
//            } else {
//                System.out.println(newString);
//                set.add(newString);
//                return;
//            }
//        }
//        char currch = st.charAt(idx);
////        if letter want to-
//
//        subSquence(st,idx+1,newString+currch,set);
////        if a letter does not want to-
//        subSquence(st,idx+1,newString,set);
//
//    }
//
//            public static void main (String [] args) {
//        String st = "aaaa";
//        HashSet<String> set = new HashSet<>();
//        subSquence(st,0,"",set);

//    print keyboard combination tc = 0(4^n) cause maximum options is 4

//    public static String [] keypad = {".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//    public static void printCombination (String st, int idx, String combination) {
//        if (idx == st.length()) {
//            System.out.println(combination);
//            return;
//        }
//        char currChar = st.charAt(idx);
//        String mapping = keypad[currChar-'0'];
//        for (int i = 0; i <= mapping.length()-1; i++) {
//            printCombination(st,idx+1,combination+mapping.charAt(i));
//        }
//    }
//
//
//    public static void main (String [] args) {
//        String st = "23";
//        printCombination(st,0,"");ff
//
//    Print permutation of a String
    public static void permutationSt (String st,String permutation) {
        if (st.length() == 0) {
            System.out.println(permutation);
            return;
        }
        for (int i = 0; i < st.length(); i++) {
            char currch = st.charAt(i);
            String newString = st.substring(0,i) + st.substring(i+1);
            permutationSt(newString,permutation+currch);
        }

    }

        public static void main (String [] args) {
        String st = "abc";
        permutationSt(st,"");


    }
}

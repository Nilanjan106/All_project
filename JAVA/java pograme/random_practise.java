import java.util.Scanner;

//public class random_practise {
//    public static void sortArray (int [] arr,int index) {
//        if (index == arr.length-1){
//            return;
//        }
//        if (arr[index] > arr[index+1]) {
//            System.out.println("The array is sorted");
//        } else {
//            System.out.println("The array is not sorted");
//        }
//        sortArray(arr,index+1);
//    }
//public static void reverseString (String st,int index,String newString) {
//    if (index == 0) {
//        System.out.println(newString + st.charAt(0));
//        return;
//    }
//    reverseString(st,index-1,newString+st.charAt(index));
//}
//    public static void main(String[] args) {
//    String st = "Nilanjan";
//    reverseString(st,st.length()-1,"");
//    }
//}
public class random_practise {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        int [] arr1 = new int[input];
        for (int i = 0; i < input; i++) {
            arr1[i] = new

        }
        int[] arr = {1, 6, 3};
        int count = 0;
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            count++;
        }
        System.out.println(count);
        for (int i = 0; i < arr.length; i++) {
            double sum1 = Math.pow(arr[i], count);
            int data = (int) sum1;
            sum += data;
        }
        System.out.println(sum);
        if (sum == 163) {
            System.out.println("This is a Amstrong Number");
        } else  {
            System.out.println("This is a not Amstrong Number");
        }
    }
}


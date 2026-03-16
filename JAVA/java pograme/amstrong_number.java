import java.util.Scanner;

public class amstrong_number {
    public static void main (String[] args) {
    Scanner sc = new Scanner(System.in);
    int size = sc.nextInt();
    int count = 0;
    int sum = 0;
    int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
        count++;
        arr[i]  = sc.nextInt();
    }
        for (int i = 0; i < size; i++) {
            sum += Math.pow(arr[i],count );
        System.out.println(arr[i]);
    }
        System.out.println(sum);

}
}


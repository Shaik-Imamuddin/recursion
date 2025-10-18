import java.util.Scanner;

public class Main{
    static boolean sortCheck(int arr[],int n){
        if(n==0||n==1)
            return true;
        if(arr[n-1]<arr[n-2])
            return false;
        return sortCheck(arr,n-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        if(sortCheck(arr,n))
            System.out.println("Sorted");
        else
            System.out.println("Unsorted");
    }
}
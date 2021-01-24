import java.util.Scanner;

public class Sum_of_Two_Numbers {

    public static void main(String[] args) {
         int num1,num2,sum;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter First Number:");
        num1=sc.nextInt();
        System.out.println("Enter the Second Number:");
        num2=sc.nextInt();
        sc.close();
        sum=num1+num2;
        System.out.println("Sum of these numbers:"+sum);
    }
}
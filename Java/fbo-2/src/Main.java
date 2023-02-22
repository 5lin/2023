import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
            int[] a= {1,1,0};				// 1,1,2,3,5,8,13
            int result=0,num=2;
        System.out.println("请输入想要获取的斐波那契数：");
        Scanner test=new Scanner(System.in);
        int target= test.nextInt();
            if(target==1||target == 2){
                result=1;
            }else{
                while(num < target){
                    a[2] = a[1] + a[0];
                    a[0] = a[1];
                    a[1] = a[2];
                    num++;
                }
                result = a[2];
            }
        System.out.print("你所求的斐波那契数为："+result);
        }

    }

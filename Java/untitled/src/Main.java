public class Main{
    public static void main(String[] args) {
        //冒泡排序，输出正确排序后的数组
        int[] arr = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
        int temp;
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
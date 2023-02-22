public class Main {
    public static void main(String[] args) {
        int array[]={2,4,5,1,3,7,6,8,9,10};
        int temp;
        for(int i=0;i<9;i++)	//冒泡排序的循环次数是=数组数量-1
        {

            for(int j=0;j<10-1-i;j++)	//因为每一轮都会将最大的数排序出，故此。
            {
                if(array[j]>array[j+1])
                {

                    temp=array[j];				//进行交换
                    array[j]=array[j+1];		//进行交换
                    array[j+1]=temp;			//进行交换
                }
            }
        }
        for(int i=0;i<10;i++)
        {
            System.out.print(" "+array[i]);
        }

    }
}
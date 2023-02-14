#include<stdio.h>
int main(){
	void show(int a[]);		//定义方法 
	int a[10] = {3,1,9,6,4,2,0,5,8,7};
	int min,n;
	/*选择排序*/
	for(int i=0;i<9;i++){
		min = a[i];
		for(int j = i;j<10;j++){
			if(min > a[j]){
				n = a[j];
				a[j] = min;
				min = n;
			}
		}
		a[i] = min;
		show(a);
	}
//	show(a);	方法的具体定义 
}
void show(int a[]){
	printf("//");
	for(int i=0;i<10;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
}


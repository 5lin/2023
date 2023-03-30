	#include <stdio.h>
	#include <math.h>
	int main() {
	    float a = 1, b = -3, c = -1; // 一元二次方程的系数
	    float delta = b * b - 4 * a * c; // 计算判别式
	    float x1, x2; // 两个根
	
	    if (delta >= 0) { // 判断是否有实数根
	        x1 = (-b + sqrt(delta)) / (2 * a); // 计算第一个根
	        x2 = (-b - sqrt(delta)) / (2 * a); // 计算第二个根
	        printf("一元二次方程 x2-3x-1=0 的根为：\n"); // 输出解释说明
	        printf("x1 = %.4f\n", x1); // 输出第一个根
	        printf("x2 = %.4f\n", x2); // 输出第二个根
	    } else { // delta小于0，无实数根
	        printf("一元二次方程 x2-3x-1=0 无实数根。\n"); // 输出解释说明
	    }
	
	    return 0;
	}

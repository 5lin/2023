	#include <stdio.h>
	#include <math.h>
	int main() {
	    float a = 1, b = -3, c = -1; // һԪ���η��̵�ϵ��
	    float delta = b * b - 4 * a * c; // �����б�ʽ
	    float x1, x2; // ������
	
	    if (delta >= 0) { // �ж��Ƿ���ʵ����
	        x1 = (-b + sqrt(delta)) / (2 * a); // �����һ����
	        x2 = (-b - sqrt(delta)) / (2 * a); // ����ڶ�����
	        printf("һԪ���η��� x2-3x-1=0 �ĸ�Ϊ��\n"); // �������˵��
	        printf("x1 = %.4f\n", x1); // �����һ����
	        printf("x2 = %.4f\n", x2); // ����ڶ�����
	    } else { // deltaС��0����ʵ����
	        printf("һԪ���η��� x2-3x-1=0 ��ʵ������\n"); // �������˵��
	    }
	
	    return 0;
	}

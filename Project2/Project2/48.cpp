#include<stdio.h>
int main(){
	//int a=6;
	//int b=0;
	//char d = 'c';
	//int arr[] = {1,2,a,b};/* ���ݽṹ ��Ԫ�أ�arr[0],������һ����������ַ�洢*/
	//int arr1[2] = {0,6.1};/* ��������ת������ʽ����ת��*/
	//float arr2[2] = { 0,6 };
	//printf("%d\n", &a);
	//printf("%d", &b);
	//printf("%f",  arr1[1]);
	//scanf_s("%d", &a);
	//scanf_s("%d", &b);
	//printf("%d", a + b);
	/*int sum=0;*/
	int a[5] = {2,5,7,1,0};//sort
	//	//for (int a = 1; a < 101; a++) {
	//	//	sum=sum+a;//sum+=a----sum=sum+a   sum-=a---sum=sum-a
	//	//}
	//	//printf("%d\n", sum);
	for (int i = 0; i < 5; i++) //��Ҫð�ݵĴ���-4
	{
		for (int j = 0; j < 5-i; j++)//��Ҫ�����Ĵ���
		{
			if (a[j] <a[j+1]) //��Ҫ������Ԫ��
			{
				int temp = 0;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				printf("%d", a[i]);//��������Ԫ�ص�λ��
			}

	     }
	}
	/*int a[8] = { 3,5,9,2,4,6,6,8 };
	for(int i=0;i<8;i++)
	{
		printf("%d  ", a[i]);
		for (int j = 0; j < 8 - i; j++) {
			if (a[j] < a[j + 1]) {
				int temp = 0;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}*/
	
		

		//ð������

	/*for (int i = 0; i < 2; i++) {
		printf("%d", i);
	}*/

	return 0;
}

/* ���� */
/* for(;;) */
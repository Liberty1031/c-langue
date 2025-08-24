#include<stdio.h>
	int b = 1;
//全局变量
int main(){
	//int a=6;//局部变量
	// 作用域
	//int b=0;
	//char d = 'c';
	//int arr[] = {1,2,a,b};/* 数据结构 ，元素，arr[0],索引，一连串连续地址存储*/
	//int arr1[2] = {0,6.1};/* 数据类型转换，隐式类型转换*/
	//float arr2[2] = { 0,6 };
	//printf("%d\n", &a);
	//printf("%d", &b);
	//printf("%f",  arr1[1]);
	//scanf_s("%d", &a);
	//scanf_s("%d", &b);
	//printf("%d", a + b);
	/*int sum=0;*/
	//int a[5] = {2,5,7,1,0};//sort
	////	//for (int a = 1; a < 101; a++) {
	////	//	sum=sum+a;//sum+=a----sum=sum+a   sum-=a---sum=sum-a
	////	//}
	////	//printf("%d\n", sum);
	//for (int i = 0; i < 5; i++) //需要冒泡的次数-4
	//{
	//	for (int j = 0; j < 5-i; j++)//需要交换的次数
	//	{
	//		if (a[j] <a[j+1]) //需要交换的元素
	//		{
	//			int temp = 0;
	//			temp = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = temp;
	//			printf("%d", a[i]);//交换两个元素的位置
	//		}

	//     }
	//}
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
	
		

		//冒泡排序

	/*for (int i = 0; i < 2; i++) {
		printf("%d", i);
	}*/
	//常量->字面量
	int a[10] = {  };
	char b = 'c';
	char a1 = 'a';
	printf("%c\n",a1+b);//单字符---表
	//printf("%d\n", b);
	//for (int i = 0; i < 10; i++)		
	//{
	//	scanf_s("%d", &a[i]);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", a[i]);
	//}

	return 0;
}
/* 面向过程----从结果找思路，顺序思路解决问题 */
/* 面向对象---用照对象的方法解决问题 arr.sort()*/
/* 数组 */
/* for(;;) */
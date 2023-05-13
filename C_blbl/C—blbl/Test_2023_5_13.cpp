#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	printf("哔哩哔哩\n");
//	return 0;
//}
//打印各类型的存储空间大小

// sizeof 计算的单位是Byte 字节  1Byte=1Bit

//int main() {
//	printf("%d\n", sizeof(char));
//	//打印字符型 char
//	printf("%d\n", sizeof(short));
//	//打印短整型 short
//	printf("%d\n", sizeof(int));
//	//打印 int 整型
//	printf("%d\n", sizeof(long));
//	//打印 long 长整型  C语言规定 long的存储长度是可以 大于或等于int类型的
//	printf("%d\n", sizeof(long long));
//	//打印  long long 超长整形
//	printf("%d\n", sizeof(float));
//	//打印 float 单精浮点型
//	printf("%d\n", sizeof(double));
//	//打印 double 双精浮点型
//	
//	return 0;
//}


//  %d ——整型
//  %lf—— double型 
//  %f —— float类型




//全局变量——局部变量


// 在函数体外定义的函数为全局变量
//int a = 100;
//int main()
//{	
//	//在函数体内定义的为 局部变量
//	//在全局变量名和局部变量名冲突的时候 ，局部变量优先，所以下面的变量会打印出来10
//	int a = 10;
//	printf("%d", a);
//	//虽然我们可以进行变量名冲突，但是一般情况下，不建议这样子操作
//	return 0;
//}


//进行运算
int main()
{
	int a = 10;
	int b = 15;
	int sum = 0;
	scanf("%d %d", &a,& b);
	sum = a + b;
	printf("sum= %d\n", sum);
	return 0;
}
//上面程序使用scanf 在Visual Studion 里面可能会进行如下报错
//error C4996: 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
//scanf:这个函数或者变量并不安全，可以使用scanf_s进行替换，如果你不需要的进行 可以在文件第一行进行添加 加载以下设置  _CRT_SECURE_NO_WARNINGS  详细参考本文件头部
//scanf_s是Visual Studion提供的函数，当使用这个函数编写程序只能在Visual Studion进行编译，所以会造成跨平台使用的不便，scanf是C语言提供原始函数所以我们可以使用scanf

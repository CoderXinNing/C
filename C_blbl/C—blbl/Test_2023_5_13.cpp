#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	printf("��������\n");
//	return 0;
//}
//��ӡ�����͵Ĵ洢�ռ��С

// sizeof ����ĵ�λ��Byte �ֽ�  1Byte=1Bit

//int main() {
//	printf("%d\n", sizeof(char));
//	//��ӡ�ַ��� char
//	printf("%d\n", sizeof(short));
//	//��ӡ������ short
//	printf("%d\n", sizeof(int));
//	//��ӡ int ����
//	printf("%d\n", sizeof(long));
//	//��ӡ long ������  C���Թ涨 long�Ĵ洢�����ǿ��� ���ڻ����int���͵�
//	printf("%d\n", sizeof(long long));
//	//��ӡ  long long ��������
//	printf("%d\n", sizeof(float));
//	//��ӡ float ����������
//	printf("%d\n", sizeof(double));
//	//��ӡ double ˫��������
//	
//	return 0;
//}


//  %d ��������
//  %lf���� double�� 
//  %f ���� float����




//ȫ�ֱ��������ֲ�����


// �ں������ⶨ��ĺ���Ϊȫ�ֱ���
//int a = 100;
//int main()
//{	
//	//�ں������ڶ����Ϊ �ֲ�����
//	//��ȫ�ֱ������;ֲ���������ͻ��ʱ�� ���ֲ��������ȣ���������ı������ӡ����10
//	int a = 10;
//	printf("%d", a);
//	//��Ȼ���ǿ��Խ��б�������ͻ������һ������£������������Ӳ���
//	return 0;
//}


//��������
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
//�������ʹ��scanf ��Visual Studion ������ܻ�������±���
//error C4996: 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
//scanf:����������߱���������ȫ������ʹ��scanf_s�����滻������㲻��Ҫ�Ľ��� �������ļ���һ�н������ ������������  _CRT_SECURE_NO_WARNINGS  ��ϸ�ο����ļ�ͷ��
//scanf_s��Visual Studion�ṩ�ĺ�������ʹ�����������д����ֻ����Visual Studion���б��룬���Ի���ɿ�ƽ̨ʹ�õĲ��㣬scanf��C�����ṩԭʼ�����������ǿ���ʹ��scanf

//ɨ����Ϸ
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void game()
{
	//printf("ɨ��\n");
	//�׵����ִ洢
	//�����ף����������֣�Ϊ�׾�����������1�������׾ʹ��0
	//�Ų��ס�Ϊ1����Ϸ��������Ϊ����ʾ��Χ�׵ĸ���(��Χ8������Ѱ��1���Ҵ�ӡ�ҵ���1�ĸ���)
	//���Ŷ�������һ����ų�ʼ�׵���Ϣ��һ������Ų���׵���Ϣ��֮���Էֿ���������Ϊ1���Լ���ӡ�׵�����Ҳ����Ϊ1����������
	//��ҿ�����Ϊ�Ų���׵���Ϣ���Ϊ�Ų���ʾ*�Ų��ӡ����
	//ע��㣺�߽�����ʾ����������һȦ9*9----11*11��ȫ������ַ�0

	//�׵���Ϣ�洢ͼ
	char mine[ROWS][COLS] = { 0 };
	//�Ų��׵���Ϣͼ
	char show[ROWS][COLS] = { 0 };
	//��ʼ�����̻���һƬ����
	InitBoard(mine, ROWS, COLS,'0');//��ʼ��ȫ����Ϊ0ʵ��д���������β�д����[]
	InitBoard(show, ROWS, COLS,'*');//��ʼ��ȫ����Ϊ*
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	//printf("\n");
	DisplayBoard(show, ROW, COL);//���ݹ�ȥ����Ϊ11*11�������ǽ��в���ʱֻ����9*9
	//������
	SetMind(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//�������Ƿ�д��
	///Dɨ��
	FindMine(mine,show, ROW, COL);
}
void menu()
{
	printf("*************************\n");
	printf("********1.����Ϸ*********\n");
	printf("*******0.�˳���Ϸ********\n");
	printf("****����Ϊ��Χ�׵���*****\n");
	printf("*************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����ʱ���
	printf("");
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("��Ϸ����\n");
			break;
		default:
			printf("����������Ч������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
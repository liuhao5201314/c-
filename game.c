#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�кţ�ÿһ�д�ӡһ������
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//0����ӡROWS����ӡ
	{
		printf("%d ", i);//��ÿһ�п�ͷ��ӡһ������
		for(j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//�����׵Ĺ���
void SetMind(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)//����һ���׼�һ��
	{
		int x = rand() % row+1;//ȡģ��Ϊ0--ROW-1=1-9
		int y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//����һ���׾ͼ�һ��
		}
	}
}


//1.���ڸ��������λ����Χ�����ж��ж��ٸ�'1'Ȼ��++
//2.������������Χ���ֽ�����ӵõ������־��������׵ĸ���
//'3'-'0'=3   �ַ����ּ�ȥ'0'�õ���Ӧ����
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	//1.
	//int count = 0;
	//if (mine[x][y] == '1')
	//{
	//	count++;
	//}
	
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//ɨ�׵Ĺ���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("��������������Ų��ף�x,y�����к���\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("��Ϸ����\n");
				DisplayBoard(mine, row, col);
				break;//��ӡһ��mineҲ�����׷ֲ�ͼ
			}
			else//û�в��׼���x,y������Χ�ж�����
			{
				int count=get_mine_count(mine, x, y);//����дһ�����������ж��׸���
				show[x][y] = count + '0';//����һ���ַ�
				DisplayBoard(show, ROW, COL);//��ӡ���׹��������
				win++;
			}
		}
		else
		{
			printf("��������Ƿ���������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}



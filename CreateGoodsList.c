#include "CreateGoodsList.h"
#include <string.h>

Good *CreateGoodsList(int *number)
{
	char name[10]; //��Ʒ���� 
	printf("��������Ʒ����,������ bye ��ʾ��Ʒ�б�������:   ");
	gets(name); //��ȡ��Ʒ���� 
	printf("\n");
	if( 0 == strcmp(name,"bye") )
		{
			return NULL; // û�д�����Ʒ�б�
		}

	int count = 1;
	Good *head = NULL, *pGood1 = NULL, *pGood2 = NULL;

	head = (Good *)malloc(GOOD_SIZE);
	pGood1 = head;
	pGood2 = head;


	strcpy(pGood1->name, name); //��ȡ��һ����Ʒ������ 
	memset(name, 0, 10);
	printf("��������Ʒ����:  ");
	scanf("%f", &(pGood1->price));
	getchar();
	printf("\n");
	printf("��������Ʒ��������:  ");
	scanf("%d", &(pGood1->amount));
	getchar();
	printf("\n");
	pGood1->next = NULL;
	pGood2 = pGood1;

	while(1)
		{
			printf("��������Ʒ����:  ");
			gets(name);
			printf("\n");
			if( 0 == strcmp(name,"bye") )
				{
					break; //��Ʒ��������
				}
			pGood1 = (Good *)malloc(GOOD_SIZE);
			strcpy(pGood1->name, name);
			memset(name, 0, 10);
			printf("��������Ʒ����:  ");
			scanf("%f", &(pGood1->price));
			getchar();
			printf("\n");
			printf("��������Ʒ��������:");
			scanf("%d", &(pGood1->amount));
			getchar();
			printf("\n");
			pGood1->next = NULL;
			pGood2->next = pGood1;

            pGood2 = pGood1;
			count++;
		}

    *number = count;
	return head;
}

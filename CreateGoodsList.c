#include "CreateGoodsList.h"
#include <stdio.h>
#include <string.h>

Good *CreateGoodsList(int *number)
{
	char name[10]; //��Ʒ���� 
	printf("please input good name, input bye to end:   ");
	fgets(name, 9, stdin); //��ȡ��Ʒ���� 
	name[strlen(name) - 1] = '\0';
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
	printf("input price:  ");
	scanf("%f", &(pGood1->price));
	getchar();
	printf("\n");
	printf("input amount:  ");
	scanf("%d", &(pGood1->amount));
	getchar();
	printf("\n");
	pGood1->next = NULL;
	pGood2 = pGood1;

	while(1)
		{
			printf("input good name:  ");
			fgets(name, 9, stdin); //��ȡ��Ʒ���� 
	        name[strlen(name) - 1] = '\0';
			printf("\n");
			if( 0 == strcmp(name,"bye") )
				{
					break; //��Ʒ��������
				}
			pGood1 = (Good *)malloc(GOOD_SIZE);
			strcpy(pGood1->name, name);
			memset(name, 0, 10);
			printf("input price:  ");
			scanf("%f", &(pGood1->price));
			getchar();
			printf("\n");
			printf("input amount:");
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

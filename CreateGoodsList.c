#include "CreateGoodsList.h"
#include <string.h>

Good *CreateGoodsList(int *number)
{
	char name[10]; //商品名称 
	printf("请输入商品名称,当输入 bye 表示商品列表创建结束:   ");
	gets(name); //获取商品名称 
	printf("\n");
	if( 0 == strcmp(name,"bye") )
		{
			return NULL; // 没有创建商品列表
		}

	int count = 1;
	Good *head = NULL, *pGood1 = NULL, *pGood2 = NULL;

	head = (Good *)malloc(GOOD_SIZE);
	pGood1 = head;
	pGood2 = head;


	strcpy(pGood1->name, name); //获取第一个商品的名称 
	memset(name, 0, 10);
	printf("请输入商品单价:  ");
	scanf("%f", &(pGood1->price));
	getchar();
	printf("\n");
	printf("请输入商品进货数量:  ");
	scanf("%d", &(pGood1->amount));
	getchar();
	printf("\n");
	pGood1->next = NULL;
	pGood2 = pGood1;

	while(1)
		{
			printf("请输入商品名称:  ");
			gets(name);
			printf("\n");
			if( 0 == strcmp(name,"bye") )
				{
					break; //商品创建结束
				}
			pGood1 = (Good *)malloc(GOOD_SIZE);
			strcpy(pGood1->name, name);
			memset(name, 0, 10);
			printf("请输入商品单价:  ");
			scanf("%f", &(pGood1->price));
			getchar();
			printf("\n");
			printf("请输入商品进货数量:");
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

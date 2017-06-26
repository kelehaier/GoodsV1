#include "AddAGood.h"
#include <string.h>

int AddAGood(Good *head, Good good)
{
	Good *pGood1 = head;
	Good *pGood2 = NULL;
	//定位到商品链表最后一个节点,将商品追加到最后一个节点的后面 
	while(NULL != pGood1->next)
		{
			pGood1 = pGood1->next;
		}

    pGood2 = (Good *)malloc(GOOD_SIZE);
	strcpy(pGood2->name, good.name);
	pGood2->price = good.price;
	pGood2->amount = good.amount;
	pGood2->next = NULL;
	
	pGood1->next = pGood2;

	return 0;
}

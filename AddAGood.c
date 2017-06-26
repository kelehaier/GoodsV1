#include "AddAGood.h"
#include <string.h>

int AddAGood(Good *head, Good good)
{
	Good *pGood1 = head;
	Good *pGood2 = NULL;
	//��λ����Ʒ�������һ���ڵ�,����Ʒ׷�ӵ����һ���ڵ�ĺ��� 
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

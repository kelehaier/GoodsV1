#include "ListGoods.h"

void ListGoods(Good *head)
{
	// 如果商品列表是空的 
	if(NULL == head)
	{
		printf("good list is empty!\n");
		return;
	}
	
	Good *pGood = head;
	int count = 0;
	
	while(NULL != pGood)
	{
		printf("the %d good is:\n", count + 1);
		
		printf("good name: %s \n", pGood->name);
		printf("good peice: %f \n", pGood->price);
		printf("good amount: %d \n", pGood->amount);
		
		count++;
		pGood = pGood->next;
	}
}

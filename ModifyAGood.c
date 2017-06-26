#include "ModifyAGood.h"
#include <string.h>

int ModifyAGood(Good *head, Good good)
{
	// 判断商品列表是否为空 
	if(NULL == head)
	{
		printf("good list is empty!\n");
		
		return -1;
	}
	
	Good *pGood = head;
	
	while(NULL != pGood)
	{
		if(0 == strcmp(pGood->name, good.name)) //找到要修改的商品 
		{
			pGood->price = good.price;
			pGood->amount = good.amount;
			
			break;
		}
		
		pGood = pGood->next;
	}
	
	if(NULL == pGood)
	{
		printf("can not find this good!\n");
		return -2;
	}
	
	return 0;
}

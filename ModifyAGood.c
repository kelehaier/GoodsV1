#include "ModifyAGood.h"
#include <string.h>

int ModifyAGood(Good *head, Good good)
{
	// 判断商品列表是否为空 
	if(NULL == head)
	{
		printf("商品列表为空,无法修改!\n");
		
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
		printf("没有找到此货物!\n");
		return -2;
	}
	
	return 0;
}

#include "ListGoods.h"

void ListGoods(Good *head)
{
	// 如果商品列表是空的 
	if(NULL == head)
	{
		printf("商品列表为空,无法显示!\n");
		return;
	}
	
	Good *pGood = head;
	int count = 0;
	
	while(NULL != pGood)
	{
		printf("第%d个商品信息如下:\n", count + 1);
		
		printf("商品名称: %s \n", pGood->name);
		printf("商品单价: %f \n", pGood->price);
		printf("商品进货数量: %d \n", pGood->amount);
		
		count++;
		pGood = pGood->next;
	}
}

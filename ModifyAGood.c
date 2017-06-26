#include "ModifyAGood.h"
#include <string.h>

int ModifyAGood(Good *head, Good good)
{
	// �ж���Ʒ�б��Ƿ�Ϊ�� 
	if(NULL == head)
	{
		printf("��Ʒ�б�Ϊ��,�޷��޸�!\n");
		
		return -1;
	}
	
	Good *pGood = head;
	
	while(NULL != pGood)
	{
		if(0 == strcmp(pGood->name, good.name)) //�ҵ�Ҫ�޸ĵ���Ʒ 
		{
			pGood->price = good.price;
			pGood->amount = good.amount;
			
			break;
		}
		
		pGood = pGood->next;
	}
	
	if(NULL == pGood)
	{
		printf("û���ҵ��˻���!\n");
		return -2;
	}
	
	return 0;
}
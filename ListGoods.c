#include "ListGoods.h"

void ListGoods(Good *head)
{
	// �����Ʒ�б��ǿյ� 
	if(NULL == head)
	{
		printf("��Ʒ�б�Ϊ��,�޷���ʾ!\n");
		return;
	}
	
	Good *pGood = head;
	int count = 0;
	
	while(NULL != pGood)
	{
		printf("��%d����Ʒ��Ϣ����:\n", count + 1);
		
		printf("��Ʒ����: %s \n", pGood->name);
		printf("��Ʒ����: %f \n", pGood->price);
		printf("��Ʒ��������: %d \n", pGood->amount);
		
		count++;
		pGood = pGood->next;
	}
}

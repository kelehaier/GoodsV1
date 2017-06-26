#include "DeleteAGood.h"
#include <string.h>

Good  *DeleteAGood(Good *head, const char *name, int *number)
{
	Good *pGood1 = head;
	Good *pGood2 = head->next;

	//如果删除的商品是第一个
	if(0 == strcmp(head->name, name))
		{
			head = pGood2;

			pGood1->next = NULL;
			free(pGood1);
			pGood1 = NULL;
			*number = *number - 1;
			
			printf("商品删除成功\n");

			return head;
		}
	
	while( NULL != pGood2)
		{
			if(0 == strcmp(name, pGood2->name)) //找到要删除的商品 
				{
					pGood1->next = pGood2->next;
					pGood2->next = NULL;
					free(pGood2);
					printf("删除成功!\n");

					break;
				}

			pGood1 = pGood2;
			pGood2 = pGood2->next;
		}

	if(NULL == pGood2)
		{
			printf("没找到此商品!\n");
		}

	return head;
}

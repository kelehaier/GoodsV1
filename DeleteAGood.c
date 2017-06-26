#include "DeleteAGood.h"
#include <string.h>

Good  *DeleteAGood(Good *head, const char *name, int *number)
{
	Good *pGood1 = head;
	Good *pGood2 = head->next;

	//���ɾ������Ʒ�ǵ�һ��
	if(0 == strcmp(head->name, name))
		{
			head = pGood2;

			pGood1->next = NULL;
			free(pGood1);
			pGood1 = NULL;
			*number = *number - 1;
			
			printf("��Ʒɾ���ɹ�\n");

			return head;
		}
	
	while( NULL != pGood2)
		{
			if(0 == strcmp(name, pGood2->name)) //�ҵ�Ҫɾ������Ʒ 
				{
					pGood1->next = pGood2->next;
					pGood2->next = NULL;
					free(pGood2);
					printf("ɾ���ɹ�!\n");

					break;
				}

			pGood1 = pGood2;
			pGood2 = pGood2->next;
		}

	if(NULL == pGood2)
		{
			printf("û�ҵ�����Ʒ!\n");
		}

	return head;
}

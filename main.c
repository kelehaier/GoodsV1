#include <stdio.h>
#include <stdlib.h>
#include "Good.h"
#include "CreateGoodsList.h"
#include "AddAGood.h"
#include "DeleteAGood.h"
#include "ListGoods.h"
#include "ModifyAGood.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	Good *head = NULL; //��Ʒ�б�ͷ�ڵ�
	
	/*
	1. ������Ʒ�б� 
	*/ 
	printf("========== 1. create good list =================!\n");
	int goods_count = 0; //��������Ʒ���� 
		
	head = CreateGoodsList(&goods_count);
	if( NULL == head )
	{
		printf("fail to create good list!\n");
		return 0; 
	}
	printf("create good list successful!\n");
	
	printf("========== 2. list good =================!\n");
	/*
	2. �г���Ʒ�б���Ϣ 
	*/
	ListGoods(head);

	printf("========== 3. modify a good =================!\n");
	/*
	3. �޸�һ����Ʒ��Ϣ 
	*/
	int good_modify = 0;
	Good good1 = {"apple", 1.1, 20};
	good_modify = ModifyAGood(head, good1);
	
	if(0 != good_modify)
	{
		printf("fail to modify a good!\n");
	}
	else
	{
		printf("modify a good successful!\n");
	}

	ListGoods(head);
		
	printf("========== 4. add a good =================!\n");
	/*
	4. ���һ����Ʒ��Ϣ 
	*/
	int good_add = 0;
	Good good2 = {"banana", 2.2, 10};
	good_add = AddAGood(head, good2);
	
	if(0 != good_add)
	{
		printf("fail to add a good!\n");
	}
	else
	{
		printf("add a good succesful!\n");
	}

	ListGoods(head);

    printf("========== 5. delete a good =================!\n");
	/*
	5. ɾ��һ����Ʒ��Ϣ 
	*/
	const char name[10] = {"apple"};
	head = DeleteAGood(head, name, &goods_count);
	
	ListGoods(head);
	
	return 0;
}

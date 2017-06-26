#include <stdio.h>
#include <stdlib.h>
#include "Good.h"
#include "CreateGoodsList.h"
#include "AddAGood.h"
#include "DeleteAGood.h"
#include "ListGoods.h"
#include "ModifyAGood.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Good *CreatGoodsList(int *count);
int main(int argc, char *argv[]) {
	Good *head = NULL; //��Ʒ�б�ͷ�ڵ�
	
	/*
	1. ������Ʒ�б� 
	*/ 
	printf("========== 1. ��ʼ��Ʒ�б��� =================!\n");
	int goods_count = 0; //��������Ʒ���� 
		
	head = CreateGoodsList(&goods_count);
	if( NULL == head )
	{
		printf("��Ʒ�б�δ�ܴ���!\n");
		return 0; 
	}
	printf("��Ʒ�б����ɹ�!\n");
	
	printf("========== 2. ��ʼ�г���Ʒ�б� =================!\n");
	/*
	2. �г���Ʒ�б���Ϣ 
	*/
	ListGoods(head);

	printf("========== 3. ��ʼ�޸���Ʒ =================!\n");
	/*
	3. �޸�һ����Ʒ��Ϣ 
	*/
	int good_modify = 0;
	Good good1 = {"3", 1.1, 20};
	good_modify = ModifyAGood(head, good1);
	
	if(0 != good_modify)
	{
		printf("��Ʒ�޸�ʧ��\n");
	}
	else
	{
		printf("��Ʒ�޸ĳɹ�\n");
	}

	ListGoods(head);
		
	printf("========== 4. ��ʼ�����Ʒ =================!\n");
	/*
	4. ���һ����Ʒ��Ϣ 
	*/
	int good_add = 0;
	Good good2 = {"ningm", 2.2, 10};
	good_add = AddAGood(head, good2);
	
	if(0 != good_add)
	{
		printf("��Ʒ���ʧ��\n");
	}
	else
	{
		printf("��Ʒ��ӳɹ�\n");
	}

	ListGoods(head);

    printf("========== 5. ��ʼɾ����Ʒ =================!\n");
	/*
	5. ɾ��һ����Ʒ��Ϣ 
	*/
	const char name[10] = {"2"};
	head = DeleteAGood(head, name, &goods_count);
	
	ListGoods(head);
	
	return 0;
}

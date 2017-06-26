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
	Good *head = NULL; //商品列表头节点
	
	/*
	1. 创建商品列表 
	*/ 
	printf("========== 1. 开始商品列表创建 =================!\n");
	int goods_count = 0; //创建的商品个数 
		
	head = CreateGoodsList(&goods_count);
	if( NULL == head )
	{
		printf("商品列表未能创建!\n");
		return 0; 
	}
	printf("商品列表创建成功!\n");
	
	printf("========== 2. 开始列出商品列表 =================!\n");
	/*
	2. 列出商品列表信息 
	*/
	ListGoods(head);

	printf("========== 3. 开始修改商品 =================!\n");
	/*
	3. 修改一个商品信息 
	*/
	int good_modify = 0;
	Good good1 = {"3", 1.1, 20};
	good_modify = ModifyAGood(head, good1);
	
	if(0 != good_modify)
	{
		printf("商品修改失败\n");
	}
	else
	{
		printf("商品修改成功\n");
	}

	ListGoods(head);
		
	printf("========== 4. 开始添加商品 =================!\n");
	/*
	4. 添加一个商品信息 
	*/
	int good_add = 0;
	Good good2 = {"ningm", 2.2, 10};
	good_add = AddAGood(head, good2);
	
	if(0 != good_add)
	{
		printf("商品添加失败\n");
	}
	else
	{
		printf("商品添加成功\n");
	}

	ListGoods(head);

    printf("========== 5. 开始删除商品 =================!\n");
	/*
	5. 删除一个商品信息 
	*/
	const char name[10] = {"2"};
	head = DeleteAGood(head, name, &goods_count);
	
	ListGoods(head);
	
	return 0;
}

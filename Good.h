#ifndef _GOOD_H_
#define _GOOD_H_

//商品类型定义 
typedef struct good
{
	char name[10];     //商品名称 
	float price;       //商品单价 
	int amount;        //进货数量 
	struct good *next;
}Good;

#define GOOD_SIZE sizeof(Good)  //计算商品类型大小 

#endif

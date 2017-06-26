#ifndef _DELETEAGOOD_H_
#define _DELETEAGOOD_H_
#include <stdio.h>
#include <stdlib.h>
#include "Good.h"

/*
函数名:DeleteAGood
函数功能:删除给定的商品 
函数参数;
    head:指向商品链表 
    name:要删除的商品名称 
    number:商品列表的个数 
函数返回值: 返回商品列表的头节点 

*/
extern Good *DeleteAGood(Good *head, const char *name, int *number);

#endif

#ifndef _MODIFYAGOOD_H_
#define _MODIFYAGOOD_H_
#include <stdio.h>
#include "Good.h"

/*
函数名:ModifyAGood
函数功能:修改给定的商品信息 
函数参数;
    head:指向商品链表 
    good:要修改的商品信息 
函数返回值:
    -1:商品列表是空,无法修改
	-2:没有找到指定的商品 
	0 :商品修改成功 

*/
extern int ModifyAGood(Good *head, Good good);

#endif

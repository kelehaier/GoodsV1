#ifndef _ADDAGOOD_H_
#define _ADDAGOOD_H_
#include "Good.h"

/*
函数名:AddAGood
函数功能: 在商品列表中添加一个商品 
函数参数;
    head:指向商品链表 
    good:要添加的商品信息 
函数返回值:	0 :添加商品成功 

*/
extern int AddAGood(Good *head, Good good);

#endif

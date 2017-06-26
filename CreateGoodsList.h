#ifndef _CREATEGOODSLIST_H_
#define _CREATEGOODSLIST_H_
#include <stdio.h>
#include <stdlib.h>
#include "Good.h"

/*
函数名:CreatGoodsList
函数功能:创建商品列表 
函数参数;
    count: 创建的商品个数 
函数返回值:
   返回创建的商品头节点  
*/
extern Good *CreateGoodsList(int *count);

#endif

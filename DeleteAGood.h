#ifndef _DELETEAGOOD_H_
#define _DELETEAGOOD_H_
#include <stdio.h>
#include <stdlib.h>
#include "Good.h"

/*
������:DeleteAGood
��������:ɾ����������Ʒ 
��������;
    head:ָ����Ʒ���� 
    name:Ҫɾ������Ʒ���� 
    number:��Ʒ�б�ĸ��� 
��������ֵ: ������Ʒ�б��ͷ�ڵ� 

*/
extern Good *DeleteAGood(Good *head, const char *name, int *number);

#endif

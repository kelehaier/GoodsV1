#ifndef _GOOD_H_
#define _GOOD_H_

//��Ʒ���Ͷ��� 
typedef struct good
{
	char name[10];     //��Ʒ���� 
	float price;       //��Ʒ���� 
	int amount;        //�������� 
	struct good *next;
}Good;

#define GOOD_SIZE sizeof(Good)  //������Ʒ���ʹ�С 

#endif

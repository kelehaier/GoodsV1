#ifndef _GOOD_H_
#define _GOOD_H_

//good type definition 
typedef struct good
{
	char name[10];     //good name 
	float price;       //good price
	int amount;        //good amount
	struct good *next;
}Good;

#define GOOD_SIZE sizeof(Good)  //size of good 

#endif

#ifndef __DERIVEDGOODS_H__
#define __DERIVEDGOODS_H__

#include "goods.h"
class EEquipment: public Goods  //������ electric equipment
{
private:
	int class1;   //һ�����࣬������01,02��������
};

class Commodity: public Goods  //�ٻ��� commodity
{
private:
	int class1;
};

class Food: public Goods  //ʳ���� food
{
private:
	int class1;
};

class Book: public Goods  //�鼮�� book
{
private:
	int class1;
};
#endif

#ifndef __DERIVEDGOODS_H__
#define __DERIVEDGOODS_H__

#include "goods.h"
class EEquipment: public Goods  //电器类 electric equipment
{
private:
	int class1;   //一级分类，以数字01,02……代表
};

class Commodity: public Goods  //百货类 commodity
{
private:
	int class1;
};

class Food: public Goods  //食物类 food
{
private:
	int class1;
};

class Book: public Goods  //书籍类 book
{
private:
	int class1;
};
#endif

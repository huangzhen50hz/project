#ifndef __DERIVEDGOODS2_H__
#define __DERIVEDGOODS2_H__
#include "DerivedGoods.h"

class Computer: public EEquipment     //电脑类
{
private:
	int class2;  //二级分类，用数字01,02…代表
};

class HEEquipment: public EEquipment  //家用电器类 household electric equipment
{
private:
	int class2; 
};

class PEEquipment: public EEquipment  //移动电器类 portable electric equipment 
{
private:
	int class2; 
};

class DNecessity: public Commodity  //日用品类 Daily Necessity
{
private:
	int class2; 
};

class Toy: public Commodity  //玩具类 toy
{
private:
	int class2; 
};

class Others: public Commodity  //其他类 Others
{
private:
	int class2; 
};

class Meat :public Food   //生鲜食品（肉类）类 meat
{
private:
	int class2;
};

class Fruit :public Food   //果蔬类 Fruit
{
private:
	int class2;
};

class Driedfood :public Food   //干货类 driedfood
{
private:
	int class2;
};

class  Parentingbook:public Book   //育儿书籍类 parentingbook
{
private:
	int class2;
};

class  Cosmetologybook:public Book   //美容书籍类 Cosmetologybook
{
private:
	int class2;
};

class  Historybook:public Book   //历史书籍类 Historybook
{
private:
	int class2;
};

class Literaturebook:public Book  //文学书籍类 literaturebook
{
private:
	int class2;
};
#endif

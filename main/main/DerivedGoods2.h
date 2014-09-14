#ifndef __DERIVEDGOODS2_H__
#define __DERIVEDGOODS2_H__
#include "DerivedGoods.h"

class Computer: public EEquipment     //������
{
private:
	int class2;  //�������࣬������01,02������
};

class HEEquipment: public EEquipment  //���õ����� household electric equipment
{
private:
	int class2; 
};

class PEEquipment: public EEquipment  //�ƶ������� portable electric equipment 
{
private:
	int class2; 
};

class DNecessity: public Commodity  //����Ʒ�� Daily Necessity
{
private:
	int class2; 
};

class Toy: public Commodity  //����� toy
{
private:
	int class2; 
};

class Others: public Commodity  //������ Others
{
private:
	int class2; 
};

class Meat :public Food   //����ʳƷ�����ࣩ�� meat
{
private:
	int class2;
};

class Fruit :public Food   //������ Fruit
{
private:
	int class2;
};

class Driedfood :public Food   //�ɻ��� driedfood
{
private:
	int class2;
};

class  Parentingbook:public Book   //�����鼮�� parentingbook
{
private:
	int class2;
};

class  Cosmetologybook:public Book   //�����鼮�� Cosmetologybook
{
private:
	int class2;
};

class  Historybook:public Book   //��ʷ�鼮�� Historybook
{
private:
	int class2;
};

class Literaturebook:public Book  //��ѧ�鼮�� literaturebook
{
private:
	int class2;
};
#endif

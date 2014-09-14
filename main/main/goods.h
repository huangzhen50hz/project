#ifndef __GOODSH__
#define __GOODSH__

#include <string>
#include <vector>
#include "date.h"
using namespace std;

enum State {in_warehouse, on_shelf, saled, rejected};
const int statenum = 4;

struct Brand
{
	string name;
	int num;
};

class Goods
{
public:
	Goods();
	Goods(Goods &good);
	~Goods();

	string GetBarcode();
	string GetName();
	string GetReason();
	string GetState();
	Date GetSaleDate();
	
	void NumBasedSort(State state); //实现“查询库存/上架/售出/退回的商品中数量最多或者最少的N件商品，并从大到小排序”功能
	void TimeBasedSort(State state); //查询库存/上架时间最久的N件商品，并按时间从长到短排序
	void ChangeState(State state);//实现对商品四种状态信息的修改，对于被退回的商品要添加或修改其被退回的原因

	static vector<Brand> s_inWarehouse;
	static vector<Brand> s_onShelf;
	static vector<Brand> s_saled;
	static vector<Brand> s_rejected;
	static vector<Goods> s_all;

protected:
	string m_barcode;
	string m_name;
	string m_reason;
	State m_state;
	Date m_date[statenum];
	int m_purchasePrice;
	int m_sellingPrice;
};

#endif
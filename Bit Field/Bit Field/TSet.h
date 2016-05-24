#pragma once
#include "TBitField.h"
#include "baza.h"
 class TSet
{
private:
	__int32 U;
	TBitField* TBF;
public:
	TSet(__int32  _U = 0)
	{
		this->U = _U;
		TBF = new TBitField(_U);
	}

	~TSet(void)
	{
		delete TBF;
	}

	TSet(const TSet& tmp)
	{
		U = tmp.U;
		TBF = new TBitField(*(tmp.TBF));
	}

	TSet& operator=(TSet & tmp)
	{
		if (U != tmp.U)
		{
			U = tmp.U;
			TBF = new TBitField(U);
		}
		*TBF = *(tmp.TBF);
		return *this;
	}

	TSet operator|(TSet tmp)
	{
		TSet Cur(U);
		*(Cur.TBF) = *(TBF) | *(tmp.TBF);
		return Cur;
	}

	TSet operator& (TSet tmp)
	{
		TSet Cur(U);
		*(Cur.TBF) = *(TBF) & *(tmp.TBF);
		return Cur;
	}

	TSet operator~(void)
	{
		TSet Cur(U);
		*(Cur.TBF) = ~(*TBF);
		return Cur;
	}

	void AddElem(int numberlem)
	{
		if (numberlem > U) return;
		else TBF->AddLem(numberlem);
	}

	void DelElem(int numberlem)
	{
		if (numberlem > U) return;
		TBF->DelLem(numberlem);
	}
	void vvod(string str)
	{
		string *number;
		int size = str.length() + 1;
		number = new string [size];
		int k = 0;
		diffrent(str,k,number);
		
		for (int i = 0; i < k;i++)
		{
			int z = atoi(number[i].c_str());
			TBF->AddLem(z);
		}

		delete[] number;

	}

	void vvodY(string str)
	{
		string *number;
		int size = str.length() + 1;
		number = new string[size];
		int k = 0;
		diffrent(str, k, number);

		for (int i = 0; i < k;i++)
		{
			int z = atoi(number[i].c_str());
			TBF->DelLem(z);
		}
		delete[] number;
	}
	string vivod(void)
	{
		return (TBF->convert(U));
	}
};


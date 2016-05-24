#pragma once
#include <string>
using namespace std;
class TBitField
{
private:
	__int16 * mem;
	int sizemem;
	int GetBit(int numberlem)
	{
		return ((numberlem) % (sizeof(int) * 8));
	};

	int GetIndex(int numberlem)
	{
		return((numberlem) / (sizeof(int) * 8));
	};

public:
	TBitField(__int32 sizeU = 0)
	{
		sizemem = ((sizeU - 1) / (8 * sizeof(*mem))) + 1;
		mem = new __int16[sizemem];
		for (int i = 0;i < sizemem;i++)
			mem[i] = 0;
	};

	~TBitField(void)
	{
		delete[] mem;
	};

	TBitField(const TBitField &tmp)
	{

		sizemem = tmp.sizemem;
		mem = new __int16[sizemem];
		for (int i = 0;i < sizemem;i++)
		{
			mem[i] = tmp.mem[i];
		}
	};

	TBitField & operator= (TBitField tmp)
	{
		if (sizemem != tmp.sizemem)
		{
			delete[] mem;
			sizemem = tmp.sizemem;
			mem = new __int16[sizemem];
		}
		for (int i = 0;i < sizemem;i++)
		{
			mem[i] = tmp.mem[i];
		}
		return *this;
	};

	TBitField operator&(const TBitField tmp)
	{
		TBitField Cur;
		if (sizemem != tmp.sizemem)
			return Cur;
		Cur= *this;
		for (int i = 0;i < sizemem;i++)
		{
			Cur.mem[i] &= tmp.mem[i];
		}
		return Cur;
	}

	TBitField operator|(const TBitField tmp)
	{

		TBitField Cur;
		if (sizemem != tmp.sizemem)
			return Cur;
		Cur = *this;
		for (int i = 0;i < sizemem;i++)
		{
			Cur.mem[i] |= tmp.mem[i];
		}
		return Cur;
	}

	TBitField operator~(void)
	{
		TBitField Cur;
		Cur = *this;
		for (int i = 0; i < sizemem; i++)
			Cur.mem[i] = ~mem[i];
		return Cur;
	}

	void AddLem(int numberlem)
	{
		if (GetIndex(numberlem) > sizemem) return;
		else
			mem[GetIndex(numberlem)] |= 1 << (GetBit(numberlem)-1);
		return;
	};

	void DelLem(int numberlem)
	{
		if (GetIndex(numberlem) > sizemem) return;
		else
			mem[GetIndex(numberlem)] &= ~(1 << GetBit(numberlem)-1);
		return;
	}

	string convert(int U)
	{
		string s = "";

		for (int i = 1; i <= sizemem - 1; i++)
		{
			for (int j = 1; j <= (8 * sizeof(__int16)); j++)
			{
				if (mem[i] & (1 << (j - 1)))
					s = s + to_string(i * 8 * sizeof(_int16) + j) + ' ';
			}
		}
		for (int j = 1; j <= (U - sizeof(__int16) * 8 * (sizemem - 1)); j++)
		{
			if (mem[sizemem - 1] & (1 << (j - 1)))
				s = s + to_string(8 * sizeof(__int16)*(sizemem - 1) + j) + ' ';
		}
		return s;
	}
};


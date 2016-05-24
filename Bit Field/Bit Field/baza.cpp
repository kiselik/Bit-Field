#pragma once
#include "baza.h"
#include <iostream>
using namespace std;
void diffrent(string st, int &k, string *w)
{
	string sth=" ,";
	st += " ";
	int len = st.length();

	w[0] = "";
	for (int i = 0; i < len; i++)
	{
		int l = sth.find(st[i]);
		if (l < 0)
		{
			w[k] += st[i];
		}
		else
		{
			if (st[i] == ' ')
			{
				if (w[k] != "")
					w[++k] = "";
			}
			if (st[i] == ',')
			{
				if (w[k] != "")
					w[++k] = "";
			}
		}
	}
}
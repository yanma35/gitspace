// jus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>

int jus(int n, int m, int k)
{
	int killpos = -1;//1031

	while (0 != k--) {
		killpos += m;
		killpos %= (n - k );
	}
	return ++killpos ;
}

int cir(int n, int m)
{
	int killpos = 0;
	for(int i = 2;i <= n;++i) {
		killpos = (killpos + m) % i;
	}
	return ++killpos;
}
int main()
{ 
	int m;
	int n;
	std::cout << "please input total:";
	std::cin >> n;
	std::cout << "please input skip:";
	std::cin >> m;

	for (int k = 1; k <= n; ++k)
	{
		std::cout << "kill the " << jus(n, m, k) << std::endl;
	}
	std::cout << "cir :" << cir(n, m) << std::endl;
    return 0;
}


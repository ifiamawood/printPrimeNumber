// printPrimeNumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"

using namespace std;

int PrimeNum(int i) {  //判断一个数是否为素数
	int n =2 ;
	for (n ; n <= i-1; n++) {
			if (i%n == 0) {
				return 1;
			}
		}
	return 0;
}

int main()
{
	int m=0;
	for (int i = 2 ; i <= 100; i++) {
		int m = PrimeNum(i);
		if ( m ==0 )
			cout << "PrimeNumber is:" << i << endl;
	}
    return 0; 
}


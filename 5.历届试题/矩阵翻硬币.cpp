 // 问题描述
// 　　小明先把硬币摆成了一个 n 行 m 列的矩阵。
// 　　随后，小明对每一个硬币分别进行一次 Q 操作。
// 　　对第x行第y列的硬币进行 Q 操作的定义：将所有第 i*x 行，第 j*y 列的硬币进行翻转。
// 　　其中i和j为任意使操作可行的正整数，行号和列号都是从1开始。
// 　　当小明对所有硬币都进行了一次 Q 操作后，他发现了一个奇迹——所有硬币均为正面朝上。
// 　　小明想知道最开始有多少枚硬币是反面朝上的。于是，他向他的好朋友小M寻求帮助。
// 　　聪明的小M告诉小明，只需要对所有硬币再进行一次Q操作，即可恢复到最开始的状态。然而小明很懒，不愿意照做。于是小明希望你给出他更好的方法。帮他计算出答案。
// 输入格式
// 　　输入数据包含一行，两个正整数 n m，含义见题目描述。
// 输出格式
// 　　输出一个正整数，表示最开始有多少枚硬币是反面朝上的。
// 样例输入
// 2 3
// 样例输出
// 1
// 数据规模和约定
// 　　对于10%的数据，n、m <= 10^3；
// 　　对于20%的数据，n、m <= 10^7；
// 　　对于40%的数据，n、m <= 10^15；
// 　　对于10%的数据，n、m <= 10^1000（10的1000次方）。

#include <stdio.h>
#include <iostream>
using namespace std;


inline bool TestUnit(int x, int y, int row, int col)
{
	bool bUnitState = false; // 正面

	for (int iY = 1; iY <= y; ++iY)
		for (int iX = 1; iX <= x; ++iX)
		{
			if (x % iX == 0)
				bUnitState = !bUnitState;
			if (y % iY == 0)
				bUnitState = !bUnitState;
		}

	return bUnitState;
}

int main()
{
	int row, col;
	scanf("%d %d", &row, &col);
	int iNegCnt = 0;

	for (int y = 1; y <= row; ++y)
		for (int x = 1; x <= col; ++x)
		{
// 测试(x,y)格最终是正面还是反面，返回true是反而
			if (TestUnit(x, y, row, col))
				++iNegCnt;
		}

	printf("%d\n", iNegCnt);

	return 0;
}

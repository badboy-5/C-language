/*位运算符*/
# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int k;

	k = i & j;  //i的二进制为：0011，j的二进制为：0101
	printf("i & j = %d\n", k);  //计算得到得二进制为：0001，即1

	k = i && j;  //逻辑与运算，i和j都不为0，则结果为真
	printf("i && j = %d\n", k);  //计算得到的值为1，C语言中1表示真，0表示假

	k = i | j;  //i的二进制为：0011，j的二进制为：0101
	printf("i | j = %d\n", k);  //计算得到得二进制为：0111，即7

	k = i || j;  //逻辑或运算，i和j都不为0，则结果为真
	printf("i || j = %d\n", k);  //计算得到的值为1

	k = ~i;  //变量i的所有二进制位取反，i的二进制为：0011
	printf("~i = %d\n", k);  //计算得到的二进制为：1100，负数转化为十进制为：-4

	k = i << 1;  //i的二进制为：0011，左移一位
	printf("i << 1 = %d\n", k);  //计算得到的二进制为：0110，即6

	k = i >> 1;  //i的二进制为：0011，右移一位
	printf("i >> 1 = %d\n", k);  //计算得到的二进制为：0001，即1

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
i & j = 1
i && j = 1
i | j = 7
i || j = 1
~i = -4
i << 1 = 6
i >> 1 = 1
Press any key to continue
-----------------------
 */
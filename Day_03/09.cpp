/*要求用户从键盘输入一个数，如果该数字是回文数，则返回Yes，否则返回No*/
# include <stdio.h>

int main(void)
{
	int val;  //用于存放输入的值
	int m;
	int sum = 0;

	printf("请输入一个数字：\n");
	scanf("%d", &val);

	m = val;
	while (m)
	{
		sum = sum * 10 + m % 10;  //用于将输入数字的前后互换
		m /= 10;
	}

	if (sum == val)
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}

/*分析
当输入121时：
	m = val = 121，m为真，进入循环
		sum = 0 * 10 + 121 % 10 = 1
		m = 121 / 10 = 12
	m = 12，m为真，进入循环
		sum = 1 * 10 + 12 % 10 = 12
		m = 12 / 10 = 1
	m = 1，m为真，进入循环
		sum = 12 * 10 + 1 % 10 = 121
		m = 1 / 10 = 0
	m = 0，为假，推出循环

当输入123时：
	m = val = 123，m为真，进入循环
		sum = 0 * 10 + 123 % 10 = 3
		m = 123 / 10 = 12
	m = 12，m为真，进入循环
		sum = 3 * 10 + 12 % 10 = 32
		m = 12 / 10 = 1
	m = 1，m为真，进入循环
		sum = 32 * 10 + 1 % 10 = 321
		m = 1 / 10 = 0
	m = 0，为假，退出循环
*/
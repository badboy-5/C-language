/*scanf("输入控制符1 输入控制符2",输入参数1,输入参数2);*/
# include <stdio.h>

int main(void)
{
    int i,j,k;
    
    printf("请输入三个值（分别使用空格和逗号分隔）：\n");
    scanf("%d %d,%d", &i, &j, &k);  //从键盘输入三个数，分别赋值给i、j、k
    /*
        如果输入的是12，则把12赋值给i，需要在输入两个数分别赋值给j、k
        输入第一个数和第二个数之间必须使用空格分开
        输入第二个数和第三个数之间必须使用逗号分开
    */
    printf("i = %d, j = %d, k = %d\n", i, j, k);

    return 0;
}
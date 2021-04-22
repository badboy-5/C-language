/*ѧ������ϵͳ*/
# include <stdio.h>
# include <malloc.h>

/*����ṹ��*/
struct Student
{
	char name[50];
	int age;
	float score;
};

/*����ѧ����Ϣ����*/
void Input_Info(struct Student * p, int len)
{
	int i;

	for (i = 0; i < len; ++i)
	{
		printf("������%d��ѧ������Ϣ��\n", i + 1);
		printf("Nmae: ");
		scanf("%s", p[i].name);  
		/*
			name����������������Ϊ��һ��Ԫ�صĵ�ַ������Ҫ��ȡ��ַ
			%s��ʾ�Ӽ��̽��յ�������char����
			p��ŵ��ǽṹ��ĵ�ַ���ṹ��������������������������Ҫʹ��p[i].name��ָ����ֵ���ĸ�����
		 */

		printf("Age: ");
		scanf("%d", &p[i].age);

		printf("Score:");
		scanf("%f", &p[i].score);  //%f��ʾ�Ӽ��̽��յ�������float����
	}
}

/*��ѧ���ĳɼ���������-ð������*/
void Sort_Score(struct Student * p, int len)
{
	int i, j;
	struct Student t;

	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (p[j].score > p[j + 1].score)  //���ں�������С�ں��ǽ���
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
}

/*���ѧ����Ϣ����*/
void Output_Info(struct Student * p, int len)
{
	int i;

	printf("\n--------------------------\n");
	for (i = 0; i < len; ++i)
	{
		printf("��%d��ѧ������Ϣ���£�\n", i + 1);
		printf("Name: %s\n", p[i].name);
		printf("Age: %d\n", p[i].age);
		printf("Score: %f\n", p[i].score);
		printf("\n");
	}
}

int main(void)
{
	int len;  //���ڴ��ѧ���ĸ���
	struct Student * p;

	/*��̬����һά����*/
	printf("��������Ҫ¼��ѧ���ĸ�����");
	scanf("%d", &len);  //��������ֵ��ֵ������len
	p = (struct Student *)malloc(len * sizeof(struct Student));
	/*
		��̬����һά����
		�����ŵ���������Ϊ�ṹ�嶨�������
		��̬����ĵ�ַ�ռ�Ϊѧ������ * �ṹ����ռ���ֽ���
	 */

	/*����ѧ����Ϣ*/
	Input_Info(p, len);

	/*��ѧ���ĳɼ���������-ð������*/
	Sort_Score(p, len);

	/*���ѧ����Ϣ*/
	Output_Info(p, len);

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
��������Ҫ¼��ѧ���ĸ�����3
������1��ѧ������Ϣ��
Nmae: Bad
Age: 20
Score:78
������2��ѧ������Ϣ��
Nmae: Boy
Age: 18
Score:85
������3��ѧ������Ϣ��
Nmae: Five
Age: 15
Score:63

--------------------------
��1��ѧ������Ϣ���£�
Name: Five
Age: 15
Score: 63.000000

��2��ѧ������Ϣ���£�
Name: Bad
Age: 20
Score: 78.000000

��3��ѧ������Ϣ���£�
Name: Boy
Age: 18
Score: 85.000000

Press any key to continue
-----------------------
 */
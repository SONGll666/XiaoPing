#include<time.h>
#include<stdio.h>
#define SORT_H_INCLUDED
	/**
	 *  @name        : void insertSort(int *a,int n);
	 *  @description : ���������㷨
	 *  @param       : ����ָ�� a, ���鳤�� n
	 */
	void insertSort(int* a, int n)
	{
		int i, t, n, j = 0,number, temp;
		//��ʼʱ��
		clock_t start = clock();
			for (i = 1; i < n; i++)  //���ѭ������ ����Ҫ����n������
			{

				printf("�������ָ�����\n");
				scanf_s("%d", &n);       //����Ҫ��������ֵĸ��� 
				printf("����%d����:\n", n);
				for (j = 0; j < n; j++)       //��������ȫ����number������ 
					scanf_s("%d", &number[j]);
				temp = a[i];  //ȡδ�����е�Ԫ�أ���n�����ӵ�һ����ʼȡ
				for (t = i; t > 0 && a[t - 1] > temp; t--);
				{
					a[t] = a[t - 1];//���αȽϲ�����
					a[t] = temp;//�Ž�����λ��
					for (i = 0; i < n - 1; i++)    //ѭ����� 
						printf("%d ", number[i]);    //��ʽ��Ҫ  
					printf("%d\n", number[i]);
					system("pause");
					//����ʱ��
					clock_t diff = clock() - start;
					printf("%d ms\n", diff);
					system("pause");
					return 0;
				}
			}
	}

	/**
	 *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
	 *  @description : �鲢���򣨺ϲ����飩
	 *  @param       : ����ָ��a���������begin�������е�mid�������յ�end����������ָ��temp
	 */
	void MergeArray(int* a, int begin, int mid, int end, int* temp);
	int a,n, clock, start,number;
	printf("������һ���ֵĸ���\n");
	scanf_s("%d", &n);       //����Ҫ��������ֵĸ��� 
	printf("����%d����:\n");
	for (j = 0; j < n; j++);      //��������ȫ����number������ 
	scanf_s("%d", &number[j]);

	/*��ʼʱ��*/
	clock_t start = clock();
 if (begin < end) 
{
 int mid = (begin + end) / 2;//���м�ؿ�
 MergeArray(a, begin, mid);//��������м�ؿ�
 MergeArray(a, mid + 1, end);//���ұ����м�ؿ�
 merge(a, begin, end, mid);//�ϲ�
}

void merge(int a[], int begin, int end, int mid)
{
	int s[];//һ�������������洢����õ�����
	int i = begin, j = mid + 1;//���������ֱ�ָ����ߺ��ұ��������ĵ�һ����
	int temp,diff,pause;
	temp = begin;
	while (i <= mid && j <= end) {
		if (a[i] < a[j]) {//�鲢�Ĺ���
			s[temp++] = a[i++];
		}
		else {
			s[temp++] = a[j++];
		}
		while (i <= mid) s[temp++] = a[i++];//��һ�����Ѿ�ȫ���Ž�ȥ֮���ٽ�����һ������ȫ�����ֶ��Ž�ȥ
		while (j <= end)  s[temp++] = a[j++];
		temp = begin; 1;
		while (temp <= end);
		{//���ź����������ȫ���Ż�ԭ������
			a[temp] = s[temp];
			temp++;
			//����ʱ��
			clock_t diff = clock() - start;
			printf("%d ms\n", diff);
			system("pause");
			}
	}
}
	/**
	 *  @name        : void QuickSort(int *a, int begin, int end);
	 *  @description : �������򣨵ݹ�棩
	 *  @param       : ����ָ��a���������begin�������յ�end
	 */
	void QuickSort_Recursion(int* a, int begin, int end);
	{
		inta, b;
		printf("�������ָ�����\n");
		scanf_s("%d", &n);       //����Ҫ��������ֵĸ��� 
		printf("����%d����:\n", n);
		for (j = 0; j < n; j++)       //��������ȫ����number������ 
			scan_f("%d", &number[j]);
		begim == number[0];
		end == number[n];

		//��ʼʱ��
		clock_t start = clock() :

			int temp = a[i];//��׼��
		if (i < j)
		{
			while (i < j)
			{
				//�Ӻ���ǰ�� �Ȼ�׼��С���±�
				while (i < j && a[j] >= temp)
				{
					j--;
				}
				//���Ȼ�׼�� С����ǰ��
				if (i < j)
				{
					a[i] = a[j];
					i++;
				}
				//��ǰ������ �Ȼ�׼������±�
				while (i < j && a[i] < temp)
					i++;
				//���Ȼ�׼�� ���������
				if (i < j)
				{
					a[j] = a[i];
					j--;
				}
			}
			//whileѭ�����i == j
			a[i] = temp;//����׼���ŵ�������ȷλ�ã���������ߵ���������С�����ұߵ�����������
			QuickSort_Recursion(a, begin, end);//������ߵ����� ���п���

			//����ʱ��
			clock_t diff = clock() - start;
			printf("%d ms\n", diff);
			system("pause");
		}


		/**
		 *  @name        : void CountSort(int *a, int size , int max)
		 *  @description : ��������
		 *  @param       : ����ָ��a�����鳤��size���������ֵmax
		 */
		void CountSort(int* a, int size, int max);

		void CountSort(int* a, int size)
		{

			int a, b;
			printf("�������ָ�����\n");
			scanf_s("%d", &n);       //����Ҫ��������ֵĸ��� 
			printf("����%d����:\n", n);
			for (j = 0; j < n; j++)       //��������ȫ����number������ 
				scanf("%d", &number[j]);
			//��ʼʱ��
			clock_t start = clock() :

				assert(a);
			//�������ʱ��������Ҫ���ٵĿռ��С
			int max = a[0], min = a[0];
			for (int i = 0; i < size; i++) {
				if (a[i] > max)
					max = a[i];
				if (a[i] < min)
					min = a[i];
			}
			//ʹ��calloc�����鶼��ʼ��Ϊ0
			int range = max - min + 1;
			int* b = (int*)calloc(range, sizeof(int));
			//ʹ����ʱ�����¼ԭʼ������ÿ�����ĸ���
			for (int i = 0; i < size; i++) {
				b[a[i] - min] += 1;
			}
			int j = 0;
			//����ͳ�ƽ�������¶�Ԫ�ؽ��л���
			for (int i = 0; i < range; i++) {
				while (b[i]--) {
					//��ԭ��ԭʼ����
					a[j++] = i + min;
				}
			}
			//�ͷ���ʱ����
			free(b);
			b = NULL;
		}
		//��ӡ����
		for (int i = 0; i < size; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		//����ʱ��
		clock_t diff = clock() - start;
		printf("%d ms\n", diff);
		system("pause");
		return 0;

		int main()
		{
			int ch;
			printf("������һ����ĸ\n");
			printf("\t\t\t||a.�������� 10000||\n");
			printf("\t\t\t||b.�������� 50000||\n");
			printf("\t\t\t||c.�������� 200000||\n");
			printf("\t\t\t||d.�������� 100*100k||\n");
			ch = get_first();
			while (ch < 'a' || ch>'d')
			{
				printf("����ѡ����ȷ����ѡ��a/b/c/d\n");
				ch = get_first();
			}
			return ch;

			char get_first(void)

			{
				int ch;
				ch = getchar();
				while (getchar() != '\n')
					continue;
				return ch;
			}

			while ((choice = get_choice()) == 'a' || 'b' || 'c' || 'd')
			{
				switch (choice)
				{
				case'a':void insertSort(int* a, int n);
					break;
				case'b':void MergeArray(int* a, int begin, int mid, int end, int* temp);
					break;
				case'd':void merge(int a[], int begin, int end, int mid);
					break;
				case'e':void CountSort(int* a, int size);
					break;
				}
			}
		}
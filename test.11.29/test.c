#include <stdio.h>
//int main()
//{
//	int money;
//	scanf_s("%d", &money);
//	int total = 0;
//	int empty = 0;
//	total= money;//һ��ʼ�ж���Ǯ���Ϳ��������ƿˮ
//	empty = money;//�ж���Ǯ�����ƿˮ���ö��ٸ���ƿ��
//	//�����û�
//	/*while (empty >=2)
//	{
//
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//
//    }*/
//	if(money>0)
//	total = 2 * money - 1;//��һ�ַ�����
//	printf("%d", total);
//	return 0;
//} 
//�ж��Ƿ�Ϊ�����Ǿ���
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	//int arr[n][n]//�䳤���飿������������������ʹ�ã�C99
//	int arr[10][10];
//	int i;
//	////����
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = 0;j < n;j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//		}
//		//�жϣ�
//	}
//
//	int flag = 1;//����һ����������Ϊ��ǩ����Ϊ�������ǵı�ʾ
//	for (i = 0;i <n;i++)
//	{
//		int j;
//		for (j = 0;j < i;j++)
//		{
//			//����j<iʱ�����鼴���������飻
//			if (arr[i][j] != 0)
//				flag = 0;//���j<iʱ���������в�Ϊ0����flag�ͻ���0��������ѭ����
//			/*	goto end;*/return 0;
//		}
//	}
//	//end:
//	if (flag == 1)//���flag����1˵��j<i���������ж���0��
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//�ж�����������ȣ�
//int main()
//{
//	//Ҫ��������������������ݣ�
//	//Ҫ���ݸ���n��ȷ�������С��
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	int arr1[10][10];
//	int arr2[10][10];
//	//�������ݣ�
//	int i;//��������1��
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr1[i][j]);
//		}
//	}//��������2��������2�����ʱ��Ϳ��Խ����жϣ�
//	int flag = 1;//Ĭ��arr1==arr2;
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//��һ��n�������е���������ǰ�棬ż�����ں���
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//���ȴ���������ż����
//	while (left < right)
//	{
//		while (left<right&&(arr[left] % 2 == 1))//�����������һЩbug���Ȼᴦ��
//		{//���һֱ����������ż��leftһֱ+++�Ϳ��ܻ�Խ�磻���Լ���������left<right
//			left++;
//		}//����ҵ�ż���������ѭ����ͣ�¡�
//		//�ٴ�������������
//		while (left<right&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}//����ҵ��������ͣ������ѭ����
//		if (left < right)//(����������½����û������������Χ�������û�)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			//�û����leftҪ���ƣ�rightҪ���ƣ�
//			left++;
//			right--;//����ֻ�û���һ������û�����Ҳ�Ǹ�ѭ���壬ѭ������Ҳ��left<right
//		}
//	}
//
//}
//int main()
//{
//	//����һ������������������ݣ�
//	int n;
//	scanf_s("%d", &n);
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	move(arr, sz);//����
//	
//	//��ӡ
//	//����
//	
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//	
//}�ϲ��������У���������������У��ֱ�Ϊn��m����Ȼ��ϲ����������в��Һϲ��������ҲΪ����//
//�����Ҫ�����������������������������ݣ�
//int main()
//{
//	//������������
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//	int arr1[10];
//	int arr2[10];
//	int arr3[20];
//	//����arr1
//	int i;
//	int j = 0;
//	int k = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}//����arr2
//	for (j=0;j<m;j++)
//	{
//		scanf_s("%d", &arr2[j]);
//	}//�������������������б������Ƚ�arr1[i]��arr[j]��С��С���ȷ���arr3������Ŵ�ķź��棬�ȱ�����ģ����������Ӧ�ö����꣬��û�������ֱ�ӷ������
//	
//   while (i < n&& j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d", arr1[i]);
//			i++;
//			/*arr1[i] = arr3[k];
//			i++;
//			k++;*/
//		}
//		else
//		{
//			printf("%d", arr2[j]);
//			j++;
//			/*arr2[j] = arr3[k];
//			j++;
//			k++;*/
//		}
//	}
//	if (i == n)
//	{//i�ȱ�����j��ʣ�¼���Ԫ��Ҫֱ�ӷ���arr3��
//		while (j < m)
//		{
//			printf("%d", arr2[j]);
//			j++;
//			/*arr2[j] = arr3[k];
//			j++;
//			k++;*/
//		}
//	}
//	else
//		{//j�ȱ�����i��ʣ�¼���Ԫ��Ҫֱ�ӷ���arr3��
//			while (i < n)
//			{
//				printf("%d", arr1[i]);
//				i++;
//				/*
//				arr1[i] = arr3[k];
//				i++;
//				k++;*/
//			}
//		}
//	for (k = 0;k < n + m;k++)
//	{
//		printf("%d ", arr3[k]);
//	}
//
//	return 0;
//}
//int main() {
//	       int arr1[1000];
//	       int arr2[1000];
//	       int arr3[2000];
//	    int n = 0;
//	    int m = 0;
//	    //����
//	    scanf_s("%d %d", &n, &m);
//	   /* int arr1[n];
//	    int arr2[m];
//	    int arr3[n + m];*/
//	    //arr1������
//	    int i = 0;
//	    for (i = 0; i < n; i++)
//	    {
//	        scanf_s("%d", &arr1[i]);
//	    }
//	    //arr2������
//	    for (i = 0; i < m; i++)
//	    {
//	        scanf_s("%d", &arr2[i]);
//	    }
//	    //�ϲ�����
//	    i = 0;
//	    int j = 0;
//	    int k = 0;
//	    while (i < n && j < m)
//	    {
//	        if (arr1[i] < arr2[j])
//	        {
//	            printf("%d ", arr1[i]);
//	            i++;
//	        }
//	        else
//	        {
//	            printf("%d ", arr2[j]);
//	            j++;
//	        }
//	    }
//	    if (i == n)
//	    {
//	        //��arr2��ʣ���Ԫ�ط���arr3��
//	        while (j < m)
//	        {
//	            printf("%d ", arr2[j]);
//	            j++;
//	        }
//	    }
//	    else
//	    {
//	        //��arr1��ʣ���Ԫ�ط���arr3��
//	        while (i < n)
//	        {
//	            printf("%d ", arr1[i]);
//	            i++;
//	        }
//	    }
//	    return 0;
//	}
int main()
{
	int arr1[1000];
	int arr2[1000];
	int arr3[2000];
	int n, m;
	scanf_s("%d %d", &n, &m);
	
	int k = 0;
	//����arr1
	
	for (int i = 0;i < n;i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	//����arr2
	for (int i = 0;i < m;i++)
	{
		scanf_s("%d", &arr2[i]);
	}
	//�ϲ�
	int i = 0;
	int j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			arr3[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			arr3[k] = arr3[j];
			j++;
			k++;
		}
	}
	if (i == n)
	{
		while (j < m)
		{
			arr3[k] = arr2[j];
			j++;
			k++;
		}
	}
	else
	{
		while (i < n)
		{
			arr3[k] = arr1[i];
			i++;
			k++;
		}
	}
	for (k = 0;k < n + m;k++)
	{
		printf("%d", arr3[k]);
	}


	return 0;
}

#include <stdio.h>
#include<string.h>

void monday(int n)
{  
	char *keming[10]={"����","û�п�ѽ   ����ʱ��","c ����","���Դ���","û�п�ѽ   ����ʱ��"};
	
	printf("\n\n����ڿ��ǣ�%s\n\n",keming[n-1]);
}
void tuesday(int n)
{  
	char *keming[10]={"û�п�ѽ   ����ʱ��","û�п�ѽ   ����ʱ��","Ӣ��","û�п�ѽ   ����ʱ��","û�п�ѽ   ����ʱ��"};
	printf("\n\n����ڿ��ǣ�%s\n\n",keming[n-1]);
}
void wednesday(int n)
{  
	char *keming[10]={"û�п�ѽ   ����ʱ��","����","û�п�ѽ   ����ʱ��","������","û�п�ѽ   ����ʱ��"};
	printf("\n\n����ڿ��ǣ�%s\n\n",keming[n-1]);
}
void thursday(int n)
{  
	char *keming[10]={"û�п�ѽ   ����ʱ��","�������ѧ����","Ӣ��","�ߴ�","û�п�ѽ   ����ʱ��"};
	printf("\n\n����ڿ��ǣ�%s\n\n",keming[n-1]);
}
void friday(int n)
{  
	char *keming[10]={"c ����","����","˼��","û�п�ѽ   ����ʱ��","û�п�ѽ   ����ʱ��"};
	printf("\n\n����ڿ��ǣ�%s\n\n",keming[n-1]);
}

int menu()   // return zhouji 
{
	
	int zhouji;
	printf("web2��  ��β˵���\n");
	printf("1-monday\n");
	printf("2-tuesday\n");
	printf("3-wednesday\n");
	printf("4-thursday\n");
	printf("5-friday\n\n");
	printf("0-EXIT\n\n\n");
	printf("��Ҫ���ܼ��Ŀ��أ���1---5��:         ");
	scanf("%d",&zhouji);	
	return zhouji;
}

int main()
{
	int zhouji,class_number,i,j;

	do{
		zhouji=menu();
		printf("��ô��Ҫ��ڼ��ڿ��أ�������һ�������ڿ�໣�����1--5��:        ");
		scanf("%d",&class_number);	

		switch (zhouji)
		{
			case 1:monday(class_number);
				break;
			case 2:tuesday(class_number);
				break;
			case 3:wednesday(class_number);
				break;
			case 4:thursday(class_number);
				break;
			case 5:friday(class_number);
				break;
			default:
				printf("������  1--5 ");
		}
	}while (zhouji!=0);
}

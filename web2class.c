
#include <stdio.h>
#include<string.h>

void monday(int n)
{  
	char *keming[10]={"高数","没有课呀   愉快的时光","c 语言","线性代数","没有课呀   愉快的时光"};
	
	printf("\n\n你这节课是：%s\n\n",keming[n-1]);
}
void tuesday(int n)
{  
	char *keming[10]={"没有课呀   愉快的时光","没有课呀   愉快的时光","英语","没有课呀   愉快的时光","没有课呀   愉快的时光"};
	printf("\n\n你这节课是：%s\n\n",keming[n-1]);
}
void wednesday(int n)
{  
	char *keming[10]={"没有课呀   愉快的时光","高数","没有课呀   愉快的时光","心理健康","没有课呀   愉快的时光"};
	printf("\n\n你这节课是：%s\n\n",keming[n-1]);
}
void thursday(int n)
{  
	char *keming[10]={"没有课呀   愉快的时光","计算机科学导论","英语","线代","没有课呀   愉快的时光"};
	printf("\n\n你这节课是：%s\n\n",keming[n-1]);
}
void friday(int n)
{  
	char *keming[10]={"c 语言","体育","思政","没有课呀   愉快的时光","没有课呀   愉快的时光"};
	printf("\n\n你这节课是：%s\n\n",keming[n-1]);
}

int menu()   // return zhouji 
{
	
	int zhouji;
	printf("web2班  查课菜单：\n");
	printf("1-monday\n");
	printf("2-tuesday\n");
	printf("3-wednesday\n");
	printf("4-thursday\n");
	printf("5-friday\n\n");
	printf("0-EXIT\n\n\n");
	printf("你要查周几的课呢？（1---5）:         ");
	scanf("%d",&zhouji);	
	return zhouji;
}

int main()
{
	int zhouji,class_number,i,j;

	do{
		zhouji=menu();
		printf("那么你要查第几节课呢？（咱们一天最多五节课嗷！）（1--5）:        ");
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
				printf("请输入  1--5 ");
		}
	}while (zhouji!=0);
}

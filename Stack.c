
#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE 10

typedef struct
{
	int items[STACKSIZE];
	int top;
}STACK;

STACK s;

void push()
{
	int x;
	if (s.top == (STACKSIZE - 1))
	{
		printf("Stack dolu\n");
		return;
	}
	else
	{
		printf("Stack'e eklenecek elemani giriniz:\n");
		scanf("%d", &x);
		s.top += 1;
		s.items[s.top] = x; 
			return;
	}

}

int pop()
{
	int temp;
	if (s.top == -1)
	{
		printf("Stack Bos\n");
		return (s.top);
	}
	else
	{
		temp = s.items[s.top];
		printf("Stack'den cikartilan eleman %d'dir \n", s.items[s.top]);
		s.top = s.top - 1;
	}
	return(temp);
}

void listele()
{
	int y;
	if (s.top == -1)
	{
		printf("Stack Bos\n");
		return;
	}
	else
	{
		for (y = s.top; y >= 0; y--)
		{
			printf("%d\n", s.items[y]);
		}
	}
	printf("\n");
}

void search(int c)
{

	int w = 0;
	int z;
	if (s.top == -1)
	{
		printf("Stack Bos, Arama Yapilamaz\n");
		return;
	}
	for (z = s.top; z >= 0; z--)
	{
		if (s.items[z] == c)
		{
			printf("Aradiginiz sayi %d. siradadir\n", z + 1);
			w++;
		}

	};

	if (w == 0)
		printf("Eslesen eleman bulunamadi\n");

}

void main()
{
	int arama;
	int secim = 1;
	int secme = 1;
	s.top = -1;

	while (secim != 5)
	{
		printf("------------------\n");
		printf("|      Menu      |\n");
		printf("|1)Push          |\n");
		printf("|2)Pop           |\n");
		printf("|3)Listele       |\n");
		printf("|4)Arama         |\n");
		printf("|5)Cikis         |\n");
		printf("------------------\n");

		printf("Seciminizi Giriniz\n");
		scanf("%d", &secim);

		switch (secim)
		{
		case 1:
			push();
			printf("Stack'e ekleme islemi tamamlandi.\n");
			break;
		case 2:
			pop();
			printf("Stack'den cikarma islemi tamamlandi.\n");
			break;
		case 3:
			printf("Stack Elemanlari:\n");
			listele();
			break;
		case 4:
			printf("aramak istediginiz elemani giriniz:\n");
			scanf("%d", &arama);
			search(arama);
			break;

			return;
		}

	}
	exit(1);
}






#include <stdio.h>

/* �ΰ��� ����ü�� ���� ���� Ÿ���� ����ü����
���� �񱳰� �Ұ����ϴ�  */

struct point{
	int x;
	int y;
};

void comparePoint(struct point p1, struct point p2)
{
	
	if((p1.x == p2.x) && (p1.y == p2.y))  
	{
		printf("p1 �� p2�� �����ϴ�"); 
	}
}

int main()
{
	struct point p1;
	struct point p2;
	
	p1.x=1;
	p1.y=2;

	p2.x=1;
	p2.y=2;
	
	comparePoint(p1, p2);
	
	return 0;
}


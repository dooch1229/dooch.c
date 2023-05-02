#include <stdio.h>
int main()
{	
	int hit=0;
	printf("주인공의 공격력을 입력하세요");
	scanf("%d",&hit);
	
	if(hit<30){
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",hit);
	printf("적의 잔여 HP : %d\n",30 - hit);
	printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n GAME OVER");
	}
	else
	{
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",hit);
	printf("적의 잔여 HP : 0\n");
	printf("적을 불리쳤습니다!\nHappy End");
	}
	return 0;
}

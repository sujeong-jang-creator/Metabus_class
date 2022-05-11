#include <stdio.h>

void main(void)
{
	// 거스름돈의 1000원, 500원, 100원, 50원, 10원의 개수 출력
	int goods, money, change, r_1000, r_500, r_100, r_50, r_10;

	printf("물건값을 입력해 주세요 : ");
	scanf("%d", &goods);

	printf("지불한 액수를 입력해 주세요 : ");
	scanf("%d", &money);

	change = money - goods;
	r_1000 = change / 1000;
	r_500 = (change - r_1000 * 1000) / 500;
	r_100 = (change - r_1000 * 1000 - r_500 * 500) / 100;
	r_50 = (change - r_1000 * 1000 - r_500 * 500 - r_100 * 100) / 50;
	r_10 = (change - r_1000 * 1000 - r_500 * 500 - r_100 * 100 - r_50 * 50) / 10;

	printf("물건값 : %d원, 지불금액 : %d원, 거스름돈 : %d원 \n 1000원 : %d개, 500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개", goods, money, change, r_1000, r_500, r_100, r_50, r_10);
}
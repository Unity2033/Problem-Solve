#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다.

	// int protine = 0;
	// 
	// int calorie = ++protine;
	// 
	// printf("calorie : %d\n", calorie);
	// printf("protine : %d\n", protine);
	// 
	// calorie = --protine;
	// 
	// printf("calorie : %d\n", calorie);
	// printf("protine : %d\n", protine);

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에
	// 연산을 수행합니다.

	// int moisture = 0;
	// 
	// int weight = moisture++;
	// 
	// printf("moisture : %d\n", moisture);
	// printf("weight : %d\n", weight);
	// 
	// weight = moisture--;
	// 
	// printf("moisture : %d\n", moisture);
	// printf("weight : %d\n", weight);

#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문입니다.

	// for (int i = 0; i < 5; i++)
	// {
	// 	  printf("Execute\n");
	// }

	// 반복문이 동작되는 순서는 초기화 → 조건 검사 → 증감의 구조로 동작합니다.
#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문입니다.

	// int count = 1;
	// 
	// while (count <= 5)
	// {
	//     printf("count : %d\n", count);
	// 
	// 	   count++;
	// }

	// 반복문은 순차적으로 실행하면서 조건 분기(Branch)를 만나게 되면, 어느 쪽으로
	// 실행 흐름이 갈지 미리 예측(branch prediction)합니다.
#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문입니다.

	// int connect = 0;
	// 
	// do 
	// {
	// 	 printf("Access");
	// } while (connect > 3);

#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서
	// 실행하는 제어문입니다.

	// for (int i = 1; i <= 5; i++)
	// {
	// 	   if (i == 3)
	//     {
	// 		  continue;
	// 	   }
	// 
	// 	printf("%d ", i);
	// }

#pragma endregion

#pragma endregion
}

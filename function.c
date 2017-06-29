#include <stdio.h>
#include <Windows.h>
#include "header.h"
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void gotoxy(int x, int y)
{
 COORD Pos = { x - 1, y - 1 }; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
// 문자열 랜덤 발생
int random(int n){

	int r;

	srand((unsigned)time(NULL));

	r = (rand() % n);

	return r;

}
// 메인 타이틀
void show_title(){


 gotoxy(33, 6);  printf("team 미생\n");
 gotoxy(28, 8); printf("~인턴사원 메이커~\n");
 gotoxy(25, 12); printf("press ENTER key to start");

 getchar();
 system("cls");

}
// 턴 수 표시
void what_day(int day){


 printf("인턴쉽 %2d일 째\n",day);


}
// 엔터를 눌러 출근
void enter_to(){

printf("...엔터를 누르면 출근합니다...");
getch();
system("cls");

} 
// 선택지의 갯수와 저장할 주소
void sel(int a,int *b, int i)
{

 char c[20]="";

 scanf("%s",c);
 fflush(stdin);


 while ((atoi(c)<1 || atoi(c)>a)||(c[i]!='\0')) 
 {
 
printf("잘못입력하셨습니다 1부터 %d까지 입력해주세요. : ",a);
 scanf("%s",c);
 
 
 }
 

 *b=atoi(c);

}
void game_over(Character*ptr)
{

printf("과로로 병원에 입원했습니다. \n"); 
 show_ID(ptr,5);
 
}
void ending(Character*ptr)
{

	 show_ID(ptr,15);

	 printf("업무능력 %d + 사회생활능력 %d = 최종점수 : %d\n",ptr->abiltiy,ptr->social,ptr->abiltiy+ptr->social);
	 printf("최종 결과\n");

	 if((ptr->social,ptr->abiltiy+ptr->social)>=40)printf("축하드립니다! 정직원이 되셨습니다.\n");
	 else printf("아쉽지만 %d 점 차이로 떨어지셨네요",40-(ptr->social,ptr->abiltiy+ptr->social));

}
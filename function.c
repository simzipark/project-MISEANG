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
// ���ڿ� ���� �߻�
int random(int n){

	int r;

	srand((unsigned)time(NULL));

	r = (rand() % n);

	return r;

}
// ���� Ÿ��Ʋ
void show_title(){


 gotoxy(33, 6);  printf("team �̻�\n");
 gotoxy(28, 8); printf("~���ϻ�� ����Ŀ~\n");
 gotoxy(25, 12); printf("press ENTER key to start");

 getchar();
 system("cls");

}
// �� �� ǥ��
void what_day(int day){


 printf("���Ͻ� %2d�� °\n",day);


}
// ���͸� ���� ���
void enter_to(){

printf("...���͸� ������ ����մϴ�...");
getch();
system("cls");

} 
// �������� ������ ������ �ּ�
void sel(int a,int *b, int i)
{

 char c[20]="";

 scanf("%s",c);
 fflush(stdin);


 while ((atoi(c)<1 || atoi(c)>a)||(c[i]!='\0')) 
 {
 
printf("�߸��Է��ϼ̽��ϴ� 1���� %d���� �Է����ּ���. : ",a);
 scanf("%s",c);
 
 
 }
 

 *b=atoi(c);

}
void game_over(Character*ptr)
{

printf("���η� ������ �Կ��߽��ϴ�. \n"); 
 show_ID(ptr,5);
 
}
void ending(Character*ptr)
{

	 show_ID(ptr,15);

	 printf("�����ɷ� %d + ��ȸ��Ȱ�ɷ� %d = �������� : %d\n",ptr->abiltiy,ptr->social,ptr->abiltiy+ptr->social);
	 printf("���� ���\n");

	 if((ptr->social,ptr->abiltiy+ptr->social)>=40)printf("���ϵ帳�ϴ�! �������� �Ǽ̽��ϴ�.\n");
	 else printf("�ƽ����� %d �� ���̷� �������̳׿�",40-(ptr->social,ptr->abiltiy+ptr->social));

}
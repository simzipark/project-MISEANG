#include <stdio.h>
#include <Windows.h>
#include "header.h"
#include <conio.h>

// 캐릭터 이름 생성
void input_name(Character * ptr){
 
	printf("귀하의 이름을 입력해 주십시오.\n: ");
	scanf("%s", ptr->name);
 
 }

// 캐릭터 스탯 생성
void input_spec(Character * ptr){

	int man;
 
 
	printf("귀하의 스펙을 입력해 주십시오.\n");
	printf("No. 타입 / 난이도\n");
	printf("1. 보기드문청년 / ★★★★★\n");
	printf("2. 스펙왕 / ★★★☆☆\n");
	printf("3. 수석인턴 / ★★☆☆☆\n: ");
	sel(3,&man,1);

	if( man==1){ ptr->abiltiy = 10; ptr->stress = 10; ptr->social = 10; }
	else if(man==2){ ptr->abiltiy = 15; ptr->stress = 15; ptr->social = 8;}
	else if(man== 3){ ptr->abiltiy = 13; ptr->stress = 15; ptr->social = 13; }
 

	system("cls");

}

// 사원증 보여주기
void show_ID(Character * ptr, int i){

	printf("사원증\n");
	printf("이    름 : %s\n", ptr->name);
	printf("업무능력 : %3d\n", ptr->abiltiy);
	printf("인 내 심 : %3d\n", ptr->stress);
	printf("사회생활능력 : %3d\n ", ptr->social);

}

// 캐릭터 생성 함수
void make_character(Character * ptr){

	input_name(ptr);
	input_spec(ptr);
	show_ID(ptr,1);

}
#include <stdio.h>
#include <Windows.h>
#include "header.h"
#include <conio.h>

// ĳ���� �̸� ����
void input_name(Character * ptr){
 
	printf("������ �̸��� �Է��� �ֽʽÿ�.\n: ");
	scanf("%s", ptr->name);
 
 }

// ĳ���� ���� ����
void input_spec(Character * ptr){

	int man;
 
 
	printf("������ ������ �Է��� �ֽʽÿ�.\n");
	printf("No. Ÿ�� / ���̵�\n");
	printf("1. ����幮û�� / �ڡڡڡڡ�\n");
	printf("2. ����� / �ڡڡڡ١�\n");
	printf("3. �������� / �ڡڡ١١�\n: ");
	sel(3,&man,1);

	if( man==1){ ptr->abiltiy = 10; ptr->stress = 10; ptr->social = 10; }
	else if(man==2){ ptr->abiltiy = 15; ptr->stress = 15; ptr->social = 8;}
	else if(man== 3){ ptr->abiltiy = 13; ptr->stress = 15; ptr->social = 13; }
 

	system("cls");

}

// ����� �����ֱ�
void show_ID(Character * ptr, int i){

	printf("�����\n");
	printf("��    �� : %s\n", ptr->name);
	printf("�����ɷ� : %3d\n", ptr->abiltiy);
	printf("�� �� �� : %3d\n", ptr->stress);
	printf("��ȸ��Ȱ�ɷ� : %3d\n ", ptr->social);

}

// ĳ���� ���� �Լ�
void make_character(Character * ptr){

	input_name(ptr);
	input_spec(ptr);
	show_ID(ptr,1);

}
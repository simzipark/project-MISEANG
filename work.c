#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include "header.h"



// ��ũ ����
void do_work(Character * ptr,PA pptr[],PA pptr2[][4]){
 
 int b;
 int m;
  

	b = random(4)+1; 
	printf("�� ������� ��%s������ ��%s����(��) �ϰ� ��� �� ����.\n",pptr[b-1].arr, pptr2[0][b-1].arr);

	what_work(); 
	sel(4,&m,1);
  

	printf("�� ��%s������ �����Ͻ� ��%s�� Ȱ���� �����մϴ�.\n",pptr[m-1].arr, pptr2[1][m-1].arr);

	status(ptr, m);
	if_bu_meet(pptr, ptr,m, b);
	finish_work(ptr);
 
} 
// ����԰� �������� ��
void if_bu_meet(PA pptr[], Character*ptr,int m, int b){

 if(m==b){
 
  switch((m>=3)){
  case 0 : printf("����԰� ��%s������ �����ƴ�!",pptr[m-1].arr); 
printf("%s�� ������ ���ϰ� �ֱ�! ���� �ٶ�����~", ptr->name);
 
    ptr->social += 2; break; 
  case 1:  printf("����԰� ��%s������ �����ƴ�!",pptr[m-1].arr);
  printf("%s�� ���� ���ϳ�..? ���� ��...", ptr->name);
  ptr->social -= 4; break;


  }
 
 }
 
 else printf("������� �þ߿��� �����ϴ�.\n");



}
// ���� ���� �� ���� ��ȭ
void status(Character*ptr, int m){

  switch (m)
  {
  case 1: ptr->abiltiy += 1; ptr->stress += 1; break;
  case 2: ptr->abiltiy += 2; ptr->stress += 3; break;
  case 3: ptr->abiltiy -= 2; ptr->stress -= 2; break;
  case 4: ptr->stress -= 1; break;
  }

}
// ��������
void finish_work(Character * ptr){

 printf("�Ϸ� �ϰ��� �������ϴ�.\n"); 
 show_ID(ptr,13);
 
}
// ���� ���� �׷���
void what_work(){


printf("������ � ������ �����Ͻðڽ��ϱ�?\n");
printf("1. �����ϱ�\n");
printf("2. ���������̼� �ϱ�\n");
printf("3. ���� Ŀ�Ǹ��ø� ����ϱ�\n");
printf("4. ���� �θ���\n");
printf(": ");

}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"
#include <conio.h>
#include <string.h>
#include <windows.h>

// �̺�Ʈ ����
void do_event(Character*ptr,int day,Arr arr[])
{
	if(day==4) event_e(ptr);
	else if(day==8) event_t(ptr,arr);
	else event_n(ptr);

}
// ����� �̺�Ʈ
void event_e(Character*ptr)
{
 
	 int answer=0;
 
 
	  printf(" �� ĭ�� �� �˸��� �ܾ �Ʒ� ���� �߿��� ������.\n");
	  printf("Q : Three teams ________ approach gains the most votes \nfrom our panel of judges  will be invited to compete \nin the next international cooking contest tobe held in Peru.\n");
	  printf(" <����>\n 1. which \n 2. whose \n 3. whoever \n 4. that\n");
	  printf("���� : ");
  
	  sel(4,&answer,1);

	  if (answer == 2) { printf("�����Դϴ�! �̺�Ʈ �������� �����ɷ��� 3 ����մϴ�.\n"); ptr->abiltiy += 3; }
	  else if(1<=answer&&answer<=4)printf("Ʋ�Ƚ��ϴ�. �̺�Ʈ ����.\n"); //���� �� �õ� �ÿ� �������鼭 �����.
  
}

// Ÿ���� �ϱ� �̺�Ʈ
void event_t(Character*ptr,Arr arr[])
{
	 int i = 0;
	 int j;
	 int a;
	 char answer[100];
	 int r;

	 r = random(3);
	 printf("%s\n", arr[r].arr);

	 printf("�� �ְ������ ���� �ۼ��� ��Ű�̴�. ��\n");
	 printf("�ְ���� : %s�� �̰� ��Ÿ ���� ��Ȯ�ϰ� �ۼ��ؿ�~\n\n", ptr->name);
	 printf("--------------------------------------------\n");
	 printf("%s\n",arr[r].arr);
	 printf("--------------------------------------------\n");


	 for(j=0;j<100;j++)
	 {
		scanf_s("%c",&answer[j]);
		if (answer[j]=='\n') break;
	 }
 
	 for (a = 0; a <= strlen(arr[r].arr); a++){
		if (answer[a] == arr[r].arr[a])
			i += 1;
	 }


	 if (i == strlen(arr[r].arr)) {
		 printf("���߾� %s��~\n �̺�Ʈ �������� �����ɷ��� 5 ����մϴ�.\n",ptr->name); ptr->abiltiy += 5;
	 }
	 else printf("%s�� ���� ��Ÿ���ݾ�!\n �̺�Ʈ ����.\n",ptr->name); //�Է°��� �����̽��� �� ������ �ν��� ����.
 
 }
// ���� ���߱� �̺�Ʈ
void event_n(Character*ptr)
 {
  int an_n;
  int i;
  int n = 19;

  printf("�� �ְ������ ��ȣ�� ����Ŵ� ��\n");
  printf("�ְ���� : %s�� ����2�� �系��ȣ�� ����̾���?\n",ptr->name);
  printf("(�����ȣ�� 1���� 50 ������ ���� �Դϴ�.)\n");

  for (i = 1; i <= 6; i++)
  {
   printf("%d��° �õ�!", i);
   
   //scanf_s("%d", &an_n);

   sel(50,&an_n,2);

   if (an_n > n)printf("�ְ���� : �װź��� �۾Ҵ� �� ������? ����� �����!\n");
   else if (an_n < n) printf("�ְ���� : �װͺ��� ũ�� �� ������? ����� �����!\n");
   else{printf("�ְ���� : �´�~ ���� %s��!",ptr->name);  break;}
  }

  if(i==1){printf("�� ���� ���߼̳׿�! ����մϴ�! �����ɷ��� 10 ����մϴ�.\n"); ptr->abiltiy += 10;}
  else if(i>=2&&i<=4) {printf("%d ������ ���߼̳׿�! �����ɷ��� 5 ����մϴ�.\n", i); ptr->abiltiy += 5;}
  else if(i==5 || i==6){ printf("������ ���߼̳׿�! �����ɷ��� 3 ����մϴ�.\n"); ptr->abiltiy += 3; }
  else printf("���� ����!!");
      //1~50�� ���� ���� ���� �Է����� �� �ɷ��ִ� �Լ� �ʿ�.

 }
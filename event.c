#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"
#include <conio.h>
#include <string.h>
#include <windows.h>

// 이벤트 몸통
void do_event(Character*ptr,int day,Arr arr[])
{
	if(day==4) event_e(ptr);
	else if(day==8) event_t(ptr,arr);
	else event_n(ptr);

}
// 영어문제 이벤트
void event_e(Character*ptr)
{
 
	 int answer=0;
 
 
	  printf(" 빈 칸에 들어갈 알맞은 단어를 아래 보기 중에서 고르세요.\n");
	  printf("Q : Three teams ________ approach gains the most votes \nfrom our panel of judges  will be invited to compete \nin the next international cooking contest tobe held in Peru.\n");
	  printf(" <보기>\n 1. which \n 2. whose \n 3. whoever \n 4. that\n");
	  printf("정답 : ");
  
	  sel(4,&answer,1);

	  if (answer == 2) { printf("정답입니다! 이벤트 성공으로 업무능력이 3 상승합니다.\n"); ptr->abiltiy += 3; }
	  else if(1<=answer&&answer<=4)printf("틀렸습니다. 이벤트 실패.\n"); //여러 번 시도 시에 오류나면서 종료됨.
  
}

// 타이핑 하기 이벤트
void event_t(Character*ptr,Arr arr[])
{
	 int i = 0;
	 int j;
	 int a;
	 char answer[100];
	 int r;

	 r = random(3);
	 printf("%s\n", arr[r].arr);

	 printf("※ 최과장님이 문서 작성을 시키셨다. ※\n");
	 printf("최과장님 : %s씨 이거 오타 없이 정확하게 작성해와~\n\n", ptr->name);
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
		 printf("잘했어 %s씨~\n 이벤트 성공으로 업무능력이 5 상승합니다.\n",ptr->name); ptr->abiltiy += 5;
	 }
	 else printf("%s씨 여기 오타났잖아!\n 이벤트 실패.\n",ptr->name); //입력값에 스페이스바 들어갈 떄부터 인식을 못함.
 
 }
// 숫자 맞추기 이벤트
void event_n(Character*ptr)
 {
  int an_n;
  int i;
  int n = 19;

  printf("※ 최과장님이 번호를 물어보신다 ※\n");
  printf("최과장님 : %s씨 영업2팀 사내번호가 몇번이었지?\n",ptr->name);
  printf("(연결번호는 1부터 50 사이의 숫자 입니다.)\n");

  for (i = 1; i <= 6; i++)
  {
   printf("%d번째 시도!", i);
   
   //scanf_s("%d", &an_n);

   sel(50,&an_n,2);

   if (an_n > n)printf("최과장님 : 그거보단 작았던 것 같은데? 제대로 대답해!\n");
   else if (an_n < n) printf("최과장님 : 그것보단 크던 것 같은데? 제대로 대답해!\n");
   else{printf("최과장님 : 맞다~ 고마워 %s씨!",ptr->name);  break;}
  }

  if(i==1){printf("한 번에 맞추셨네요! 대단합니다! 업무능력이 10 상승합니다.\n"); ptr->abiltiy += 10;}
  else if(i>=2&&i<=4) {printf("%d 번만에 맞추셨네요! 업무능력이 5 상승합니다.\n", i); ptr->abiltiy += 5;}
  else if(i==5 || i==6){ printf("간신히 맞추셨네요! 업무능력이 3 상승합니다.\n"); ptr->abiltiy += 3; }
  else printf("게임 실패!!");
      //1~50의 숫자 외의 것을 입력했을 때 걸러주는 함수 필요.

 }
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include "header.h"



// 워크 몸통
void do_work(Character * ptr,PA pptr[],PA pptr2[][4]){
 
 int b;
 int m;
  

	b = random(4)+1; 
	printf("※ 부장님은 『%s』에서 『%s』을(를) 하고 계신 것 같다.\n",pptr[b-1].arr, pptr2[0][b-1].arr);

	what_work(); 
	sel(4,&m,1);
  

	printf("※ 『%s』에서 선택하신 『%s』 활동을 진행합니다.\n",pptr[m-1].arr, pptr2[1][m-1].arr);

	status(ptr, m);
	if_bu_meet(pptr, ptr,m, b);
	finish_work(ptr);
 
} 
// 부장님과 마주쳤을 시
void if_bu_meet(PA pptr[], Character*ptr,int m, int b){

 if(m==b){
 
  switch((m>=3)){
  case 0 : printf("부장님과 『%s』에서 마주쳤다!",pptr[m-1].arr); 
printf("%s씨 열심히 일하고 있군! 아주 바람직해~", ptr->name);
 
    ptr->social += 2; break; 
  case 1:  printf("부장님과 『%s』에서 마주쳤다!",pptr[m-1].arr);
  printf("%s씨 지금 뭐하나..? 나원 참...", ptr->name);
  ptr->social -= 4; break;


  }
 
 }
 
 else printf("부장님의 시야에서 안전하다.\n");



}
// 업무 실행 후 스탯 변화
void status(Character*ptr, int m){

  switch (m)
  {
  case 1: ptr->abiltiy += 1; ptr->stress += 1; break;
  case 2: ptr->abiltiy += 2; ptr->stress += 3; break;
  case 3: ptr->abiltiy -= 2; ptr->stress -= 2; break;
  case 4: ptr->stress -= 1; break;
  }

}
// 업무일지
void finish_work(Character * ptr){

 printf("하루 일과가 끝났습니다.\n"); 
 show_ID(ptr,13);
 
}
// 업무 선택 그래픽
void what_work(){


printf("오늘은 어떤 업무를 진행하시겠습니까?\n");
printf("1. 복사하기\n");
printf("2. 프레젠테이션 하기\n");
printf("3. 상사와 커피마시며 잡담하기\n");
printf("4. 농땡이 부리기\n");
printf(": ");

}
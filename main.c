#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "header.h"

int main(){

		// 플레이어의 캐릭터 구조체
		Character player;
		// 업무에 따른 위치 문자열
		PA place[4] = {"복사실", "회의실", "자판기", "옥상"};
		// 업무에 따른 행동 문자열(0층 부장님, 1층 플레이어)
		PA act[2][4] = {"무언가", "회의" , "커피마시기", "사색",
				"복사하기", "프레젠테이션","상사와 잡담하기","농땡이 부리기"};
		// 이벤트 문자열 맞추기
		Arr arr[3] = {"아프리카 청춘이다.", "더할 나위 없었다, yes!", "잠이 많아서 생각이 안 온다."};

		int cutline = 40;
		int day;

		system("mode con: cols=70 lines=20");

		show_title();
		make_character(&player);
		enter_to();

		for (day = 1; (day < 13)&&(player.stress<25); day++)
		{
			what_day(day);

			if (day % 4 != 0) do_work(&player,place,act);     
			else do_event(&player,day,arr);

			enter_to();
  
		}
   
		if(day<13) game_over(&player);
 
		else ending(&player);

}
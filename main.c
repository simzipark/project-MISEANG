#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "header.h"

int main(){

		// �÷��̾��� ĳ���� ����ü
		Character player;
		// ������ ���� ��ġ ���ڿ�
		PA place[4] = {"�����", "ȸ�ǽ�", "���Ǳ�", "����"};
		// ������ ���� �ൿ ���ڿ�(0�� �����, 1�� �÷��̾�)
		PA act[2][4] = {"����", "ȸ��" , "Ŀ�Ǹ��ñ�", "���",
				"�����ϱ�", "���������̼�","���� ����ϱ�","���� �θ���"};
		// �̺�Ʈ ���ڿ� ���߱�
		Arr arr[3] = {"������ī û���̴�.", "���� ���� ������, yes!", "���� ���Ƽ� ������ �� �´�."};

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
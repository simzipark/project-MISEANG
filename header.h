typedef struct character{

 char name[50];
 int abiltiy;
 int stress;
 int social;

} Character;
typedef struct place_act{

 char arr[50];

} PA;
typedef struct arr{

	char arr[100];

} Arr;


// UI
void gotoxy(int x, int y);
void show_title();
void what_work();
void what_day(int day);
void enter_to();

// ĳ���� ����
void input_spec(Character * ptr);
void input_name(Character * ptr);
void show_ID(Character * ptr,int i);
void make_character(Character * ptr);

// ��ũ
void if_bu_meet(PA pptr[], Character*ptr,int m, int b);
void do_work(Character * ptr,PA pptr[],PA pptr2[][4]);
void finish_work(Character * ptr);

// �̺�Ʈ
void event_e(Character*ptr);
void event_t(Character*ptr,Arr arr[]);
void event_n(Character*ptr);
void do_event(Character*ptr,int day,Arr arr[]);

// ����
void ending(Character*ptr);
void game_over(Character*ptr);

// �������ͽ�
void status(Character*ptr, int m);

// ���
int random(int n);
void sel(int a,int* b,int i);
void enter_to();
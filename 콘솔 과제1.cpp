
#include <iostream>
#include <time.h>

using namespace std;

enum MAIN_MENU
{
	MM_NONE,
	MM_MAP,
	MM_INVENTORY,
	MM_SHOP,
	MM_EXIT
};

enum MAP_TYPE
{
	MT_NONE,
	MT_EASY,
	MT_NORMAL,
	MT_HARD,
	MT_BACK
};

enum JOB
{
	JOB_NONE,
	JOB_KNIGHT,
	JOB_ARCHER,
	JOB_WIZARD,
	JOB_PRIST,
	JOB_END
};


#define NAME_SIZE 32

struct _tagPlayer
{
	char strName[NAME_SIZE];
	char strJobName[NAME_SIZE];
	JOB  eJob;
	int iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;
	int iHP;
	int iHPMAX;
	int iMP;
	int iMPMAX;
	int iExp;
	int iLevel;

};

struct _tagMonster
{
	char strName[NAME_SIZE];
	int iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;
	int iHP;
	int iHPMax;
	int iMP;
	int iMPMax;
	int iLevel;
	int iExp;
	int iGoldMin;
	int iGoldMax;
		
};

int main()
{
	
	srand((unsigned int)time(0));

	// 게임을 시작할때 플레이어 정보를 설정하게 한다.
   _tagPlayer tPlayer = {};
  
   //플레이어 닉네임 설정
   cout << " 닉네임 : " << endl;
   cin.getline(tPlayer.strName, NAME_SIZE - 1 );


	

	int iJob = JOB_NONE;
	while (iJob == JOB_NONE)
	{
		system("cls");
		cout << "1. 기사" << endl;
		cout << "2. 궁수" << endl;
		cout << "3. 마법사" << endl;
		cout << "4. 사제" << endl;
		cout << "직업을 선택하세요 :";
		cin >> iJob;
			
		if (iJob <= JOB_NONE || iJob >= JOB_END)
			iJob = JOB_NONE;

		

	 }
	
	tPlayer.iLevel = 1;
	tPlayer.iExp   = 0;	
	tPlayer.eJob = (JOB)iJob;

	switch (tPlayer.eJob)
	{
	case JOB_KNIGHT:
		strcpy_s(tPlayer.strJobName, "기사");
		tPlayer.iAttackMin = 5;
		tPlayer.iAttackMax = 10;
		tPlayer.iArmorMin = 20;
		tPlayer.iArmorMax = 30;
		tPlayer.iHP = 500;
		tPlayer.iHPMAX = 500;
		tPlayer.iMP = 100;
		tPlayer.iMPMAX = 100;

		break;
	case JOB_ARCHER:
		strcpy_s(tPlayer.strJobName, "궁수");
		tPlayer.iAttackMin = 15;
		tPlayer.iAttackMax = 20;
		tPlayer.iArmorMin = 15;
		tPlayer.iArmorMax = 20;
		tPlayer.iHP = 300;
		tPlayer.iHPMAX = 300;
		tPlayer.iMP = 200;
		tPlayer.iMPMAX = 200;
		break;
	case JOB_WIZARD:
		strcpy_s(tPlayer.strJobName, "마법사");
		tPlayer.iAttackMin = 10;
		tPlayer.iAttackMax = 15;
		tPlayer.iArmorMin = 10;
		tPlayer.iArmorMax = 15;
		tPlayer.iHP = 200;
		tPlayer.iHPMAX = 200;
		tPlayer.iMP = 500;
		tPlayer.iMPMAX = 500;
		break;
	case JOB_PRIST:
		strcpy_s(tPlayer.strJobName, "사제");
		tPlayer.iAttackMin = 5;
		tPlayer.iAttackMax = 10;
		tPlayer.iArmorMin = 10;
		tPlayer.iArmorMax = 15;
		tPlayer.iHP = 200;
		tPlayer.iHPMAX = 200;
		tPlayer.iMP = 400;
		tPlayer.iMPMAX = 400;
		break;
	}
 


	while (true)
	{
		system("cls");
		cout << "1.맵" << endl;
		cout << "2.가방" << endl;
		cout << "3.상점" << endl;
		cout << "4.종료" << endl;
		cout << "메뉴를 선택하세요" << endl;
		
		int iMenu;
		cin >> iMenu;

		if (iMenu == MT_BACK)
		if (iMenu == MM_EXIT)
		    break;
		


		switch (iMenu)
		{
		case MM_MAP:
			while (true)
			{
				system("cls");
				cout << "1. 쉬움" << endl;
				cout << "2. 보통" << endl;
				cout << "3. 어려움" << endl;
				cout << "4. 뒤로가기" << endl;
				cout << "맵을 선택하세요 : " << endl;
				int iMenu;
				cin >> iMenu;

				if (iMenu == MT_BACK)
					break;

				

			}
				break;
		case MM_INVENTORY:
			while (true)
			{
				system("cls");
				cout << "1. 장비" << endl;
				cout << "2. 소모품" << endl;
				cout << "3. 기타" << endl;
				cout << "4. 장비창 닫기" << endl;
				
				int iMenu;
				cin >> iMenu;
				if (iMenu == MM_EXIT)
					break;
				
					
			}
			    break;
		case MM_SHOP:
			while (true)
			{
				system("cls");
				cout << "1. 강화 재료" << endl;
				cout << "2. 성장 재료" << endl;
				cout << "3. 장비 재료" << endl;
				cout << "4. 상점 닫기" << endl;
				int iMenu;
				cin >> iMenu;

				if (iMenu == MM_EXIT)
					break;
					
 			}
				break;
		default:
			cout << "잘못 선택하였습니다." << endl;


				
		}

	}


	
	




}


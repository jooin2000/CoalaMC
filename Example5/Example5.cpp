#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main()
{
	double pi = 3.14159265358979323846; //파이를 정의

	int px, py, pz; //좌표 변수를 쓰기위한 선언
	getPlayerLocation(&px, &py, &pz); //플레이어의 좌표값을 각 변수에 저장

	double dir = getPlayerDirection(); //dir변수에 플레이어의 방향을 더블형으로 저장
	double radian = dir * pi / 180.; //getPlayerDirection()함수를 통해 받은 각도를 라디안으로 변환

	int dx = -10 * sin(radian); //z축을 기준으로 하기 때문에 양수로 저장할 시에 문제가 생김
	int dz = 10 * cos(radian);
	getPlayerLocation(&px, &py, &pz);				// 현재 플레이어의 위치를 획득한다.
	BlockID gold = createBlock(BLOCK_GOLD);
	BlockID stone = createBlock(BLOCK_STONE);		// STONE 블록을 생성한다.
	BlockID dirt = createBlock(BLOCK_DIRT);	        // DIRT 블록을 생성한다.
	WoolID wool = createWool(COLOR_YELLOW);
	BlockID diamond = createBlock(BLOCK_DIAMOND);
	BlockID glass = createBlock(BLOCK_GLASS);
	int y, a, b;
	for (y = 0; y < 6; y++)
		for (a = -5; a < 6; a++)
			for (b = -5; b < 6; b++)
				locateBlock(wool, px + a, py + y, pz - 5), locateBlock(wool, px + a, py + y, pz + 5),
				locateBlock(wool, px + 5, py + y, pz + b), locateBlock(wool, px - 5, py + y, pz + b),
				locateBlock(glass, px + a, py + 6, pz + b), locateBlock(wool, px + a, py - 1, pz + b);
	locateBlock(glass, px - 5, py + 2, pz), locateBlock(glass, px + 5, py + 2, pz);
	locateBlock(glass, px, py + 2, pz + 5), locateBlock(glass, px, py + 2, pz - 5);
	DoorID door = createDoor(DOOR_OAK, false, HINGE_LEFT);
	installDoor(door, px + 5, py, pz - 3, FACING_EAST);








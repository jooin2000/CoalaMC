#include <CoalaMOD.h>
#pragma comment(lib,"CoalaMOD.lib")
int main()
{
	BlockID iron = createBlock(BLOCK_IRON);
	BlockID gold = createBlock(BLOCK_GOLD);
	BlockID diamond = createBlock(BLOCK_DIAMOND);
	BlockID obsidian = createBlock(BLOCK_OBSIDIAN);
	BlockID melon = createBlock(BLOCK_MELON);
	BlockID prismarine = createBlock(BLOCK_PRISMARINE);
	BlockID andesite = createBlock(BLOCK_ANDESITE);
	BlockID emerald = createBlock(BLOCK_EMERALD);
	BlockID air = createBlock(BLOCK_EMERALD);
	int sx, sy, sz, ex, ey, ez;
	scanf_s("%d %d %d %d %d %d", &sx, &sy, &sz, &ex, &ey, &ez);
	int a1 = sx, b1 = sy, c1 = sz, a2 = ex, b2 = ey, c2 = ez;
	if (sx < ex && sy < ey && sz < ez) {
		for (int sx = a1; sx <= ex; sx++) {
			for (int sy = b1; sy <= ey; sy++) {
				for (int sz = c1; sz <= ez; sz++)
				{
					locateBlock(iron, sx, sy, sz);
				}
			}
		}
	}
	if (sx < ex && sy<ey && sz>ez) {
		for (int sx = a1; sx <= ex; sx++) {
			for (int sy = b1; sy <= ey; sy++) {
				for (int ez = c2; ez <= sz; ez++) {
					locateBlock(gold, sx, sy, ez);
				}
			}
		}
	}
	if (sx<ex && sy>ey && sz<ez) {
		for (int sx = a1; sx <= ex; sx++) {
			for (int ey = b2; ey <= sy; ey++) {
				for (int sz = c1; sz <= ez; sz++) {
					locateBlock(diamond, sx, ey, sz);
				}
			}
		}
	}
	if (sx > ex && sy < ey && sz < ez) {
		for (int ex = a2; ex <= sx; ex++) {
			for (int sy = b1; sy <= ey; sy++) {
				for (int sz = c1; sz <= ez; sz++) {
					locateBlock(obsidian, ex, sy, sz);
				}
			}
		}
	}
	if (sx<ex && sy>ey && sz > ez) {
		for (int sx = a1; sx <= ex; sx++) {
			for (ey = b2; ey <= sy; ey++) {
				for (int ez = c2; ez <= sz; ez++) {
					locateBlock(melon, sx, ey, ez);
				}
			}
		}
	}
	if (sx > ex && sy<ey && sz>ez) {
		for (int ex = a2; ex <= sx; ex++) {
			for (int sy = b1; sy <= ey; sy++) {
				for (int ez = c2; ez <= sz; ez++) {
					locateBlock(prismarine, ex, sy, ez);
				}
			}
		}
	}
	if (sx > ex && sy > ey && sz < ez) {
	for (int ex = a2; ex <= sx; ex++) {
		for (ey = b2; ey <= sy; ey++) {
			for (sz = c1; sz <= ez; sz++)
			{
				locateBlock(andesite, ex, ey, sz);
			}
		}
	}
}
	if (sx > ex && sy > ey && sz > ez) {
		for (int ex = a2; ex <= sx; ex++) {
			for (ey = b2; ey <= sy; ey++) {
				for (int ez = c2; ez <= sz; ez++) {
					locateBlock(emerald, ex, ey, ez);
				}
			}
		}
	}
	else locateBlock(air, sx, sy,sz);


	
	
}

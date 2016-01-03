#include "stdafx.h"

void initInfo() {
	std::cout << "Booting " << OS_VERSION << "..." << std::endl;
	std::cout << std::endl << "HARDWARE INFO:" << std::endl;
	std::cout << "    " << CPU << " @ " << CPU_CLOCK << "GHz" << std::endl;
	std::cout << "    " << RAM << " @ " << RAM_CLOCK << "MHz" << std::endl;
	std::cout << "    " << GPU << " @ " << GPU_CLOCK << "MHz" << std::endl;
	std::cout << "    " << CPU << " @ " << CPU_CLOCK << "GHz, " << VRAM << "MB" << std::endl;
}

int main()
{
	initInfo();
	std::cin.get();
	return 0;
}


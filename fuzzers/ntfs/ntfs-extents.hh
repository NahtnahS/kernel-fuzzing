#include "fs-fuzzer.hh"

const fs_extents::extent _ntfs_extents[] = {
	{ 0, 4160 },
	{ 8192, 64 },
	{ 16384, 512 },
	{ 17344, 448 },
	{ 17856, 64 },
	{ 18368, 448 },
	{ 18880, 64 },
	{ 19392, 576 },
	{ 20416, 576 },
	{ 21440, 576 },
	{ 22464, 448 },
	{ 22976, 64 },
	{ 23488, 576 },
	{ 24512, 448 },
	{ 25024, 64 },
	{ 25536, 768 },
	{ 26560, 576 },
	{ 27584, 704 },
	{ 28608, 384 },
	{ 29120, 64 },
	{ 29632, 384 },
	{ 30144, 64 },
	{ 30656, 384 },
	{ 31168, 64 },
	{ 31680, 384 },
	{ 32192, 64 },
	{ 32704, 256 },
	{ 33216, 64 },
	{ 33728, 256 },
	{ 34240, 64 },
	{ 34752, 256 },
	{ 35264, 64 },
	{ 35776, 256 },
	{ 36288, 64 },
	{ 36800, 256 },
	{ 37312, 64 },
	{ 37824, 256 },
	{ 38336, 64 },
	{ 38848, 256 },
	{ 39360, 64 },
	{ 39872, 256 },
	{ 40384, 64 },
	{ 40896, 704 },
	{ 41920, 448 },
	{ 42432, 64 },
	{ 42944, 448 },
	{ 43456, 64 },
	{ 43968, 128 },
	{ 44480, 64 },
	{ 44992, 128 },
	{ 45504, 64 },
	{ 46016, 128 },
	{ 46528, 64 },
	{ 47040, 128 },
	{ 47552, 64 },
	{ 48064, 128 },
	{ 48576, 64 },
	{ 49088, 128 },
	{ 49600, 64 },
	{ 50112, 128 },
	{ 50624, 64 },
	{ 51136, 128 },
	{ 51648, 64 },
	{ 52160, 128 },
	{ 52672, 64 },
	{ 53184, 128 },
	{ 53696, 64 },
	{ 54208, 128 },
	{ 54720, 64 },
	{ 55232, 128 },
	{ 55744, 64 },
	{ 56256, 128 },
	{ 56768, 64 },
	{ 57280, 128 },
	{ 57792, 64 },
	{ 58304, 128 },
	{ 58816, 64 },
	{ 59328, 128 },
	{ 59840, 64 },
	{ 60352, 128 },
	{ 60864, 64 },
	{ 61376, 128 },
	{ 61888, 64 },
	{ 62400, 128 },
	{ 62912, 64 },
	{ 63424, 128 },
	{ 63936, 64 },
	{ 64448, 128 },
	{ 64960, 64 },
	{ 65472, 128 },
	{ 65984, 64 },
	{ 66496, 128 },
	{ 67008, 64 },
	{ 67520, 128 },
	{ 68032, 64 },
	{ 68544, 128 },
	{ 69056, 64 },
	{ 69568, 128 },
	{ 70080, 64 },
	{ 70592, 128 },
	{ 71104, 64 },
	{ 71616, 128 },
	{ 72128, 64 },
	{ 72640, 128 },
	{ 73152, 64 },
	{ 73664, 128 },
	{ 74176, 64 },
	{ 74688, 128 },
	{ 75200, 64 },
	{ 75712, 128 },
	{ 76224, 64 },
	{ 76736, 128 },
	{ 77248, 64 },
	{ 77760, 128 },
	{ 78272, 64 },
	{ 78784, 128 },
	{ 79296, 64 },
	{ 79808, 128 },
	{ 80320, 64 },
	{ 80832, 128 },
	{ 81344, 64 },
	{ 81856, 576 },
	{ 82880, 1600 },
	{ 84928, 576 },
	{ 85952, 448 },
	{ 86464, 64 },
	{ 86976, 448 },
	{ 87488, 64 },
	{ 88000, 448 },
	{ 88512, 64 },
	{ 89024, 576 },
	{ 90048, 64 },
	{ 536576, 256 },
	{ 540672, 64 },
	{ 544768, 1344 },
	{ 546240, 64 },
	{ 546752, 64 },
	{ 547264, 64 },
	{ 547776, 64 },
	{ 548288, 64 },
	{ 548800, 128 },
	{ 548992, 64 },
	{ 549120, 128 },
	{ 549312, 64 },
	{ 549440, 128 },
	{ 549632, 64 },
	{ 549760, 128 },
	{ 549952, 64 },
	{ 550080, 128 },
	{ 550272, 256 },
	{ 550592, 64 },
	{ 550720, 128 },
	{ 550912, 64 },
	{ 551040, 128 },
	{ 551232, 64 },
	{ 552960, 128 },
	{ 557056, 256 },
	{ 819200, 256 },
	{ 823296, 131840 },
	{ 955328, 64 },
	{ 955840, 64 },
	{ 956352, 64 },
	{ 956864, 64 },
	{ 957376, 64 },
	{ 957888, 64 },
	{ 958400, 64 },
	{ 2093056, 512 },
	{ 2094016, 448 },
	{ 2094528, 64 },
	{ 2095040, 448 },
	{ 2095552, 64 },
	{ 2096064, 576 },
	{ 2097088, 1048640 },
	{ 4193792, 512 },
	};

const fs_extents ntfs_extents = {
	1217024,
	4194304,
	174,
	_ntfs_extents,
};

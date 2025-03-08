// #2379. Minimum Recolors to Get K Consecutive Black Blocks

// You are given a 0-indexed string blocks of length n, where blocks[i] is either 'W' or 'B', representing the color of the ith block. The characters 'W' and 'B' denote the colors white and black, respectively.

// You are also given an integer k, which is the desired number of consecutive black blocks.

// In one operation, you can recolor a white block such that it becomes a black block.

// Return the minimum number of operations needed such that there is at least one occurrence of k consecutive black blocks.




// int minimumRecolors(
// 	const char * const blockColors,
// 	const int targetLen
// ){
// 	const int blockColorsLen = strlen(blockColors);
// 	if (!( blockColorsLen >= targetLen )){
// 		return -1;
// 	}

// 	int prefixTargetLenNonBlackCnt = 0;
// 	for (int i = 0; i < targetLen; i += 1){
// 		if (blockColors[i] != 'B'){
// 			prefixTargetLenNonBlackCnt += 1;
// 		}
// 	}

// 	int minNonBlackCnt = prefixTargetLenNonBlackCnt;

// 	int curNonBlackCnt = prefixTargetLenNonBlackCnt;
// 	for (
// 		int oldIdx = 0, newIdx = targetLen;
// 		newIdx < blockColorsLen;
// 		oldIdx += 1, newIdx += 1
// 	){
// 		if (blockColors[oldIdx] != 'B'){
// 			curNonBlackCnt -= 1;
// 		}
// 		if (blockColors[newIdx] != 'B'){
// 			curNonBlackCnt += 1;
// 		}

// 		if (curNonBlackCnt < minNonBlackCnt){
// 			minNonBlackCnt = curNonBlackCnt;
// 		}
// 	}

// 	return minNonBlackCnt;
// }
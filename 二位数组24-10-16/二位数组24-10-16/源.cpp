#include<stdio.h>
int main() {
	int array[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("&array[%d] [%d]=%p\n", i, j, &array[i][j]); 
			    /*    output：&array[0][0] = 000000F16AF2FB38
				& array[0][1] = 000000F16AF2FB3C
				& array[0][2] = 000000F16AF2FB40
				& array[0][3] = 000000F16AF2FB44
				& array[1][0] = 000000F16AF2FB48
				& array[1][1] = 000000F16AF2FB4C
				& array[1][2] = 000000F16AF2FB50
				& array[1][3] = 000000F16AF2FB54
				& array[2][0] = 000000F16AF2FB58
				& array[2][1] = 000000F16AF2FB5C
				& array[2][2] = 000000F16AF2FB60
				& array[2][3] = 000000F16AF2FB64
				conclusion：数组是连续存放的
				2.初始化是从左到右从上到下的*/


		}
	}

	return 0;
}
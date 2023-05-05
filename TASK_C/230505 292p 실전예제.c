#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main()
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", lotto_nums + i);
		for (int j = i-1; j >= 0; j--)
		{
			if (lotto_nums[i] == lotto_nums[j])
			{
				printf("같은 번호가 있습니다!\n");
				i--;
				break;
			}
		}
	}
	return 0;
}

void print_nums(int* lotto_nums)
{
	printf("로또 번호 : ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
	return 0;
}
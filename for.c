#include <stdio.h>
int str_len(char* str){
	int num = 0;
	int count = 0;
	while(*str){
		if(*str == 'F'){
			num += 2;
		}
		++str;
		++count;
	}
	count += num;
	return count;
}

void str_ex(char* str){
	char* str_str ="fal";
	int i = 0;
	int num = 0;
	int count = str_len(str);
	printf("%d\n",count);
	char str_cp[count];
	for(i = 0; i < count; ++i){
		if(*str == 'F'){
			while(*str_str){
				str_cp[i] = *str_str;
				++i;
				++str_str;
			}
			--i;
			++str;
			str_str = "fal";
			continue;
		}
		else{
			str_cp[i] = *str;
			++str;
		}
	}
	printf("%s\n",str_cp);
}

int main(void)
{
	char str[] = "afFfaaFF";
	str_ex(str);
	return 0;
}

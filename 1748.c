#include<stdio.h>
#include<math.h>

int number_length(int num){
	int cnt = 0;
	while(num > pow(10, cnt)) cnt++;
	return cnt;
}

int main(){
	int n, length;
	int res = 0;
	scanf("%d", &n);

	length = number_length(n);
	
	for(int i = 1; i < length; i++)
		res += i * (pow(10, i) - pow(10, i - 1));

	res += (n - pow(10, length) + 1) * length;

	printf("%d", res);
}

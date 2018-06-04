#include <iostream>
#include <cstdio>
using namespace std;
int n[1000000];
int main(void){
	int T, i, taxi = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum13 = 0, count1 = 0, r13 = 0, r2 = 0, x = 0, y = 0;
	scanf("%d", &T);

	for(i = 0; i < T; i++){
		scanf("%d", &n[i]);

		if(n[i] == 4) taxi++;
		else if(n[i] == 1) {sum1 += n[i]; count1++;}
		else if(n[i] == 3) sum3 += n[i];
		else sum2 += n[i];
	}

	if(count1 == 0) {x = sum3 / 3; taxi += x;}
	else{
		sum13 = sum1 + sum3;
		x = sum13 / 4;
		r13 = sum13 % 4;
		taxi += x;
		if(r13 == 3) taxi++;
	}
	y = sum2 / 4;
	r2 = sum2 % 4;
	taxi += y;
	if(r2 == 2 || r13 ==1 || r13 == 2) taxi++;

	printf("%d\n", taxi);
}

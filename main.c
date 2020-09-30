# include <stdio.h>
# include <stdlib.h>
unsigned long problem_1(unsigned long max_n){
	long i;
	long ans=0;
	for(i=0;i<max_n;i++){
		if (i%3==0||i%5==0){
			ans+=i;
		}
	}
	return ans;
}
int problem_5(){
	int i;
	for(i=1;i%16!=0||i%9!=0||i%5!=0||i%7!=0||i%11!=0||i%13!=0||i%17!=0||i%19!=0;i++);
	return i;
}
unsigned long problem_6(unsigned int max_n){
	unsigned long ans=0;
	unsigned long sum_of_squares=0;
	unsigned long square_of_a_sum=0;
	int i;
	for(i=1;i<=max_n;i++){
		sum_of_squares+=i*i;
	}
	for(i=1;i<=max_n;i++){
		square_of_a_sum+=i;
	}
	square_of_a_sum*=square_of_a_sum;
	return square_of_a_sum-sum_of_squares;
}
int main(){
	printf("problem 1: %ld\n",problem_1(1000));
	printf("problem 5: %d\n",problem_5());
	printf("problem 6: %ld\n",problem_6(100));
	return 0;
}
	
#include <stdio.h>

int sub(int box,int sum,int ans){
	printf("10以下の正の整数を入力してください\n");
	scanf("%d",&box);
	ans = box % 2 ;
	if (ans == 0) {
		
		printf("偶数が入力されました。偶数の場合は演算を行いません。");
		sum = sum + 0;
		return sum;
		
		} //偶数の場合：何もしない
		else { 
			printf("奇数が入力されました\n");
			sum = sum + box;
			
			return sum;
		} //それ意外（奇数の場合）出力と演算を行う
	}

int main(){
	
	//int cnt = 0; //カウンタ変数
	int box = 0; //入力用変数
	int sum = 0; //入力された数を入れていく変数
	int ans = 0; //あまりを入れる変数
	
	for (box=0;sum<=20;box=0){
		
		sum = sub(box,sum,ans);
		
		}
	printf("合計が20を越えました。\n合計は%dです。\n演算を終了します。",sum);
	return 0;
	
	}
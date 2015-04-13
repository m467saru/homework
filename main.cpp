#include <stdio.h>

int main(){
	
	//int cnt = 0; //カウンタ変数
	float box = 0; //入力用変数
	float sum = 0; //入力された数を入れていく変数
	float ans = 0; //あまりを入れる変数
	
	printf("10以下の正の整数を入力してくださいね\n");
	scanf("%d",&box);
	printf("この時点でのbox...box=%d\n",box);
	ans = box / ( box / 2 );
	printf("この時点でのans...ans=%d\n",ans);
	if (ans == 2) printf("偶数が入力されました。偶数の場合は演算を行いません。ans=%d",ans); //偶数の場合：何もしない
		else { 
			printf("奇数が入力されました%d\n",box);
			sum = sum + box;
		} //それ意外（奇数の場合）出力と演算を行う
	
	for (box=0;sum <= 20;box=0){
	
		printf("10以下の正の整数を入力してください\n");
		scanf("%d",&box);
			ans = box / (box/2);
		if (ans == 2) printf("forループ内で偶数が検出されました。"); //偶数の場合：何もしない
			else { 
				printf("奇数が入力されましたbox=%d\n",box);
				sum = sum + box;
	
			}
		}
	printf("合計が20を越えました。\n合計は%dです。\n演算を終了します。",sum);
	return 0;
	
	}
#include <stdio.h>

int sub(int box,int sum,int ans){
	printf("10�ȉ��̐��̐�������͂��Ă�������\n");
	scanf("%d",&box);
	ans = box % 2 ;
	if (ans == 0) {
		
		printf("���������͂���܂����B�����̏ꍇ�͉��Z���s���܂���B");
		sum = sum + 0;
		return sum;
		
		} //�����̏ꍇ�F�������Ȃ�
		else { 
			printf("������͂���܂���\n");
			sum = sum + box;
			
			return sum;
		} //����ӊO�i��̏ꍇ�j�o�͂Ɖ��Z���s��
	}

int main(){
	
	//int cnt = 0; //�J�E���^�ϐ�
	int box = 0; //���͗p�ϐ�
	int sum = 0; //���͂��ꂽ�������Ă����ϐ�
	int ans = 0; //���܂������ϐ�
	
	for (box=0;sum<=20;box=0){
		
		sum = sub(box,sum,ans);
		
		}
	printf("���v��20���z���܂����B\n���v��%d�ł��B\n���Z���I�����܂��B",sum);
	return 0;
	
	}
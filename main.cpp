#include <stdio.h>

int main(){
	
	//int cnt = 0; //�J�E���^�ϐ�
	float box = 0; //���͗p�ϐ�
	float sum = 0; //���͂��ꂽ�������Ă����ϐ�
	float ans = 0; //���܂������ϐ�
	
	printf("10�ȉ��̐��̐�������͂��Ă���������\n");
	scanf("%d",&box);
	printf("���̎��_�ł�box...box=%d\n",box);
	ans = box / ( box / 2 );
	printf("���̎��_�ł�ans...ans=%d\n",ans);
	if (ans == 2) printf("���������͂���܂����B�����̏ꍇ�͉��Z���s���܂���Bans=%d",ans); //�����̏ꍇ�F�������Ȃ�
		else { 
			printf("������͂���܂���%d\n",box);
			sum = sum + box;
		} //����ӊO�i��̏ꍇ�j�o�͂Ɖ��Z���s��
	
	for (box=0;sum <= 20;box=0){
	
		printf("10�ȉ��̐��̐�������͂��Ă�������\n");
		scanf("%d",&box);
			ans = box / (box/2);
		if (ans == 2) printf("for���[�v���ŋ��������o����܂����B"); //�����̏ꍇ�F�������Ȃ�
			else { 
				printf("������͂���܂���box=%d\n",box);
				sum = sum + box;
	
			}
		}
	printf("���v��20���z���܂����B\n���v��%d�ł��B\n���Z���I�����܂��B",sum);
	return 0;
	
	}
#include <stdio.h>

int main(){
	
	//int cnt = 0; //�J�E���^�ϐ�
	int box = 0; //���͗p�ϐ�
	int boxp = 0; //���͗p�ϐ��i�|�C���^�j
	int sum = 0; //���͂��ꂽ�������Ă����ϐ�
	int ans = 0; //���܂������ϐ�
	
	printf("10�ȉ��̐��̐�������͂��Ă�������\n");
	scanf("%d",&box);
	ans = box % 2 ;
	if (ans == 0) printf("���������͂���܂����B�����̏ꍇ�͉��Z���s���܂���B"); //�����̏ꍇ�F�������Ȃ�
		else { 
			printf("������͂���܂���\n");
			sum = sum + box;
		} //����ӊO�i��̏ꍇ�j�o�͂Ɖ��Z���s��
	
	for (box=0;sum<=20;box=0){
	
		printf("10�ȉ��̐��̐�������͂��Ă�������\n");
		scanf("%d",&box);
			ans = box % 2;
		if (ans == 0) {
			printf("���������͂���܂����B�����̏ꍇ�͉��Z���s���܂���B"); 
			}//�����̏ꍇ�F�������Ȃ�
			else { 
				printf("������͂���܂����B",box);
				sum = sum + box;
	
			}
		}
	printf("���v��20���z���܂����B\n���v��%d�ł��B\n���Z���I�����܂��B",sum);
	return 0;
	
	}
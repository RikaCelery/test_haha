#include<stdio.h>
#include<string.h>  						//������Ҫ���ƣ�������Ҫ����ͷ�ļ�string.h
int a[10];          						//��������
int y1=0, y2=0, y3=0;						//����ֻ�ܷ���һ��ֵ��������Ҫȫ�ֱ������洢�Ƚϴ���
//��������Ԫ���򲿷�
int zhuyuan(){
	int sum=0;
	int b[10],i,j,k,r;
	memcpy(b,a,sizeof(a));     				//���ú�����a���鸴�Ƹ�b����
	for ( i = 0; i < 9; i++){
		j = i;
		for ( k = i+1; k < 10; k++){
		
			y1++;							//��¼�ȽϵĴ���		

			if (b[k] < b[j]) j = k;
		}
		r = b[i]; b[i] = b[j]; b[j] = r; 
		sum++;    							//��¼�ƶ�����
	}
	return sum;
}
//������ð�����򲿷�
int maopao() {
	int sum=0;
	int b[10], i,r,flag=1;
	memcpy(b, a, sizeof(a));
	while (flag){
		flag = 0;
		for (i = 0; i < 9; i++){
			y2++;						//��¼�Ƚϴ���
			if (b[i]>b[i+1]){
				r = b[i]; b[i] = b[i + 1]; b[i + 1] = r; 
				sum++;					//��¼�ƶ�����
				flag = 1;
			}
		}
	}
	return sum;
}
//�����������ӵ��������з�
int zhubu() {
	int sum=0;
	int b[10], i, j, k, r,flag;
	memcpy(b, a, sizeof(a));
	for (i = 1; i < 10; i++) {
		flag = 0;
		j = i - 1;
		while ((b[j] > b[i]) && (j >= 0)) {
			j = j - 1; 
			flag = 1; 				//�����ж��Ƿ����ƶ�
			y3++; 					//��¼�ȽϵĴ����н���while����
		}
		r = b[i];
		for (k = i - 1; k >= j + 1; k--) {
			b[k + 1] = b[k];
			if (flag) sum++;		//��¼�ƶ������в����ƶ�
		}
		if (flag) sum++; 			//�ƶ���������δ��ѭ���еĲ���
		b[j + 1] = r; 
	}
	y3 = y3 + 9;					//�Ƚ�����9������������δ����ѭ��
	return sum;
}
int main() {
	int x1,x2,x3;
	int i;
	for ( i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	x1 = zhuyuan();
	x2 = maopao();
	x3 = zhubu();
	printf("%d %d %d %d %d %d", y1, x1, y2, x2, y3, x3);
	return 0;
}

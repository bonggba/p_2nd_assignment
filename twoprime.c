#include <stdio.h>
int prime(int n);
int main(){
	int n, i, check=0;

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for(i=2; i<=n/2; ++i)
	{
		if(prime(i)==1)
		{
			if(prime(n-i)==1)
			{				
				printf("%d = %d+%d\n", n, i, n-i);
				check =1;
			}
		}
	}
	if (check==0)
		printf("%d�� �ΰ����� �Ҽ��� ��Ÿ�� �� �����ϴ�.", n);
	return 0;
}

	int prime(int n)
	{
		int i, primenumber=1;
		
		for(i=2; i<=n/2; ++i)
		{
			if(n%i==0)
			{
				primenumber=0;
				break;
			}
		}
	
	return primenumber;
}
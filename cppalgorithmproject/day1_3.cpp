#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	//freopen("input.txt", "r", stdin);

	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int arr[100];
		int dump_cnt;
		int max_idx, min_idx;
		cin >> dump_cnt;
		for (int i = 0; i < 100; i++)
		{
			cin >> arr[i];
		}

		for (int dump = 0; dump < dump_cnt; dump++)
		{
			max_idx = 0;
			min_idx = 0;
			
			for (int i = 1; i < 100; i++)
			{
				if (arr[i] > arr[max_idx])
				{
					max_idx = i;
				}
				if (arr[i] < arr[min_idx]) 
				{
					min_idx = i;
				}
			}
			arr[max_idx]--;
			arr[min_idx]++;

		}
		max_idx = 0;
		min_idx = 0;
		for (int i = 1; i < 100; i++)
		{
			if (arr[i] > arr[max_idx])
			{
				max_idx = i;
			}
			if (arr[i] < arr[min_idx])
			{
				min_idx = i;
			}
		}
		cout << "#" << test_case << " " << arr[max_idx] - arr[min_idx] << endl;
		
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
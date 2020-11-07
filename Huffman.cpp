#include "Assistance.h"		// ���������
#include "HuffmanTree.h"	// ����������

#define MAXN 1024

int main(void)
{
    try	{					// ��try��װ���ܳ����쳣�Ĵ���
		int n;
		cin >> n;
		int w[MAXN];
		char ch[] = {'A', 'B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		for (int i = 1; i <= n;i++)
		{
			int num = 0;
			cin >> num;
			for(int j = 0; j < num; j++)
			{
				cin >> w[j];
			}
			cout << "Case " << i << ": " << endl;
			HuffmanTree<char, int> hmTree1(ch, w, num);
			HuffmanTree<char, int> hmTree(hmTree1);
			for (int k = 0; k < num; k++)  {
			String strTmp = hmTree.Encode(ch[k]);
			cout << ch[k] << " " << w[k] << " : " << strTmp.CStr() << endl;
		}
		}
	}
	catch (Error err)	{	// ��׽�������쳣
		err.Show();			// ��ʾ�쳣��Ϣ
	}

	system("PAUSE");  
	return 0;        
}

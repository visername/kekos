#include <iostream>
#include<clocale>
#include<math.h>
using namespace std;
int main()
{
    setlocale (LC_ALL, "Russian");
    int n=3, b[n][n];
	int a[n][n];
	for(int i = 1; i< n; i++)
	{
		for(int j = 1; j<n; j++)
		{
			cout << "������� �������� [" << i << "][" << j << "]";
			cin >> a[i][j];

		}
	}
	for(int i=1; i<n;i++)
    {
        a[1][j]=a[1][j]/a[1][1];
    }
    cout << "a[i][j]" <<a[i][j];



    for (k = 0; k<n; k++) //����� ������������� �������� � ������ �������
    {
        aa = abs(a[k][k]);
        i = k;
        for(m = k+1; m<n; m++)
            if(abs(a[m][k])>aa)
            {
                i = m;
                aa = abs(a[m][k]);
            }

            if (aa == 0)   //�������� �� ������� �������
            {
                cout<<"������� �� ����� �������"<<endl;
            }

            if (i != k)  //  ������������ i-�� ������, ���������� ������� ������� k-�� ������
            {
                for (j=k; j < n+1; j++)
                {
                    bb = a[k][j];
                    a[k][j] = a[i][j];
                    a[i][j] = bb;
                }
            }
            aa = a[k][k];//�������������� k-�� ������ (���������� �������������� ����������)
            a[k][k] = 1;
            for (j=k+1;j<n+1;j++)
                a[k][j] = a[k][j]/aa;
            for (i = k+1; i < n; i++)//�������������� ����� � ������� k-�� ������
            {
                bb = a[i][k];
                a[i][k] = 0;
                if (bb!=0)
                    for (j=k+1; j< n+1; j++)
                        a[i][j]=a[i][j]-bb*a[k][j];
            }
    }

    for (i=n-1; i>=0; i--)   //���������� ������� ����
    {
        x[i] = 0;
        aa = a[i][n];
        for (j = n; j>i; j--)
            aa = aa-a[i][j]*x[j];
        x[i] = aa;
    }

    cout<<"������� �������:"<<endl;  //����� �������
    for (i = 0; i< n; i++)
    {
        cout<<"x["<<i+1<<"]="<<x[i];
        cout<<endl;
    }
/*for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {

        }
        cout << endl;
    }*/

    return 0;
}


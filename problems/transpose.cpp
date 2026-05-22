#include<iostream>
using namespace std;
class trans
{
	int **p;
	public:
	void dma(int r,int c)
	{
		int i;
		p=new int *[r];
		for(i=0;i<r;i++)
		p[i]=new int [c];
		cout<<"Dynamic Memory Is Allocate"<<endl;
	}
	void set_data(int r,int c)
	{
		int i,j,t;
		cout<<"Enter the matrix data"<<endl;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				cin>>p[i][j];
		}
		cout<<"Before Transpose "<<endl;
		get_data(r,c);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				break;
				else
				{
					t=p[i][j];
					p[i][j]=p[j][i];
					p[j][i]=t;
				}
			}
		}
	}
	void get_data(int r,int c)
	{
		int i,j;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<< p[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};
int main()
{
	int r,c;
	cout<<"Enter the rows and columns of matrix"<<endl;
	cin>>r>>c;
	if(r==c)
	{
		trans t;
		t.dma(r,c);
		t.set_data(r,c);
		cout<<"After the transpose"<<endl;
		t.get_data(r,c);
	}
	else
		cout<<"No.of rows and columns must be same for transpose matrix"<<endl;

}

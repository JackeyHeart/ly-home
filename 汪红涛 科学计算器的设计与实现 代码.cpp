#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
class jsq
{
	double a;
	char b;
	double c;
public:
	jsq()
	{
		a=0;
		b=0;
		c=0;
	};
	jsq(double a,char b,double c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
	double getSide1()
	{
		return a;
	}
	char getSide2()
	{
		return b;
	}
	double getSide3()
	{
		return c;
	}

	double jiafa()
	{
		double d;
		double e;
		d=a+c;
		e=d;
		return d;
	}
	double jianfa()
	{
		double d;
		double e;
		d=a-c;
		e=d;
		return d;
	}
	double chengfa()
	{
		double d;
		double e;
		d=a*c;
		e=d;
		return d;
	}
	double chufa()
	{
		double d;
		double e;
		d=a/c;
		e=d;
		return d;
	}
	double kaigenhao()
	{
		double d;
		d=sqrt(a);
		return d;
	}
	double sjzh()
	{
		double d;
		d=a/180;
		return d;
	}
	int szzh()
	{
		int x=a;
		int p=1,y=0,yushu;
		while(1)
		{
			yushu=x%2;
			x/=2;
			y+=yushu*p;
			p*=10;
			if(x<2)
			{
				y+=x*p;
				break;
			}
		}
		return y;
	}
};
void hymk()
{
	int i;
	cout<<"\t\t���������������������������"<<endl;  
	for(i=0;i<3;i++)
	{
		cout<<"\t\t��\t\t\t\t\t\t  ��"<<endl; 
	}
	cout<<"\t\t�����  ��ӭʹ�ü��׿�ѧ������  ��������"<<endl; 
	for(i=0;i<3;i++) 
	{
		cout<<"\t\t��\t\t\t\t\t\t  ��"<<endl;  
	}
	cout<<"\t\t���������������������������\n"<<endl; 

}
void sysm()
{
	cout<<"�ڴ˼�������'+'����ӷ����㣬'-'����������㣬'*'����˷����㣬'/'�����������'��'#'�������ŷ����㣬'��'��������ת������,'!'��������ת����\n";
	cout<<"ע����ʹ�ÿ������ܡ�����ת�����ܡ�����ת������ʱs3������1��\n";
	cout<<"ע������ת����������ʮ������ת��Ϊ����������\n";
}
void hsmk()
{
	cout<<"��л����ʹ�ã��´��ټ���";
}
int main()
{
	hymk();
	int i=0;
	double s1,s3;
	char s2,z=0;
	sysm();
	do
	{
		cout<<"�������������������������������������������������������Ƿ�ʼ���㨀����������������������������������������������������\n";
		cin>>z;
		if(z=='y')
		{
			cout<<"����������������������������������������������������������������ʽ������������������������������������������������������\n";
			cin>>s1>>s2>>s3;
			jsq x1(s1,s2,s3);
			cout<<setiosflags(ios::fixed)<<setprecision(2);
			if(s2=='+')
			{
				cout<<"����������Ϊ"<<x1.jiafa()<<"\n";
			}
			if(s2=='-')
			{
				cout<<"����������Ϊ"<<x1.jianfa()<<"\n";
			}
			if(s2=='*')
			{
				cout<<"����������Ϊ"<<x1.chengfa()<<"\n";
			}
			if(s2=='/')
			{
				cout<<"����������Ϊ"<<x1.chufa()<<"\n";
			}
			if(s2=='#')
			{
				cout<<"����������Ϊ"<<x1.kaigenhao()<<"\n";
			}
			if(s2=='?')
			{
				cout<<"����������Ϊ"<<x1.sjzh()<<"��"<<"\n";
			}
			if(s2=='!')
			{
				cout<<"����������Ϊ"<<x1.szzh()<<"\n";
			}
		}
		if(z=='n')
		{
			cout<<"���������ѽ���\n";
			break;
		}
		i++;
	}while(i<=100);
	hsmk();
	system("pause");
	return 0; 
}
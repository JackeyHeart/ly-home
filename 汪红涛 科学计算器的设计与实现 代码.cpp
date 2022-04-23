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
	cout<<"\t\t§§§§§§§§§§§§§§§§§§§§§§§§§§"<<endl;  
	for(i=0;i<3;i++)
	{
		cout<<"\t\t◎\t\t\t\t\t\t  ◎"<<endl; 
	}
	cout<<"\t\t◎★★★★【  欢迎使用简易科学计算器  】★★★★◎"<<endl; 
	for(i=0;i<3;i++) 
	{
		cout<<"\t\t◎\t\t\t\t\t\t  ◎"<<endl;  
	}
	cout<<"\t\t§§§§§§§§§§§§§§§§§§§§§§§§§§\n"<<endl; 

}
void sysm()
{
	cout<<"在此计算器中'+'代表加法运算，'-'代表减法运算，'*'代表乘法运算，'/'代表除法运算'，'#'代表开根号法运算，'？'代表三角转换运算,'!'代表数制转换。\n";
	cout<<"注：当使用开根功能、三角转换功能、数制转换功能时s3请输入1。\n";
	cout<<"注：数制转换功能允许十进制数转换为二进制数。\n";
}
void hsmk()
{
	cout<<"感谢您的使用，下次再见。";
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
		cout<<"███████████████████████████是否开始计算███████████████████████████\n";
		cin>>z;
		if(z=='y')
		{
			cout<<"███████████████████████████请输入运算式███████████████████████████\n";
			cin>>s1>>s2>>s3;
			jsq x1(s1,s2,s3);
			cout<<setiosflags(ios::fixed)<<setprecision(2);
			if(s2=='+')
			{
				cout<<"本次运算结果为"<<x1.jiafa()<<"\n";
			}
			if(s2=='-')
			{
				cout<<"本次运算结果为"<<x1.jianfa()<<"\n";
			}
			if(s2=='*')
			{
				cout<<"本次运算结果为"<<x1.chengfa()<<"\n";
			}
			if(s2=='/')
			{
				cout<<"本次运算结果为"<<x1.chufa()<<"\n";
			}
			if(s2=='#')
			{
				cout<<"本次运算结果为"<<x1.kaigenhao()<<"\n";
			}
			if(s2=='?')
			{
				cout<<"本次运算结果为"<<x1.sjzh()<<"π"<<"\n";
			}
			if(s2=='!')
			{
				cout<<"本次运算结果为"<<x1.szzh()<<"\n";
			}
		}
		if(z=='n')
		{
			cout<<"本次运算已结束\n";
			break;
		}
		i++;
	}while(i<=100);
	hsmk();
	system("pause");
	return 0; 
}
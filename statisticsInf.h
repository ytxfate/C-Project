//#include "structData.h"
//#include <typeinfo>  
using namespace std;
//ͳ��ѧ��ƽ���ɼ�
void statisticsStudent()
{
	cout<<"\n*****ͳ��ѧ��ƽ���ɼ�*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽͳ��ѧ��ƽ���ɼ�"<<"\n"<<"2.�������ķ�ʽͳ��ѧ��ƽ���ɼ�" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ��ѯ��ѧ�ţ�����10001����";break;
				case 2:cout<<"������Ҫ��ѯ��������������������";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	} 
	int i=0;
	int grades[10]; 
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("grade.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue,gradeValue;
    cout<<"\nѧ�� ���� �κ� ���� �ɼ�"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			int index=lineValue.find_last_of(" ");
			gradeValue=lineValue.substr(index+1);
			int gra=atoi(gradeValue.c_str());
			//cout<<gra<<"\n"<<typeid(gra).name()<<endl;		//���� 
			grades[i]=gra;
			i++; 
		}
    }
    double allGrade,averGrade; 
    for(int j=0;j<i;j++)	//��� 
    {
    	//cout<<grades[j]<<endl;
    	allGrade+=grades[j];
	}
    averGrade=allGrade/i;
    cout<<"\n�����ܷ֣� "<<allGrade<<"\n"<<"����ƽ���֣� "<<averGrade<<"\n"<<endl; 
    infile.close();             //�ر��ļ������� 
}

//ͳ��һ�ſγ̵�ƽ���ɼ�
void statisticsCourse()
{
	cout<<"*****ͳ��һ�ſγ̵�ƽ���ɼ�*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.�Կγ̱�ŵķ�ʽͳ��һ�ſγ̵�ƽ���ɼ�"<<"\n"<<"2.�Կγ����Ƶķ�ʽͳ��һ�ſγ̵�ƽ���ɼ�" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ��ѯ�Ŀγ̱�ţ�����20001����";break;
				case 2:cout<<"������Ҫ��ѯ�Ŀγ����ƣ��������ģ���";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	} 
	int i=0;
	int grades[100]; 
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("grade.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue,gradeValue;
    cout<<"\nѧ�� ���� �κ� ���� �ɼ�"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			int index=lineValue.find_last_of(" ");
			gradeValue=lineValue.substr(index+1);
			int gra=atoi(gradeValue.c_str());
			//cout<<gra<<"\n"<<typeid(gra).name()<<endl;		//���� 
			grades[i]=gra;
			i++; 
		}
    }
    double allGrade,averGrade; 
    for(int j=0;j<i;j++)	//��� 
    {
    	//cout<<grades[j]<<endl;
    	allGrade+=grades[j];
	}
    averGrade=allGrade/i;
    cout<<"\n�ÿ��ܷ֣� "<<allGrade<<"\n"<<"�ÿ�ƽ���֣� "<<averGrade<<"\n"<<endl; 
    infile.close();             //�ر��ļ������� 
}


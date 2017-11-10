#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <String>
#include <strstream>
#include "structData.h"
#include "addInf.h"
#include "change.h" 
#include "deletedInf.h"
#include "searchInf.h"
#include "statisticsInf.h"
using namespace std;

//�������� 
void addInfor(); 
void changeInfor();
void deletedInfor();
void searchInfor();
void statisticsInfor();


//������ 
int main()
{
	cout<<"��������������������������������������������"<<endl;
	cout<<"��           ***ѧ������ϵͳ***           ��"<<endl;
	cout<<"��               �������棩               ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��              1.�����Ϣ                ��"<<endl;
	cout<<"��              2.�޸���Ϣ                ��"<<endl;
	cout<<"��              3.ɾ����Ϣ                ��"<<endl;
	cout<<"��              4.��ѯ��Ϣ                ��"<<endl;
	cout<<"��              5.ͳ����Ϣ                ��"<<endl;
	cout<<"��              0.�˳�                    ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��������������������������������������������"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n������ѡ��0~5����"; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=5)
		{
			system("cls");		//���� 
			switch(inputNum)
			{
				case 1:addInfor();break;
				case 2:changeInfor();break;
				case 3:deletedInfor();break;
				case 4:searchInfor();break;
				case 5:statisticsInfor();break;
				case 0:exit(0);break;		//�˳�ϵͳ 
				default:break;
			}
		}
		else
		{
			cout<<"�������ݴ���"<<endl;
		}
	}
	return 0;
}


//�����Ϣ���� 
void addInfor()
{
	cout<<"��������������������������������������������"<<endl;
	cout<<"��           ***ѧ������ϵͳ***           ��"<<endl;
	cout<<"��            �������Ϣ���棩            ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��            1.���ѧ����Ϣ              ��"<<endl;
	cout<<"��            2.��ӿγ���Ϣ              ��"<<endl;
	cout<<"��            3.���ѡ����Ϣ              ��"<<endl;
	cout<<"��            4.��ӳɼ���Ϣ              ��"<<endl;
	cout<<"��            0.����������                ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��������������������������������������������"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n������ѡ��0~4����"; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:cout<<"*****���ѧ����Ϣ*****"<<endl;addStudent();break;
				case 2:cout<<"*****��ӿγ���Ϣ*****"<<endl;addCourse();break;
				case 3:cout<<"*****���ѡ����Ϣ*****"<<endl;addChoiceCourse();break;
				case 4:cout<<"*****��ӳɼ���Ϣ*****"<<endl;addGrade();break;
				case 0:
					system("cls");		//���� 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"�������ݴ���"<<endl;
		}
	}
}

//�޸���Ϣ���� 
void changeInfor()
{
	cout<<"��������������������������������������������"<<endl;
	cout<<"��           ***ѧ������ϵͳ***           ��"<<endl;
	cout<<"��            ���޸���Ϣ���棩            ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��            1.�޸�ѧ����Ϣ              ��"<<endl;
	cout<<"��            2.�޸Ŀγ���Ϣ              ��"<<endl;
	cout<<"��            3.�޸�ѡ����Ϣ              ��"<<endl;
	cout<<"��            4.�޸ĳɼ���Ϣ              ��"<<endl;
	cout<<"��            0.����������                ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��������������������������������������������"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n������ѡ��0~4����"; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:changeStudent();break;
				case 2:changeCourse();break;
				case 3:changeChoiceCourse();break;
				case 4:changeGrade();break;
				case 0:
					system("cls");		//���� 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"�������ݴ���"<<endl;
		}
		
		cout<<endl; 
		system("pause");	//�ȴ�
		system("cls");		//���� 
		changeInfor();
	}
}

//ɾ����Ϣ���� 
void deletedInfor()
{
	cout<<"��������������������������������������������"<<endl;
	cout<<"��           ***ѧ������ϵͳ***           ��"<<endl;
	cout<<"��            ��ɾ����Ϣ���棩            ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��            1.ɾ��ѧ����Ϣ              ��"<<endl;
	cout<<"��            2.ɾ���γ���Ϣ              ��"<<endl;
	cout<<"��            3.ɾ��ѡ����Ϣ              ��"<<endl;
	cout<<"��            4.ɾ���ɼ���Ϣ              ��"<<endl;
	cout<<"��            0.����������                ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��������������������������������������������"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n������ѡ��0~4����"; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:deletedStudent();break;
				case 2:deletedCourse();break;
				case 3:deletedChoiceCourse();break;
				case 4:deleteGrade();break;
				case 0:
					system("cls");		//���� 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"�������ݴ���"<<endl;
		}
		
		cout<<endl; 
		system("pause");	//�ȴ�
		system("cls");		//���� 
		deletedInfor();
	}
}

//��ѯ��Ϣ���� 
void searchInfor()
{
	cout<<"��������������������������������������������"<<endl;
	cout<<"��           ***ѧ������ϵͳ***           ��"<<endl;
	cout<<"��            ����ѯ��Ϣ���棩            ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��            1.��ѯѧ����Ϣ              ��"<<endl;
	cout<<"��            2.��ѯ�γ���Ϣ              ��"<<endl;
	cout<<"��            3.��ѯѡ����Ϣ              ��"<<endl;
	cout<<"��            4.��ѯ�ɼ���Ϣ              ��"<<endl;
	cout<<"��            0.����������                ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��������������������������������������������"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n������ѡ��0~4����"; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:searchStudent();break;
				case 2:searchCourse();break;
				case 3:searchChoiceCourse();break;
				case 4:searchGrade();break;
				case 0:
					system("cls");		//���� 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"�������ݴ���"<<endl;
		}
		cout<<endl; 
		system("pause");	//�ȴ�
		system("cls");		//���� 
		searchInfor();	
	}
}

//ͳ����Ϣ���� 
void statisticsInfor()
{
	cout<<"��������������������������������������������"<<endl;
	cout<<"��           ***ѧ������ϵͳ***           ��"<<endl;
	cout<<"��            ��ͳ����Ϣ���棩            ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��            1.ͳ��ѧ��ƽ���ɼ�          ��"<<endl;
	cout<<"��            2.ͳ��һ�ſγ̵�ƽ���ɼ�    ��"<<endl;
	cout<<"��            0.����������                ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��                                        ��"<<endl;
	cout<<"��������������������������������������������"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n������ѡ��0~2����"; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=2)
		{
			switch(inputNum)
			{
				case 1:statisticsStudent();break;
				case 2:statisticsCourse();break;
				case 0:
					system("cls");		//���� 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"�������ݴ���"<<endl;
		}
		system("pause");	//�ȴ�
		system("cls");		//���� 
		statisticsInfor();
	}
}

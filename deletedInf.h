//#include "structData.h"
using namespace std;
//***����ƥ�䣬����ƥ�䣬����д�룬���������������������***//
//ɾ��ѧ����Ϣ
void deletedStudent()
{
	cout<<"\n*****ɾ��ѧ����Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽɾ��"<<"\n"<<"2.�������ķ�ʽɾ��" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫɾ����ѧ�ţ�����10001����";break;
				case 2:cout<<"������Ҫɾ����������������������";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("student.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("student_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\nѧ�� ���� �Ա� �������� רҵ"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("student.txt");
    rename("student_new.txt","student.txt");
}

//ɾ���γ���Ϣ
void deletedCourse()
{
	cout<<"\n*****ɾ���γ���Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.�Կγ̱�ŵķ�ʽɾ��"<<"\n"<<"2.�Կγ����Ƶķ�ʽɾ��" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫɾ���Ŀγ̱�ţ�����20001����";break;
				case 2:cout<<"������Ҫɾ���Ŀγ����ƣ��������ģ���";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("course.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("course_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\n�κ� ���� ѧ�� ѧʱ"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("course.txt");
    rename("course_new.txt","course.txt");
}

//ɾ��ѡ����Ϣ
void deletedChoiceCourse()
{
	cout<<"\n*****ɾ��ѡ����Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽɾ��"<<"\n"<<"2.�������ķ�ʽɾ��" <<endl;
	cout<<"3.�Կγ̱�ŵķ�ʽɾ��"<<"\n"<<"4.�Կγ����Ƶķ�ʽɾ��" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~4����"; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫɾ����ѧ�ţ�����10001����";break;
				case 2:cout<<"������Ҫɾ����������������������";break;
				case 3:cout<<"������Ҫɾ���Ŀγ̱�ţ�����20001����";break;
				case 4:cout<<"������Ҫɾ���Ŀγ����ƣ��������ģ���";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("chioced_course.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("chioced_course_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\n�κ� ���� ѧ�� ѧʱ"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("chioced_course.txt");
    rename("chioced_course_new.txt","chioced_course.txt");
}

//ɾ���ɼ���Ϣ
void deleteGrade()
{
	cout<<"\n*****ɾ���ɼ���Ϣ*****"<<endl; 
	//�жϳɼ���ʽ 
	cout<<"1.��ѧ��+�γ̱�ŵķ�ʽɾ��"<<"\n"<<"2.������+�γ̱�ŵķ�ʽɾ��" <<endl;
	cout<<"3.��ѧ��+�γ����Ƶķ�ʽɾ��"<<"\n"<<"4.������+�γ����Ƶķ�ʽɾ��" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~4����"; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫɾ����ѧ��+�γ̱�ţ�����10001�س�����20001����\n";break;
				case 2:cout<<"������Ҫɾ��������+�γ̱�ţ����������س�����20001����\n";break;
				case 3:cout<<"������Ҫɾ����ѧ��+�γ����ƣ�����10001�س�����20001����\n";break;
				case 4:cout<<"������Ҫɾ��������+�γ����ƣ����������س��������ģ���\n";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str1,str2;
	cin>>str1>>str2;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("grade.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("grade_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\nѧ�� ���� �κ� ���� �ɼ�"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str1)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			if(lineValue.find(str2)>10000)		//����ƥ��
			{
				infileNew<<lineValue<<"\n";
    			continue;	//ƥ��ʧ�ܷ��� 
			}
			else
			{
				cout<<lineValue<<endl;		//ƥ��ɹ��������� 	
			}
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("grade.txt");
    rename("grade_new.txt","grade.txt");
} 

//#include "structData.h"
using namespace std;

//���ѧ����Ϣ
void addStudent()
{
	struct STUDENT stu; 
	//cout<<"*****���ѧ����Ϣ*****"<<endl; 
	while(true)
	{
		cout<<"������ѧ��ѧ�ţ�������10001��";cin>>stu.num;
		ifstream infile; 
	    infile.open("student.txt",ios_base::in);   //���ļ����������ļ��������� 
	    if(!infile)//�ж� �Ƿ���ļ� 
		{
			cout<<"open error!"<<endl;
			abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
		}
	    string lineValue;
	    strstream ss;
    	string str;
    	ss << stu.num;
    	ss >> str;
	    while(getline(infile,lineValue))
	    {
	    	if(lineValue.find(str)>10000)		//����ƥ��
	    	{
	    		continue;	//ƥ��ʧ�ܷ��� 
			}
			else
			{
				cout<<"ѧ��"<<stu.num<<"�Ѵ���"<<endl;		//ƥ��ɹ��������� 
				break; 
			}
	    }
	    infile.close();             //�ر��ļ������� 
	} 
	cout<<"������ѧ��������������������";cin>>stu.name;
	cout<<"������ѧ���Ա𣺣������У�";cin>>stu.sex;
	cout<<"������ѧ����������-�꣺������1995��";cin>>stu.birthday.year;
	cout<<"������ѧ����������-�£�������3��";cin>>stu.birthday.month;
	cout<<"������ѧ����������-�գ�������15��";cin>>stu.birthday.day;
	cout<<"������ѧ��רҵ���������������";cin>>stu.profe;
	//����д���ļ��� 
	ofstream outfile("student.txt",ios_base::out|ios_base::app);	//���ļ� 
	if(!outfile)	//�ж��Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	outfile<<stu.num<<" "<<stu.name<<" "<<stu.sex<<" "<<stu.birthday.year<<"-"<<stu.birthday.month<<"-"<<stu.birthday.day<<" "<<stu.profe<<"\n";		//������д�뵽student.txt�ļ��� 
	outfile.close(); 
}

//��ӿγ���Ϣ
void addCourse()
{
	struct COURSE course; 
	//cout<<"*****��ӿγ���Ϣ*****"<<endl; 
	while(true)
	{
		cout<<"������γ̱�ţ�������20001��";cin>>course.courseNum;
		ifstream infile; 
	    infile.open("course.txt",ios_base::in);   //���ļ����������ļ��������� 
	    if(!infile)//�ж� �Ƿ���ļ� 
		{
			cout<<"open error!"<<endl;
			abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
		}
	    string lineValue;
	    strstream ss;
    	string str;
    	ss << course.courseNum;
    	ss >> str;
	    while(getline(infile,lineValue))
	    {
	    	if(lineValue.find(str)>10000)		//����ƥ��
	    	{
	    		continue;	//ƥ��ʧ�ܷ��� 
			}
			else
			{
				cout<<"�γ̱��"<<course.courseNum<<"�Ѵ���"<<endl;		//ƥ��ɹ��������� 
				break; 
			}
	    }
	    infile.close();             //�ر��ļ������� 
	}
	cout<<"������γ����ƣ����������ģ�";cin>>course.courseName;
	cout<<"������γ�ѧ�֣�������3��";cin>>course.courseCredit;
	cout<<"������γ�ѧʱ��������10��";cin>>course.coursePeriod;
	//����д���ļ��� 
	ofstream outfile("course.txt",ios_base::out|ios_base::app);	//���ļ� 
	if(!outfile)	//�ж��Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	outfile<<course.courseNum<<" "<<course.courseName<<" "<<course.courseCredit<<" "<<course.coursePeriod<<"\n";		//������д�뵽student.txt�ļ��� 
	outfile.close(); 
}

//���ѡ����Ϣ
void addChoiceCourse()
{
	struct CHIOCED_COURSE chioce_course; 
	//cout<<"*****���ѡ����Ϣ*****"<<endl; 
	cout<<"������ѧ�ţ�������10001��";cin>>chioce_course.num;
	cout<<"������������������������";cin>>chioce_course.name;
	cout<<"������γ̱�ţ�������20001��";cin>>chioce_course.courseNum;
	cout<<"������γ����ƣ����������ģ�";cin>>chioce_course.courseName;
	//����д���ļ��� 
	ofstream outfile("chioced_course.txt",ios_base::out|ios_base::app);	//���ļ� 
	if(!outfile)	//�ж��Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	outfile<<chioce_course.num<<" "<<chioce_course.name<<" "<<chioce_course.courseNum<<" "<<chioce_course.courseName<<"\n";		//������д�뵽student.txt�ļ��� 
	outfile.close();
}
void addGrade()
{
	struct GRADE grade; 
	//cout<<"*****���ѡ����Ϣ*****"<<endl; 
	cout<<"������ѧ�ţ�������10001��";cin>>grade.num;
	cout<<"������������������������";cin>>grade.name;
	cout<<"������γ̱�ţ�������20001��";cin>>grade.courseNum;
	cout<<"������γ����ƣ����������ģ�";cin>>grade.courseName;
	cout<<"������γ̳ɼ���������88��";cin>>grade.gradeValue;
	//����д���ļ��� 
	ofstream outfile("grade.txt",ios_base::out|ios_base::app);	//���ļ� 
	if(!outfile)	//�ж��Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	outfile<<grade.num<<" "<<grade.name<<" "<<grade.courseNum<<" "<<grade.courseName<<" "<<grade.gradeValue<<"\n";		//������д�뵽student.txt�ļ��� 
	outfile.close();
}

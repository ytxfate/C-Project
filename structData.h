using namespace std;
//�������� 
struct DATE{
	unsigned int year;
	unsigned int month;
	unsigned int day;
};
//ѧ����Ϣ 
struct STUDENT{
	unsigned int num;
	char name[20];
	char sex[2];
	DATE birthday;
	char profe[20];	//רҵ 
};
//�γ���Ϣ
struct COURSE{
	unsigned int courseNum;
	char courseName[20];
	unsigned int courseCredit;	//�γ�ѧ�� 
	unsigned int coursePeriod;	//�γ�ѧʱ 
};
//ѡ����Ϣ 
struct CHIOCED_COURSE{
	unsigned int num;
	char name[20];
	unsigned int courseNum;
	char courseName[20];
};
//�ɼ���Ϣ
struct GRADE{
	unsigned int num;
	char name[20];
	unsigned int courseNum;
	char courseName[20];
	unsigned int gradeValue;
}; 
 

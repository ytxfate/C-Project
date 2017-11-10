using namespace std;
//出生年月 
struct DATE{
	unsigned int year;
	unsigned int month;
	unsigned int day;
};
//学生信息 
struct STUDENT{
	unsigned int num;
	char name[20];
	char sex[2];
	DATE birthday;
	char profe[20];	//专业 
};
//课程信息
struct COURSE{
	unsigned int courseNum;
	char courseName[20];
	unsigned int courseCredit;	//课程学分 
	unsigned int coursePeriod;	//课程学时 
};
//选课信息 
struct CHIOCED_COURSE{
	unsigned int num;
	char name[20];
	unsigned int courseNum;
	char courseName[20];
};
//成绩信息
struct GRADE{
	unsigned int num;
	char name[20];
	unsigned int courseNum;
	char courseName[20];
	unsigned int gradeValue;
}; 
 

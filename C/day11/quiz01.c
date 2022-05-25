#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// isdigit  는 ctype.h에 있음
#include <ctype.h>
#include <string.h>
// atof 는 stdlib.h에 있다
#include <stdlib.h>

//매크로로 정함
#define NUM 1
#define CHARCT 2

int numcmp(const char*, const char*);	// 함수 numcmp 선언
//void fcmp(int (**p)(const char*, const char*), char*, char*);	// 함수 fcmp 선언
// 위 주석처럼 써도 되고, 여기서 만큼은 (**p) 생략해도 가능하다. 밑에 처럼.
void fcmp(int (const char*, const char*), char*, char*);	// 함수 fcmp 선언

int main(void)
{
	char s[80], t[80];
	int (*ptr)(const char *, const char *);		// 변수 ptr 선언 : ptr이 가르키는 곳엔 바뀌지 않는 문자열 두개를 인자로 하는 함수가 있다.

	// 비교할 문자 / 숫자 두개를 받아온다.
	scanf("%s %s", s, t);

	// 함수를 향한 주소값, s, t를 준다.
	fcmp(&ptr, s, t); // 함수 fcmp 콜한다.
	printf("%d\n", ptr(s, t));
	return 0;
}

// 숫자 비교. 문자는 #include <string.h>에 있는 strcmp를 사용 할거다!
int numcmp(const char* ps, const char* pt)
{
	float a, b;
	// atof : 문자열을 실수로 바꿔줌.
	a = atof(ps);
	b = atof(pt);
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}

// ptr에 함수 둘 중하나를 넣어줘야 하니까 그 위로 한칸 더 올라가서 시작해야함. p의 주소값에 numcmp, strcmo를 넣어줘야해. p를 쓰는 이유.
// ptr과 같은 것을 p로 표현. 왜냐면 밑에서 p에 값을 넣어야 하니까.
void fcmp(int (**p)(const char*, const char*), char* ps, char* pt)
{
	// ps 판단하는 부분
	// cond 은 컨디션! 얘네가 숫자인지 문자인지 보려고 가져왔다.
	int cond;
	cond = NUM;
	// s 문자배열 앞에 '-'가 들어가면 그 다음 거 읽어.
	if (*ps == '-')
		ps++;
	// s, t배열의 상태가 숫자면 1(NUM), 아니면 즉 문자면 2(NUM)
	// ps가 가르키는 값이 비어있지 않으면 계속 반복해서 읽어.
	while (cond == NUM && *ps != NULL)
		// isdigit 함수는 숫자가 아닐시에 0, 숫자면 숫자값 리턴함.
		if (isdigit(*ps) || *ps == '.')
			ps++;
		// 문자일때
		else
			cond = CHARCT;

	// pt 판단하는 부분
	if (*pt == '-')
		pt++;
	while (cond == NUM && *pt != NULL)
		if (isdigit(*pt) || *pt == '.')
			pt++;
		else
			cond = CHARCT;
	// ps와 pt가 모두 숫자 문자열 이면 numcmp 함수 연결
	// 그렇지 않으면 strcmp 함수 연결
	if (cond == NUM)
	{
		*p = numcmp;
	}
	else
	{
		*p = strcmp;
	}
	/*
		<numcmp의 경우>
		num1 > num2 면  1
		num1 < num2 면 -1
		num1 = num2 면 0

		<strcmp의 경우>
		str1 > str2 면 1
		str1 < str2 면 -1
		str1 = str2 면 0
	*/
}
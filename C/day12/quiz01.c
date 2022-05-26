 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 노드란? 데이터를 갖고있는 데이터 필드와 리스트의 다음 원소를 가리키는, 즉 다음 노드의 주소를 갖고있는 링크 필드(포인터)로 구성된 아이.
// 연결 리스트의 노드 구조체
struct node {
	char* name;		// 데이터를 저장할 멤버
	struct node* link;		// 다음 노드의 주소를 저장할 포인터
	// link는 node 구조체의 다른 노드의 주소
};

int getname(char*);
struct node* addlist(struct node*, char*);
char* namecopy(char*);
void listprint(struct node*);
struct node* invert(struct node* );// invert 함수 선언 할 것
// lead에 node 구조체로 만든 다른 노드의 주소를 인자로 하는 함수 invert는 struct node* 형태를 return 한다.

int main()
{
	// node랑 같은 모양의 another 노드인 root!
	struct node* root;
	char name[80];
	// 이 안에 아무것도 안넣었대.
	root = NULL;
	// 더이상 리턴받을 데이터가 없을때 까지. 즉, 입력이 끝날때 까지 반복문
	while (getname(name) != EOF)
	{
		// 이 name에는 getname을 통해 값이 입력되어있음.
		root = addlist(root, name);
	}
	listprint(root);
	root = invert(root); // 함수 콜
	printf("------ - invert------\n");
	listprint(root); // 역순화된 연결 리스트 출력
	return 0;
}

// invert 함수가 return 하는게 struct node* 이다
// 여기서 lead는 root. root에는 입력한 것의 주소가 들어있음 
struct node* invert(struct node* lead)
{
	// trail, middle 이라는 node체 형식의 노드 생성 
	struct node* trail, * middle;
	middle = NULL;
	while (lead != NULL)
	{
		// 그림참조
		trail = middle;
		middle = lead;
		// lead를 이전 lead에 있던 걸로 갱신
		lead = lead->link;
		middle->link = trail;
	}
	// Kim->list = park, 근데 이 park->shim 이 있는 구조임. 
	// middle은 Kim을 반환 (node 형식의 Kim 노드의 주소값 반환 킴 노드의 list에는 park노드가 있고 park 노드의 list는 shim을 반환한다)
	return middle;
}

// < 값을 입력 받고 그걸 노드에 담은뒤 노드의 주소값을 리턴 >
// 그림으로 치면 블럭 두칸중 첫번째 칸에 shim 넣고 두번째꺼에 '\n'를 넣는 그 단계. 데이더 다 이릉면 EOF넣고.
int getname(char* pname)
{
	int i = 0; char c;
	// ctrl + Z 하면 EOF(End Of File) 값이 -1로 저장. 
	// 값을 입력 받은게 C. C의 입력이 끝날때 까지 반복문
	while (((c = getchar()) != '\n') && c != EOF)
	{
		// 방금 입력받은 문자를 name[80]에 하나씩 넣겠다.
		*(pname + i++) = c;
	}
	// 문자열이 끝나면 저 블럭 끝에 '\n'넣어라.
	if (c == '\n')
		*(pname + i) = '\0';
	// EOF 파일을 다 불러오면 name 주소에도 EOF 대입해라 >  대충 끝낸다는 거 같음.
	if (c == EOF)
		*pname = EOF;
	return *pname;
}

// <link 블록 생성 그 새로운 블럭의 주소 리턴>
// root가 밑에서는  p, name이 w / 여기서 p는 블록말하는거.
struct node* addlist(struct node* p, char* w)
{
	if (p == NULL) {
		// node 구조체 모양을 만들어.
		p = (struct node*)malloc(sizeof(struct node));
		// 새로운 노드 p의 name을 namecopy(w)에 주어진 값으로 할당함.
		p->name = namecopy(w);
		// 새로운 노드 p의 link를 NULL로 할당함.
		p->link = NULL;
	}
	// p가 NULL이 아니라면 (입력 받아진 상태리면)
	else
		// 노드 p의 link에 p의 link를 주소로 하는 인자와 name의 인자를 사용하는
		// 함수 addlist를 대입해라.
		p->link = addlist(p->link, w);
	return p;
}

// 여기서 s는 name의 주소, namecopy 앞에 * 있으니까, p의 주소 리턴한다는걸 
// 알 수 있음. <lead, middle 같이 새로 생성한 블록의 주소 리턴>
char* namecopy(char* s)
{
	char* p; int i = 0;
	// 새로운 블럭을 만들고 그 주소가 p
	p = (char*)malloc(strlen(s) + 1);
	// 새로운 블럭에 name을 대입한게 공백이 아니라면 i를 증가
	// 공백 나올때까지.
	while ((*(p + i) = *(s + i)) != '\0') i++;
	return p;
}

void listprint(struct node* p)
{
	// 포인트 변수가 NULL 값 나올때까지
	while (p != NULL) {
		printf("%s\n", p->name);
		p = p->link;
	}
}
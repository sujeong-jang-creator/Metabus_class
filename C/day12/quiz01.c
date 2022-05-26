 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ����? �����͸� �����ִ� ������ �ʵ�� ����Ʈ�� ���� ���Ҹ� ����Ű��, �� ���� ����� �ּҸ� �����ִ� ��ũ �ʵ�(������)�� ������ ����.
// ���� ����Ʈ�� ��� ����ü
struct node {
	char* name;		// �����͸� ������ ���
	struct node* link;		// ���� ����� �ּҸ� ������ ������
	// link�� node ����ü�� �ٸ� ����� �ּ�
};

int getname(char*);
struct node* addlist(struct node*, char*);
char* namecopy(char*);
void listprint(struct node*);
struct node* invert(struct node* );// invert �Լ� ���� �� ��
// lead�� node ����ü�� ���� �ٸ� ����� �ּҸ� ���ڷ� �ϴ� �Լ� invert�� struct node* ���¸� return �Ѵ�.

int main()
{
	// node�� ���� ����� another ����� root!
	struct node* root;
	char name[80];
	// �� �ȿ� �ƹ��͵� �ȳ־���.
	root = NULL;
	// ���̻� ���Ϲ��� �����Ͱ� ������ ����. ��, �Է��� ������ ���� �ݺ���
	while (getname(name) != EOF)
	{
		// �� name���� getname�� ���� ���� �ԷµǾ�����.
		root = addlist(root, name);
	}
	listprint(root);
	root = invert(root); // �Լ� ��
	printf("------ - invert------\n");
	listprint(root); // ����ȭ�� ���� ����Ʈ ���
	return 0;
}

// invert �Լ��� return �ϴ°� struct node* �̴�
// ���⼭ lead�� root. root���� �Է��� ���� �ּҰ� ������� 
struct node* invert(struct node* lead)
{
	// trail, middle �̶�� nodeü ������ ��� ���� 
	struct node* trail, * middle;
	middle = NULL;
	while (lead != NULL)
	{
		// �׸�����
		trail = middle;
		middle = lead;
		// lead�� ���� lead�� �ִ� �ɷ� ����
		lead = lead->link;
		middle->link = trail;
	}
	// Kim->list = park, �ٵ� �� park->shim �� �ִ� ������. 
	// middle�� Kim�� ��ȯ (node ������ Kim ����� �ּҰ� ��ȯ Ŵ ����� list���� park��尡 �ְ� park ����� list�� shim�� ��ȯ�Ѵ�)
	return middle;
}

// < ���� �Է� �ް� �װ� ��忡 ������ ����� �ּҰ��� ���� >
// �׸����� ġ�� �� ��ĭ�� ù��° ĭ�� shim �ְ� �ι�°���� '\n'�� �ִ� �� �ܰ�. ���̴� �� �̸��� EOF�ְ�.
int getname(char* pname)
{
	int i = 0; char c;
	// ctrl + Z �ϸ� EOF(End Of File) ���� -1�� ����. 
	// ���� �Է� ������ C. C�� �Է��� ������ ���� �ݺ���
	while (((c = getchar()) != '\n') && c != EOF)
	{
		// ��� �Է¹��� ���ڸ� name[80]�� �ϳ��� �ְڴ�.
		*(pname + i++) = c;
	}
	// ���ڿ��� ������ �� �� ���� '\n'�־��.
	if (c == '\n')
		*(pname + i) = '\0';
	// EOF ������ �� �ҷ����� name �ּҿ��� EOF �����ض� >  ���� �����ٴ� �� ����.
	if (c == EOF)
		*pname = EOF;
	return *pname;
}

// <link ��� ���� �� ���ο� ���� �ּ� ����>
// root�� �ؿ�����  p, name�� w / ���⼭ p�� ��ϸ��ϴ°�.
struct node* addlist(struct node* p, char* w)
{
	if (p == NULL) {
		// node ����ü ����� �����.
		p = (struct node*)malloc(sizeof(struct node));
		// ���ο� ��� p�� name�� namecopy(w)�� �־��� ������ �Ҵ���.
		p->name = namecopy(w);
		// ���ο� ��� p�� link�� NULL�� �Ҵ���.
		p->link = NULL;
	}
	// p�� NULL�� �ƴ϶�� (�Է� �޾��� ���¸���)
	else
		// ��� p�� link�� p�� link�� �ּҷ� �ϴ� ���ڿ� name�� ���ڸ� ����ϴ�
		// �Լ� addlist�� �����ض�.
		p->link = addlist(p->link, w);
	return p;
}

// ���⼭ s�� name�� �ּ�, namecopy �տ� * �����ϱ�, p�� �ּ� �����Ѵٴ°� 
// �� �� ����. <lead, middle ���� ���� ������ ����� �ּ� ����>
char* namecopy(char* s)
{
	char* p; int i = 0;
	// ���ο� ���� ����� �� �ּҰ� p
	p = (char*)malloc(strlen(s) + 1);
	// ���ο� ���� name�� �����Ѱ� ������ �ƴ϶�� i�� ����
	// ���� ���ö�����.
	while ((*(p + i) = *(s + i)) != '\0') i++;
	return p;
}

void listprint(struct node* p)
{
	// ����Ʈ ������ NULL �� ���ö�����
	while (p != NULL) {
		printf("%s\n", p->name);
		p = p->link;
	}
}
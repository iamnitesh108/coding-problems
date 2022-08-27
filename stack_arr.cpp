#include <iostream>
using namespace std;

struct Stack
{
	int size;
	int top;
	int *s;
};
void create(Stack *st)
{
	st->size = 5;
	st->top = -1;
	st->s = new int[st->size];
}
void push(Stack *st, int x)
{
	if (st->top == st->size - 1)
		cout << "Stack overflow";
	else
	{
		st->s[++st->top] = x;
	}
	cout << "\n";
}
int pop(Stack *st)
{
	int x = -1;

	if (st->top == -1)
		cout << "Stack Underflow\n";
	else
		x = st->s[st->top--];
	return x;
}
void Display(Stack st)
{
	int i;
	for (i = st.top; i >= 0; i--)
		cout << st.s[i];
	cout << "\n";
}

int main()
{
	Stack st;
	create(&st);

	push(&st, 10);
	push(&st, 20);
	push(&st, 30);
	push(&st, 40);

	Display(st);
}
#ifndef STACKATH_H
#define STACKADT_H

#include <stdbool.h> /*C99 only*/

typedef int Item; //int 라는 타입을 Item으로 redefinition
                  // 정수를 저장하는 스택을 만들고 있으므로 나중에 실수를 저장하는 스택을 만드려면
                  // 이 부분에서 int부분만 float이나 str로 바꾸면 된다.
                  // 코드의 재사용과 관련된 노하우

typedef struct stack_type *Stack; //Stack의 타입이 struct stack_type이 아니라 struct stack_type의 포인터다.
                                  //즉 stack이 가리키고 있는 장소에 struct stack_type이 있다.

Stack creat();
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);
Item peek(Stack s);

#endif
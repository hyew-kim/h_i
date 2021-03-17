#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

typedef struct _Node {
    int data;
    struct _Node* next;
} Node;


void push(Node* node, int num)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL)
        return;
    temp->data = num;
    temp->next = node->next;
    node->next = temp;
    puts("추가완료");
}
void pop(Node* node)
{
    if (node->next == NULL)
        return;
    while (1)
    {
        Node* temp = node->next;
        if (temp->next == NULL)
        {
            node->next = NULL;
            free(temp);
            break;
        }
        else
            node = node->next;
    }
}
Node* search(Node* node, int num)
{
    Node* find = node;
    while (find != NULL)
    {
        if (find->data == num)
        {
            return find;
            break;
        }
        else
            find = find->next;
    }
    return NULL;
}
void print_all(Node* node)
{
    Node* find = node;
    while (find != NULL)
    {
        if (find->data != 0)
            printf("%d\n", find->data);
        find = find->next;
    }
}
int main()
{
    Node* head = (Node*)malloc(sizeof(Node));
    if (head == NULL)
        return -1;
    head->data = 0;
    head->next = NULL;
    while (1)
    {
        puts("------------------");
        puts("1. push\n2. pop\n3. search\n4. print_all\n5. quit");
        puts("------------------");
        int n = 0;
        printf("번호 선택: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            int num = 0;
            scanf("%d", &num);
            push(head, num);
        }
        break;
        case 2:
        {
            pop(head);
        }
        break;
        case 3:
        {
            int num = 0;
            scanf("%d", &num);
            if (search(head, num))
                puts("존재하는 값입니다.");
        }
        break;
        case 4:
            print_all(head);
            break;
        default:
        {
            Node* ptr = head;
            while (ptr != NULL)
            {
                Node* temp = ptr;
                free(temp);
                ptr = ptr->next;
            }
        }
        return 0;
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

typedef struct _Node {
    int data;
    struct _Node* next;
} Node;


void insert(Node*node,int num) 
{
    Node* temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL)
        return ;
    temp->data = num;
    temp->next = node->next;
    node->next = temp;
    puts("�߰��Ϸ�");
}
void Remove(Node* node,int num)
{  //Ư�� ��� Ž���Ҷ��� Ž�� ������ �ʿ�
    Node* find = node;
    while (find != NULL)
    {
        if ((find->next) != NULL&&(find->next)->data == num)
        {
            Node* temp = find->next;
            find->next= temp->next;
            free(temp);
            puts("�����Ϸ�");
            break;
        }
        else
            find = find->next;
    }
}
Node* search(Node* node,int num)
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
        if(find->data!=0)
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
        puts("1. insert\n2. remove\n3. search\n4. print_all\n5. quit");
        puts("------------------");
        int n = 0;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            int num = 0;
            scanf("%d", &num);
            insert(head, num);
        }
            break;
        case 2:
        {
            int num = 0;
            scanf("%d", &num);
            Remove(head,num);
        }
            break;
        case 3:
        {
            int num = 0;
            scanf("%d", &num);
            if (search(head,num))
                puts("�����ϴ� ���Դϴ�.");
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
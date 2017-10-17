#define TRUE 1
#define FALSE 0

typedef struct node Node;
struct node {
    void *value;
    Node *next;
};

typedef struct pile Pile;
struct pile{
    Node *top;
    int count;
};

Pile *create_pile();
int is_pile_clear(Pile *pile);
int push_pile(Pile *pile, void *value);
int pop_pile(Pile *pile, void *value);

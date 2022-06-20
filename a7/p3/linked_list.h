// list struct defined //
struct list{
    int data;
    struct list *next;
};

// function prototypes //
struct list* addstart(struct list *head, int value);
struct list* addend(struct list *head, int value);
struct list* remfirst(struct list *head);
void printlist(struct list* head);
void freelist(struct list* head);
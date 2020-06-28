#include "passmgr.h"

void init_pass_list(PassList* list)
{
    list = (PassList*)malloc(sizeof(PassList));

}

void clear_list(PassList* list)
{
}

void clear_struct(password_t* t)
{
    free(t->title);
    free(t->username);
    free(t->password);
    free(t);
}

int main(void)
{
    PassList* list = (PassList*)malloc(sizeof(PassList));
    list->head = (password_t*)malloc(sizeof(password_t));
    list->head->title = (char*)malloc(sizeof(char) * 6);
    list->username = (char*)malloc(sizeof(char) * 27);
    list->head->title = "GMAIL";
    list->head->username = "peter.ryan.kurtz@gmail.com";
    printf("Hello, world! and [%s]\n", list->head->title);
    printf("Username: %s\n", list->head)
    return 0;
}


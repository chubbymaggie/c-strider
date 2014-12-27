
#include <stdlib.h>
#include <stdio.h>
typedef struct _redisClient
{
   int id;            /* Client incremental unique ID. */
} redisClient;

typedef void redisCommandProc(redisClient *c);

void infoCommand(redisClient *c) {}

typedef struct _redisCommand
{
   char *name;
   redisCommandProc *proc;
} redisCommand;

redisCommand * rcmd;

int main()
{
   rcmd = calloc(1, sizeof(redisCommand));
   rcmd->proc = infoCommand;
   printf("%p\n", rcmd->proc);
   init(10,0);
   visit_all();
   finish();
}

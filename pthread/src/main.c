#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void *thread_func(void *param) {
    printf("hello\n");
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t id;
    int rv = pthread_create(&id, NULL, thread_func, NULL);
    if (rv) {
        fprintf(stderr, "failed to create thread: error %d\n", rv);
        return EXIT_FAILURE;
    }
    pthread_join(id, NULL);
    return EXIT_SUCCESS;
}

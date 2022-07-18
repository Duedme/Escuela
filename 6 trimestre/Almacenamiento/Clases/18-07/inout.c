#include<stdio.h>
#include<errno.h>

int main() {
    fprintf(stdout, "fprintf");
    fprintf(stderr, "&s", strerrno(errno));

    return 0;
}
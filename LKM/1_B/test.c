#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_INT 100

int cmp_int(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int fd, value, number;
    fd = open("/proc/partb_1_15CS30002", O_RDWR);
    if(fd < 0) {
        printf("errror opening file\n");
        return 1;
    }
    /*
    // Integers sorting
    int N = 20;
    // write metadata
    char buf[2];
    buf[0]= (char)0xFF;
    buf[1] = (char)N;

    printf("%ld\n", write(fd, buf,strlen(buf)));


    int i;
    int arr[N];
    for (i = 0; i < N; i++) {
    int val = rand() % MAX_INT;
    char buff[4]; // 4 bytes for 32 bit ints
    sprintf(buff, "%d", val);
    arr[i] = val;

    printf("%s %d\n", buff, strlen(buff));

    if (write(fd, buff, strlen(buff)) != (N - i - 1)) {
    printf("Unexpected behaviour from write\n");
    break;
    }
    }
     *
     qsort(arr, N, sizeof(int), cmp_int);

     for (i = 0; i < N; i++) {
     char buff[4];

     if (read(fd, buff, 4) < 0) {
     printf("Unexpected behaviour from read\n");
// break;
};
int v = atoi(buff);
if (arr[i] != v) {
printf("Sorting order wrong from LKM: i = %d, expected = %d, found =  ", arr[i], v);
break;
}
}
*/
close(fd);

printf("Closing file\n");
return 0;
}


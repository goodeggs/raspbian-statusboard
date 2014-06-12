#include <sys/ioctl.h> 
#include <asm/ioctls.h> 
#include <stdio.h> 
#include <fcntl.h> 

int main(int argc, char *argv[]) { 
    int fd; 
    char shift_state; 

    fd = open("/dev/console", O_RDWR); 

    /* 
     * From console_ioctl: 
     *        TIOCLINUX, subcode=6 
     *               argp  points  to  a char which is set to the value of the kernel 
     *               variable shift_state.  (Since 1.1.32.) 
     */ 

    shift_state = 6; 
    ioctl(fd, TIOCLINUX, &shift_state); 

    printf("shift_state = %i\n", (int)shift_state); 

    close(fd); 

    return shift_state; 
}

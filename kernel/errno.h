#ifndef SYS_ERRNO_H
#define SYS_ERRNO_H

#include <errno.h>

// stolen from asm-generic/errno-base.h

#define _EPERM         -1 /* Operation not permitted */
#define _ENOENT        -2 /* No such file or directory */
#define _ESRCH         -3 /* No such process */
#define _EINTR         -4 /* Interrupted system call */
#define _EIO           -5 /* I/O error */
#define _ENXIO         -6 /* No such device or address */
#define _E2BIG         -7 /* That's what she said */
#define _ENOEXEC       -8 /* Exec format error */
#define _EBADF         -9 /* Bad file number */
#define _ECHILD       -10 /* No child processes */
#define _EAGAIN       -11 /* Try again */
#define _ENOMEM       -12 /* Out of memory */
#define _EACCES       -13 /* Permission denied */
#define _EFAULT       -14 /* Bad address */
#define _ENOTBLK      -15 /* Block device required */
#define _EBUSY        -16 /* Device or resource busy */
#define _EEXIST       -17 /* File exists */
#define _EXDEV        -18 /* Cross-device link */
#define _ENODEV       -19 /* No such device */
#define _ENOTDIR      -20 /* Not a directory */
#define _EISDIR       -21 /* Is a directory */
#define _EINVAL       -22 /* Invalid argument */
#define _ENFILE       -23 /* File table overflow */
#define _EMFILE       -24 /* Too many open files */
#define _ENOTTY       -25 /* Not a typewriter */
#define _ETXTBSY      -26 /* Text file busy */
#define _EFBIG        -27 /* File too large */
#define _ENOSPC       -28 /* No space left on device */
#define _ESPIPE       -29 /* Illegal seek */
#define _EROFS        -30 /* Read-only file system */
#define _EMLINK       -31 /* Too many links */
#define _EPIPE        -32 /* Broken pipe */
#define _EDOM         -33 /* Math argument out of domain of func */
#define _ERANGE       -34 /* Math result not representable */
#define	_EDEADLK      -35 /* Resource deadlock would occur */
#define	_ENAMETOOLONG -36 /* File name too long */
#define	_ENOLCK       -37 /* No record locks available */
#define	_ENOSYS       -38 /* Invalid system call number */

#define	_EOVERFLOW    -75 /* Value too large for defined data type */
#define _ELIBBAD      -80 /* Accessing a corrupted shared library */

int err_map(int err);
int errno_map();

#endif

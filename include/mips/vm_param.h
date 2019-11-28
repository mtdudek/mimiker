#ifndef _MIPS_VM_PARAM_H_
#define _MIPS_VM_PARAM_H_

#define KERNEL_SPACE_BEGIN 0xc0000000
#define KERNEL_SPACE_END 0xffffe000

#define USER_SPACE_BEGIN 0x00400000
#define USER_SPACE_END 0x80000000

#define PAGESIZE 4096

#define VM_PHYSSEG_NMAX 16

#endif /* !_MIPS_VM_PARAM_H_ */

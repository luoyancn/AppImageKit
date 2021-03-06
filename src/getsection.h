#ifndef GETSECTION_H
#define GETSECTION_H

/* Return the offset, and the length of an ELF section with a given name in a given ELF file */
int get_elf_section_offset_and_length(const char* fname, const char* section_name, unsigned long *offset, unsigned long *length);

int print_hex(const char* fname, unsigned long offset, unsigned long length);

int print_binary(const char* fname, unsigned long offset, unsigned long length);

#endif /* GETSECTION_H */

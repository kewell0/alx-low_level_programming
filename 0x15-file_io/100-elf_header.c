#include <stdio.h> 
	#include <elf.h> 

	int main(void) 
	{ 
		FILE *fd = fopen("./cp", "rb"); 
	#if defined (__linux) 
	#  if defined(__x86_64) 
		Elf64_Ehdr Elf_Ehdr; 
	#  elif defined(__i386) 
		Elf32_Ehdr Elf_Ehdr; 
	#  endif	 
	#endif 
		fread(&Elf_Ehdr, sizeof(char), sizeof(Elf_Ehdr), fd); 
	 
		int i; 
		unsigned char ident[4], magic[4]; 
		for (i = 0; i < 4; i++) { 
			ident[i] = Elf_Ehdr.e_ident[i]; 
		} 
		fclose(fd); 
	 
		snprintf(magic, sizeof(magic), "%s", &ident[sizeof(ident)+1]); 
		printf("%s\n", magic); 
	 
		return 0; 
	} 
	
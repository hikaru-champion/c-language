int main(int args, char * argv[]) {
	return 0;
}

void _start(int args){
	main(0, 0);

	asm("mov1	$0,%ebx\n"
		"mov1	$1,%eax\n"
		"int	$0x08");
}

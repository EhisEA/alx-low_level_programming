

int print_alphabet(void){
        char start = 'a';
        char end = 'z';

        ++end;
        while (start != end) {
                putchar(start);
                ++start;
        }
        putchar('\n');
        return (0);
}

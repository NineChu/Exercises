char getch(void)
{
char x;
asm{
    MOV ah, 0;
    INT 0x16;
    MOV x,AL;
}
return x;
}

void main()
{
    getch();
}
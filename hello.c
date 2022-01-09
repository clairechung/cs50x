#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello, cs50x!\n");
    string answer = get_string("What's your name? ");
    printf("Thanks, %s\n", answer);
}
// $ make hello
// $ ./hello

// -> dot means go into current folder, 
// slash means run the code called hello in this current folder
// hello created (=> compiled! )
// https://github.com/cs50/libcs50/issues/189#issuecomment-693022677 -> cs50.h
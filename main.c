#include <stdio.h>

#define txt "My first code in C"

int main()
{
    char text[50] = "";
    float height = 0.0;
    int age = 0;

    printf("%s,\n", txt);
    printf("-=-=-=-=-=-=-\n");
    printf("Type here your name: ");
    scanf("%s.\n", &text);

    printf("And here, type your age: ");
    scanf("%d.\n", &age);

    printf("And finally, type here you height: ");
    scanf("%f\n", &height);

    printf("Okay.... Lets see. Your name is %s, you is %d years old and your height its %.2f", text, age, height);
}
#include <stdio.h>
int main()
{
    int train_length;
    int bridge_length;
    printf("\nEnter the length of the train: ");
    scanf("%d",&train_length);
    printf("\nEnter the length of the bridge: ");
    scanf("%d",&bridge_length);

    printf("\nThe distance travelled by the train to cross the bridge completely is %d",train_length+bridge_length);

    printf("\n");

    return 0;
}
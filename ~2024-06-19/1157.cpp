#include <stdio.h>

#define num 1000001

int main() {
    char apb[num];
    // ���ĺ� �빮�� ��ŭ�� count �ϸ� �ǰڳ׿�
    int count[26] = { 0, };

    scanf("%s", apb);

    // ���� ���ڿ��� ���̸� �� �ʿ�� ���� �� �����ϴ�
    // len = strlen(apb); 

    // �Է� ���� ���ڿ��� ������ �ݺ�
    for (int i = 0; apb[i] != '\0'; i++) {
        // ���� �ҹ����̸� �빮�ڷ� ��ȯ
        if (apb[i] >= 'a' && apb[i] <= 'z') apb[i] -= 'a' - 'A';
        // ����� �����մϴ�
        count[apb[i] - 'A']++;
    }

    // �ִ밪�� ���� count �迭�� index�� ã���ϴ�
    // ������ʹ� 26 ũ���� �迭 �˻��̱� ������ �ð��� ���� �ɸ��� �ʽ��ϴ�
    int max = 0;
    for (int i = 1; i < 26; ++i)
    {
        if (count[max] < count[i])
            max = i;
    }
    // Ȥ�� ���� ���� �ִ��� Ȯ���մϴ�
    int duplicated = 0;
    for (int i = max + 1; i < 26; ++i)
    {
        if (count[max] == count[i])
        {
            duplicated = 1;
            break;
        }
    }

    // ����� ����մϴ�
    if (duplicated)
        printf("?");
    else
        printf("%c", 'A' + max);

    return 0;
}

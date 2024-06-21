#include <stdio.h>

#define num 1000001

int main() {
    char apb[num];
    // 알파벳 대문자 만큼만 count 하면 되겠네요
    int count[26] = { 0, };

    scanf("%s", apb);

    // 굳이 문자열의 길이를 알 필요는 없을 것 같습니다
    // len = strlen(apb); 

    // 입력 받은 문자열의 끝까지 반복
    for (int i = 0; apb[i] != '\0'; i++) {
        // 만약 소문자이면 대문자로 변환
        if (apb[i] >= 'a' && apb[i] <= 'z') apb[i] -= 'a' - 'A';
        // 결과를 저장합니다
        count[apb[i] - 'A']++;
    }

    // 최대값을 가진 count 배열의 index를 찾습니다
    // 여기부터는 26 크기의 배열 검색이기 때문에 시간이 거의 걸리지 않습니다
    int max = 0;
    for (int i = 1; i < 26; ++i)
    {
        if (count[max] < count[i])
            max = i;
    }
    // 혹시 같은 값이 있는지 확인합니다
    int duplicated = 0;
    for (int i = max + 1; i < 26; ++i)
    {
        if (count[max] == count[i])
        {
            duplicated = 1;
            break;
        }
    }

    // 결과를 출력합니다
    if (duplicated)
        printf("?");
    else
        printf("%c", 'A' + max);

    return 0;
}

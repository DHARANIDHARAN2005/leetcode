char* multiply(char* num1, char* num2) {
    if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0) {
        return strdup("0");
    }

    int l1 = strlen(num1), l2 = strlen(num2);
    int result_len = l1 + l2;
    char* num = (char*)malloc((result_len + 1) * sizeof(char));

    for (int i = 0; i < result_len; i++) {
        num[i] = '0';
    }
    num[result_len] = '\0';

    for (int i = l1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = l2 - 1; j >= 0; j--) {
            int temp = (num[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
            num[i + j + 1] = (temp % 10) + '0';
            carry = temp / 10;
        }
        num[i] += carry;
    }

    int index = 0;
    while (index < result_len - 1 && num[index] == '0') {
        index++;
    }

    char* result = strdup(num + index);
    free(num);
    return result;
}
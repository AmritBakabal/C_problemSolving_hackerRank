#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// dictionary = lexicographic.
int lexicographic_sort(const char* a, const char* b)
{
    int length_a = strlen(a);
    int length_b = strlen(b);
    int small_length = length_a;
    if (length_a > length_b) {
        small_length = length_b;
    }
    for (int i = 0; i < small_length; i++) {
        if (a[i] != b[i]) {
            if (a[i] > b[i]) {
                return 1;
            } else if (a[i] < b[i]) {
                return -1;
            }
        }
    }
    return length_a - length_b;
}

int sort_by_length(const char* a, const char* b)
{
    // return strlen(a) - strlen(b);
    int length_a = strlen(a);
    int length_b = strlen(b);
    if (length_a < length_b) {
        return -1;
    } else if (length_a > length_b) {
        return 1;
    } else {
        return lexicographic_sort(a, b);
    }
}

int lexicographic_sort_reverse(const char* a, const char* b)
{
    int length_a = strlen(a);
    int length_b = strlen(b);
    int small_length = length_a;
    if (length_a > length_b) {
        small_length = length_b;
    }
    for (int i = 0; i < small_length; i++) {
        if (a[i] != b[i]) {
            if (a[i] > b[i]) {
                return -1;
            } else if (a[i] < b[i]) {
                return 1;
            }
        }
    }
    return length_b - length_a;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
    int length_a = strlen(a);
    int length_b = strlen(b);
    int distinct_a = 0;
    int distinct_b = 0;
    int count;
    // added:
    for (int i = 0; i < length_a; i++) {
        count = 0;
        for (int j = i + 1; j < length_a; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == 0) {
            distinct_a++;
        }
    }
    for (int i = 0; i < length_b; i++) {
        count = 0;
        for (int j = i + 1; j < length_b; j++) {
            if (b[i] == b[j]) {
                count++;
            }
        }
        if (count == 0) {
            distinct_b++;
        }
    }
    if (distinct_a < distinct_b) {
        return -1;
    } else if (distinct_a > distinct_b) {
        return 1;
    } else {
        return lexicographic_sort(a, b);
    }
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b))
{

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            int c = cmp_func(arr[j], arr[j + 1]);
            if (c > 0) {
                // swapping:
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
    arr = (char**)malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}
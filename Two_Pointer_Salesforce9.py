def check(A, n, B, m):
    prefB = [-1] * m
    sufB = [-1] * m

    i = 0
    j = 0
    count = 0

    # First pass to populate prefB
    while i < m and j < n:
        if A[j] == B[i]:
            prefB[i] = j
            i += 1
            j += 1
            count += 1
        else:
            j += 1

    i = m - 1
    j = n - 1

    # Second pass to populate sufB
    while i >= 0 and j >= 0:
        if A[j] == B[i]:
            sufB[i] = j
            i -= 1
            j -= 1
        else:
            j -= 1

    good = 0

    # Third pass to count 'good' elements
    for i in range(m):
        l = prefB[i - 1] if i > 0 else -1  # Handling edge case
        r = sufB[i + 1] if i < m - 1 else n  # Handling edge case
        if l < r:
            good += 1

    print(good)

    return True  # You can change this return value as per your requirement


A = [1, 2, 5, 8, 8, 6, 5, 4, 3]
n = len(A)
B = [9, 9]
m = len(B)

check(A, n, B, m)

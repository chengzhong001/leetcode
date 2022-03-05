
def binary_search(target, arr, left, right):
    """

    >>> arr = [2, 3, 4, 10, 40]
    >>> target = 3
    >>> binary_search(target, arr, 0, 5)
    [[2, 3, 4, 10, 40], [2, 3]]

    >>> arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30]
    >>> target = 20
    >>> binary_search(target, arr, 0, 12)
    [[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30], [8, 9, 10, 20, 30], [20, 30], [20]]

    >>> arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30]
    >>> target = 20
    >>> binary_search(target, arr, 0, 10)
    [[1, 2, 3, 4, 5, 6, 7, 8, 9, 10], [7, 8, 9, 10], [10], []]

    >>> arr = [2, 3, 4, 10, 40]
    >>> target = 30
    >>> binary_search(target, arr, 0, 5)
    [[2, 3, 4, 10, 40], [10, 40], [10], []]

    # Add more tests

    """

    mid = (left + right) // 2
    if left > right or mid == right:
        return [[]]

    if arr[mid] == target:
        return [arr[left : mid + 1]]

    elif arr[mid] > target:
        return [arr[left:right]] + binary_search(target, arr, left, mid)
    else:
        return [arr[left:right]] + binary_search(target, arr, mid + 1, right)


if __name__ == "__main__":
    import doctest
    doctest.testmod(verbose=True)
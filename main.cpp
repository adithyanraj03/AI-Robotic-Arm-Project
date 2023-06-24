function quickSort(arr, low, high):
    if low < high:
        pivotIndex = partition(arr, low, high)
        quickSort(arr, low, pivotIndex - 1)
        quickSort(arr, pivotIndex + 1, high)

function partition(arr, low, high):
    pivotValue = arr[high]
    i = low - 1

    for j = low to high - 1:
        if arr[j] < pivotValue:
            i = i + 1
            swap(arr[i], arr[j])

    swap(arr[i + 1], arr[high])
    return i + 1

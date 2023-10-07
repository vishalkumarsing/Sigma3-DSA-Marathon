def merge_sort(arr):
    # Base case: If the array has one or zero elements, it is already sorted
    if len(arr) <= 1:
        return arr

    # Split the array into two halves
    mid = len(arr) // 2
    left_half = arr[:mid]
    right_half = arr[mid:]

    # Recursively sort both halves
    left_half = merge_sort(left_half)
    right_half = merge_sort(right_half)

    # Merge the sorted halves
    sorted_arr = merge(left_half, right_half)

    return sorted_arr

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Compare elements from the left and right arrays and merge them in sorted order
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # Append any remaining elements from both arrays
    merged.extend(left[left_index:])
    merged.extend(right[right_index:])

    return merged

# Get user input for the array
input_str = input("Enter space-separated integers for the array: ")
arr = list(map(int, input_str.split()))

# Apply Merge Sort to the input array
sorted_arr = merge_sort(arr)
print("Sorted array:", sorted_arr)

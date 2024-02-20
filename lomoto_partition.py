#!/usr/bin/python3

def lomoto_partition(list_, s, e):
    pivot = list_[e]
    pindex = s
    tmp = None
    
    for i in range(s,e):
        if list_[i] <= pivot:
            tmp = list_[i]
            list_[i] = list_[pindex]
            list_[pindex] = tmp
            pindex += 1
    tmp = list_[pindex]
    list_[pindex] = list_[e]
    list_[e] = tmp
    return pindex

A = [7,2,1,6,8,5,3,4]
print(f"before: {A}")
pivot_idex = lomoto_partition(A, 0, len(A) - 1)
print("pivot index: {} and pivot value: {} ".format(pivot_idex, A[pivot_idex]))
print(f"After: {A}")

def QuickSort(A, s, e):
    if s < e:
        pindex = lomoto_partition(A, s, e)
        QuickSort(A, s, pindex-1)
        QuickSort(A, pindex+1, e)

print("Applying quick sort algorothm: ")

QuickSort(A, 0, len(A)-1)
print(f"sorted A: {A}")